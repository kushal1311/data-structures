
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h>
using namespace std;

struct node
 {
    int data;
    node *next;
 };
 struct node *head = NULL;

 void insert_begin(int d)
  {
      int c=d;
      node *temp =new node(); 
	
  if(head==NULL)
     {
        temp->data=d;
        temp->next=NULL;
        head=temp; 
     }
   else
    {
	   temp->data=d;
	   temp->next = head;
	   head = temp;
	  }

  }
 void insert_End()
    {  
       int d;
       cout<<"Enter the data to insert at  end: ";
       cin>>d; 
       node *temp = new node();
       temp->data=d;
       temp->next=NULL;

       if(head==NULL) // list is empty
        {
          head=temp;         
        }
       else
        { 
          node *ptr = head;
          while(ptr->next!=NULL)
           {
             ptr=ptr->next;
           }
           ptr->next=temp;
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

void inset_Pos()
 {
   int pos, d,counter;
   cout<<"Enter the position to add the value: ";
   cin>>pos;
   cout<<"Enter the value to add at "<<pos<<" position: ";
   cin>>d;
   node *temp=new node();
   temp->data=d;
   node *s=head;  
    
    while (s != NULL)
      {
        s = s->next;
        counter++;
      }

   if(pos==1)
    {
      insert_begin(pos);
    }
   else
    
    {
      node *ptr = head;
          for(int i=1;i<=pos-2&&counter;i++) 
           {
             ptr=ptr->next;
             cout<<"i is "<<i<<"pos is "<<pos<<endl;
           }
           
           node *temp2=new node();
           temp2=ptr->next;
           cout<<temp2->next; 
           temp->next=temp2;
           ptr->next=temp;          
           

    } 


 }

void delete_pos()
 {

   int pos ,counter=0;
   cout<<"Enter the psotion to delete: ";
   cin>>pos;
   node *ptr=head;
   node *s=head;  
    
    while (s != NULL)
      {
        s = s->next;
        counter++;
      }

   if(pos==1)
    {
     node *temp=new node();
     temp=head;
     head=temp->next;

    }
   else
    { 
     for(int i=1;i<=pos-2 &&i <=counter;i++)
      {
        ptr=ptr->next;
      }
       node *temp=new node();
       node *temp2=new node();
       temp=ptr->next;
       temp2=temp->next;
       ptr->next=temp2;
    } 

 }

void search()
 
 {
  int d, count=0 , flag=0;
  cout<<"Enter the value to search: ";
  cin>>d;
  node *temp=head;
  while(temp->next!=NULL)
    {

      if(temp->data==d)
       {
         cout<<"value is present at "<<count<<" postion";
         flag=1;
         break;
       }
      else
       {
         temp=temp->next;
         count++;
       } 
    }
   if(flag==0)
    { 
      cout<<"Value is not present in list"<<endl;
    }

 }

 void reverse()
  
  {
     node *current,*prev=NULL,*next;
     current =head;
     while(current!=NULL)
      {
        next=current->next; //save the next node 
        current->next=prev; // changnig the link part of current to previous node link
        prev=current; // making the previous to current
        current=next; // changing the current part to next remaing list
      }
      head=prev; // at the end moving the head to last link

  }

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
    int choice;
    while(1)
     {
       cout<<"\n";
       cout<<"1.Insert into list at begning"<<endl;
       cout<<"2.Insert into list at end"<<endl;
       cout<<"3.Insert at postion"<<endl;
       cout<<"4.delete at postion"<<endl;
       cout<<"5.search from list"<<endl;
       cout<<"6.show list"<<endl;
       cout<<"7.reverse the list"<<endl;
       cout<<"8.Exit"<<endl;
       cin>>choice;

    switch(choice)
     {
	case 1: int d;
          cout <<"Enter the value to insert: ";
          cin>>d;
  insert_begin(d);
	break;
	case 2:insert_End();
	break;
	case 3:inset_Pos();
	break;
  case 4:delete_pos();
  break;
  case 5:search();
  break;
  case 6:show();
  break;
  case 7:reverse();
  break;
  case 8:exit(1);
  break;
  default: cout<<"invalid input"; 
  break;

     }
    }        
    getch();
}

