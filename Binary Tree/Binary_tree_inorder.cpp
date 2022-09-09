#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
     int val;
     node *left;
     node *right;
     node(int _val)
     {
        val=_val;
        left=right=NULL;
     }
}; 
void inorder(class node *Node)
{
    if(Node==NULL)
    return;

   /* first recur on left child */
    inorder(Node->left);
  
    /* then print the data of node */
    cout << Node->val << " ";
  
    /* now recur on right child */
    inorder(Node->right);
}
int main()
{
       node *root=new node(1);
       root->left=new node(2);
       root->right=new node(3);
       root ->left->left=new node(4);
       root->right->left=new node(6);
       root->right->right=new node(5);
       inorder(root);
}