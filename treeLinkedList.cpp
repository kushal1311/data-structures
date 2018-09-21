#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node
 {
 	int data;
 	node *left;
 	node *right;
 };
 struct node *root=NULL;

 

void insert()
 {
 	int d;
 	cout<<"Enter the value to insert"<<endl;
 	cin>>d;
    node *temp=new node();
    temp->data=d;
    if(root==NULL)
     {
     	temp->left=NULL;
     	temp->right=NULL;
     	root=temp;
     }
    else
     {
     	node *ptr=new node();
     	ptr=root;
     	 {
     	 	
     	 	node treverse(node *temp2,node *temp)
     	 		{ 
     	 		 node *ptr=new node();	
     	 		 ptr=temp2;
     	 		 if(temp->data<ptr->data)
     	 			{ 
     	 			  while(ptr->left!=NULL)
     	 			   {	
     	 			     ptr=ptr->left;
     	 			     treverse(ptr,temp);
     	 		       }
     	 		        ptr->left=temp;
     	 		        cout<<"inserted to left side"<<endl;
     	 			}	
     	 		 else if(temp->data>ptr->data)
     	 		    {
     	 		    	while(ptr->right!=NULL)
     	 		    	 {
                           ptr=ptr->right;
                           treverse(ptr,temp);
     	 		    	 }
     	 		    	 ptr->right=temp;
     	 		    	 cout<<"Inserted to right side";
     	 		    }	
     	 		}

    	 }

     } 
 }


int main()
 {
 	int choice;
 	while(1)
 	 {
 	 	cout<<"\n";
 	 	cout<<"1.Insert into tree"<<endl;
 	 	cout<<"2.serach from tree"<<endl;
 	 	cout<<"3.delete from tree"<<endl;
 	 	cout<<"4.Display the tree"<<endl;
 	 	cout<<"5.exit";
        cin>>choice;
        switch(choice)
         {
         	case 1:insert();
         	break;
         	case 2:
         	break;
         	case 3:
         	break;
         	case 4:
         	break;
         	case 5:exit(1);
         	break;
         	default:cout<<"Invalid input"<<endl;
         	break; 
         }
 	 }
 	getch(); 
 }