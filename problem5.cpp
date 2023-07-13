#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
bool flag = true;
void checkWithOrder(BinaryTreeNode<int> *root)
{

    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        if ((f->left && !f->right) || (!f->left && f->right))
        {
            flag = false;
            break;
        }

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    // Write your code here.
    flag = true;
    checkWithOrder(root);

    return flag;
}