#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define Max 10
class Stack
 {
 	
 	
    public:void push();
 	public:void pop();
    public:void show();
 	
 };
 
 int top=-1;
 int tack[Max];

 void Stack::push()
 {
    int value;
    cout<<"Enter the value to push: ";
    cin>>value;
    cout<<value;
             
 	if(top<Max-1)
 	 {
 	   
       tack[top+1]=value;
       top=top+1;
 	 }
 	else
 	 {
 	 	cout<<"stack is full";
 	 	return;
 	 }	
 }
 void Stack::pop()
  {
     
     if(top>-1)
      {
      	top=top-1;
      }
     else
      {
        cout<<"stack is empty";
      }
  } 

void Stack::show()
 {
 	cout<<"******"<<endl;
 	for(int i=0;i<=top;i++)
 	 {
 	 	cout<<tack[i]<<endl;
 	 }
 	cout<<"******";
 }



int main()
 {
 	Stack obj;
 	int choice;
 	while(1)
    	{   cout<<"\n";
    		cout<<"1.Push a no: "<<endl;
    		cout<<"2.Pop a no: "<<endl;
    		cout<<"3.show the stack: "<<endl;
    		cout<<"4.exit: "<<endl;
    		cin>>choice;
    		if(choice==1)
    		 {
                 obj.push();
    		 }
    		else if(choice==2)
    		 {
    		 	obj.pop();
    		 } 
    		else if(choice==3)
    		 {
    		 	obj.show();
    		 } 
    		else if(choice==4)
    		 {
               exit(1);
    		 } 
    		else
    		 {
    		 	cout<<"Invalid output";
    		 }	

 	    }
 	getch();
 } 