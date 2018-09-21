#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct node
{
	int data;
	node *next;
	node *prev;
};

struct node *head=NULL;

void insert_begin(int data)
 {
   int d=data;
   node *temp=new node();
   if(head==NULL)
    {
       temp->data=d;
       temp->next=NULL;
       temp->prev=NULL;
       head=temp;
    }
   else
    {
       temp->data=d;
       temp->next=head;
       temp->prev=NULL;
       head->prev=temp;
       head=temp;

    }

 }

void insert_end()
  {
  	int d;
  	cout<<"enter value to insert into list";
  	cin>>d;
  	node *temp=new node();
  	temp=head;
  	
    if(temp==NULL)
     {
     	insert_begin(d);
     }
    else
     {
       while(temp->next!=NULL)
        {
        	temp=temp->next;
        } 
       node *temp2=new node();
       temp2->data=d;
       cout<<"3"; 
       temp2->prev=temp;
       temp2->next=NULL;
       temp->next=temp2;      
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
// screen clear function 
void clrscr()
 {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
 }

int main() 
 {
 	clrscr();
 	int data;
    int choice;
    while(1)
     {  cout<<"\n";
     	cout<<"1.Insert into list at begining"<<endl;
     	cout<<"2.Insert into list at End"<<endl;
     	cout<<"3.Show List"<<endl;
     	cout<<"4.Exit"<<endl;
     	cin>>choice;
     	switch(choice)
     	 {
     	 	case 1:cout<<"Enter value to insert into list";
     	 	cin>>data;
     	 	insert_begin(data);
     	    break;
     	    case 2:insert_end();
     	    break;
     	 	case 3:show(head);
     	 	break;
     	 	case 4:exit(1);
     	 	break;
     	 	default: cout<<"Invalid input";
     	 	break;
     	 }

     }
 	getch();
 }