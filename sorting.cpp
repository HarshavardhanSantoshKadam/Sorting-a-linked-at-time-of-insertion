#include<iostream>
#include<cstring>
using namespace std;

struct node{
	int data;
	struct node* next;
};
typedef struct node node;


class llist
{
   private :
            int totalnodes;
			node* first;
			node*last;
			
	public :
	     llist()
		 {
		 	totalnodes=0;
		 	first=NULL;
		 	last=NULL;
			 }	
		
		node* createnode()
		{
			int a;
			cout<<"Enter data"<<endl;
			cin>>a;
			
			node* newnode=new node();
			newnode->data=a;
			newnode->next=NULL;
			return newnode;
		}
		
		bool isEmpty()
		{
			if(first== NULL && last==NULL)
			{
				return true;
			}
			return false;
		}
			 
	   void add()
	   {
	   	  node* newnode=createnode();
	   	   
	   	    if(isEmpty())
	   	    {
	   	    	first=newnode;
	   	    	last=newnode;
			   }
			
			else{
				  if(first->data > newnode->data)
				  {
				  	newnode->next=first;
				  	first=newnode;
				  	cout<<"added 1"<<endl;
				  	
				  }
				  else if(last->data <= newnode->data)
				  
				  {
				      last->next=newnode;
					  last=newnode;
					  		cout<<"added 2"<<endl;
				  }
				  
				  else{
				  	node*temp=first;
				  	while(temp->next->data <= newnode->data){
				  		temp=temp->next;
					  }
					  newnode->next=temp->next;
					  temp->next=newnode;
				  		cout<<"added 3"<<endl;
				  }
				
				
				
				
				
				
				
				 
			}
	   	
	   }
	   
	   void display()
	   {
	   	   node* temp=first;
	   	   
	   	    while(temp != NULL)
	   	    {  //cout<<"display called"<<endl;
	   	    	cout<<temp->data;
	   	    	temp=temp->next;
			   }
	   }
	
};

int main()
{
	llist l;
	l.add();
	l.add();
	l.add();
	l.add();
	
	
	l.display();
	return 0;
	
}
