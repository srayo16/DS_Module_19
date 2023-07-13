/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool flag = false;

void printing(BinaryTreeNode<int> *root, int x)
{

    if (root == NULL)
        return;

    if (root->data == x)
    {
        flag = true;
        return;
    }

    printing(root->left, x);
    printing(root->right, x);
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    // Write your code here

    printing(root, x);
    return flag;
}