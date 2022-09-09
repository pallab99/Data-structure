#include <bits/stdc++.h>
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
void inserrt(int num) {
	node *t = n;
	while(t->nxt != NULL) {
		t = t->nxt;
	}
	t->value = num;
	t->nxt = new node();
}
int search(node* head, int x)  
{  
    node* current = head;
    while (current != NULL)  
    {  
        if (current->value == x)  
            return 1;  
        current = current->nxt;  
    }  
    return 0;  
}  
int main()
{
    n = new node();
    inserrt(1);
    inserrt(2);
    inserrt(3);
    inserrt(4);
    inserrt(5);
      if(search(n,2))
      cout<<"2 -->> found"<<endl;
      else 
      cout<<"2 -->> not found"<<endl;
      if(search(n,6))
      cout<<"6 -->> found"<<endl;
      else 
      cout<<"6 -->> not found"<<endl;

}