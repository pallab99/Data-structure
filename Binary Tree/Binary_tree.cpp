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
int main()
{
       node *root=new node(1);
       root->left=new node(2);
       root->right=new node(3);
       root ->left->left=new node(4);
       root->right->right=new node(5);
}