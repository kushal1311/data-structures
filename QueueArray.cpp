#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define max 10
int arr[max];
int front=-1;
int rear=-1;

void enqueue()
 {
   int d;
   cout<<"Enter the data to push: ";
   cin>>d;
   if(front<max-1&&rear<max-1)
   	 {
        if(front==-1&&rear==-1)
         {
           front=front+1;
           rear=rear+1; 
           arr[front]=d;     
         }
        else
         {
           rear=rear+1;
           arr[rear]=d; 
         }	
   	 }
   	else
   	 {
   	 	cout<<"Queue is full";
   	 } 	 

 }
void dequeue()
 {
   if(front==-1&&rear==-1)
   	 {
   	 	cout<<"Queue is empty";
   	 }
   else
    {
      if(front<rear)
       {
       	 front=front+1;
       } 	
      else if(front==rear)
       {
       	front=-1;
       	rear=-1;
       } 
    } 
 } 

void show()
 {
 	int i;
 	if(front==-1&&rear==-1)
 		{
 			cout<<"Queue is Empty";
 		}
    else
     {
     	for(i=front;i<=rear;i++)
     	{
 		cout<<arr[i]<<endl;
 	    }
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
