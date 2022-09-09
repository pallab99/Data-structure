#include<iostream>
#include<cstdio>
using namespace std;
struct node
{
	int value;
    node *nxt;
    node(){
    value=0;
    nxt=NULL;
    }
}*n;
void insert(int num) 
{
	node *t = n;
	while(t->nxt != NULL) {
		t = t->nxt;
	}
	t->value = num;
	t->nxt = new node();
}
bool search(struct node* head, int x)  
{  
    if (head == NULL)  
        return false;  
    if (head->value == x)  
        return true;  
    return search(head->nxt, x);  
}  
int main()
{
    n = new node();
      insert(1);
      insert(2);
      insert(3);
      insert(4);
      insert(5);
      if(search(n,2))
      cout<<"2 -->> found"<<endl;
      else 
      cout<<"2 -->> not found"<<endl;
      if(search(n,6))
      cout<<"6 -->> found"<<endl;
      else 
      cout<<"6 -->> not found"<<endl;

}