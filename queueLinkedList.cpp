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
struct node *ptr=NULL;

void enqueue()
 {
 	int d;
 	cout<<"Enter the value to insert into queue";
 	cin>>d;
 	node *temp=new node();
 	temp->data=d;
 	if(head==NULL)
 		{
 		   temp->next=head;
 		   head=temp;
 		   ptr=head;
 		}
 	else
 	   {
          ptr->next=temp;
          ptr=temp;

 	   }	

 }
void dequeue()
 {
    node *temp=new node();
    temp=head;
    if(head==NULL)
     {
     	cout<<"queue is empty";
     }
    else
     {
        temp=temp->next;
        head=temp;
     } 	

 } 
void show()
 {
 	cout<<"\n";
    node *temp=new node();
    temp=head;
    while(temp!=NULL)
     {
       cout<<temp->data<<"->";
       temp =temp->next;
     }

 } 

int main()
 {
 	 int choice;
    while(1)
    {
      cout<<"\n";
      cout<<"1.Enter into Queue"<<endl;
      cout<<"2.Delete from Queue"<<endl;
      cout<<"3.Show the Queue"<<endl;
      cout<<"4.exit"<<endl;
      cin>>choice;
      switch(choice)
       {
       	case 1:enqueue();
       	break;
       	case 2:dequeue();
       	break;
       	case 3:show();
       	break;
       	case 4:exit(1);
       	break;
       	default:cout<<"Invalid input"<<endl;
       	break;
       }


    }
    getch();
 }