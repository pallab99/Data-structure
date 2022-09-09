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
void postorder(class node *Node)
{
    if(Node==NULL)
    return;

   /* first recur on left child */
    postorder(Node->left);
  
  
    /* now recur on right child */
    postorder(Node->right);
    /* then print the data of node */
    cout << Node->val << " ";
}
int main()
{
       node *root=new node(1);
       root->left=new node(2);
       root->right=new node(3);
       root ->left->left=new node(4);
       root->right->left=new node(5);
       root->right->right=new node(6);
       postorder(root);
}
