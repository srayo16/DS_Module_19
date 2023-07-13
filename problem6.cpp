/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

// void levelOrder(TreeNode<int> *root)
// {
//     list<int> s;
//     queue<TreeNode<int> *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         TreeNode<int> *f = q.front();
//         q.pop();

//         s.push_back(f->val);

//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }

//     s.reverse();

//     while (!s.empty())
//     {
//         cout << s.front() << " ";
//         s.pop_front();
//     }
// }
#include <bits/stdc++.h>
using namespace std;
vector<int> reverseLevelOrder(TreeNode<int> *root)
{
    // Write your code here.
    vector<int> s;
    queue<TreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode<int> *f = q.front();
        q.pop();

        s.push(f->val);

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    reverse(s.begin(), s.end());

    return s;
}
