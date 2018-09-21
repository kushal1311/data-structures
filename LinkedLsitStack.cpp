#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node
 {
 	int data;
 	node *next;
 };
struct node *head=NULL;

void push()
  {
  	 int d;
  	 cout<<"Enter the value to push"<<endl;
  	 cin>>d;
     node *temp=new node();
     temp->data=d;
     if(head==NULL)
     	{
     		temp->next=NULL;
     		head=temp;
     	}
     else
        {
          temp->next=head;
          head=temp;
        }	
  }

 void pop()
  {
    node *temp=new node();
    temp=head;
    if(temp->next!=NULL)
     {
        head=temp->next; 
     }
    else
     {
       cout<<"Stack is Empty"<<endl;
     }
  } 

void show(node *sample)
 {
  
  node *temp=new node();
  temp=sample;
  if(temp==NULL)
   {
   	return;
   }
  cout<<temp->data<<"->";
  sample=temp->next;
  show(sample);
  

 }
int main()
 {
 	int choice;
 	while(1)
 	{
 	  cout<<"\n";
 	  cout<<"1.Push"<<endl;
 	  cout<<"2.pop"<<endl;
 	  cout<<"3.show"<<endl;
 	  cout<<"4.exit"<<endl;
 	  cin>>choice;
 	  switch(choice)
 	   {
 	   	case 1:push();
 	   	break;
 	   	case 2:pop();
 	   	break;
 	   	case 3:show(head);
 	   	break;
 	   	case 4:exit(1);
 	   	break;
 	   	default:cout<<"Invalid input";
 	   	break;
 	   }
     
 	}
  getch();
 } 
