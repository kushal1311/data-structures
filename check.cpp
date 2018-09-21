#include <iostream>
#include<conio.h>
using namespace std;
 

void push();
void pop();
int isOverflow();
int isEmpty();
int top=-1;
int tack[ 10 ];
 
 void push()
 {
    int value;
    cout<<"Enter the value to push: ";
    cin>>value;
    cout<<value;
             
   int a=isOverflow();
   cout<<a;
   if(a==1)
    {
      top+1;   
       tack[top]=value;
    }
   else
    {
      cout<<"stack is full";
      return;
    } 
 }

 void pop()
  {
     int a=isEmpty();
     if(a==1)
      {
         top--;
      }
     else
      {
        cout<<"stack is empty";
      }
  } 

void show()
 {
   for(int i=0;i<10;i++)
    {
      cout<<tack[i]<<" at "<<i<<" Position"<<endl;
    }
 }

int isOverflow()
  {
   if(top==10)
    {
      int n=0;
      return n;

    }
   else if(top==-1)
    {
      int n=1;
      return n;
    } 
  }
int isEmpty()
 {
   if(top==-1)
      {
         return(0);
      }
    else
      {
        return(1); 
      }  
 }


int main () {

   cout<<"1st";
   void push();
   void push();
   void push();
   void push(); 
   void show();
   void pop();
   void pop();
   void show();




   getch();
}