#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
 {
   int data;
   node *next;	
 };
struct node *head=NULL;

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
      cout<<"****************************"<<endl;	
      cout<<"* 1.Insert at Begning"<<"  *"<<endl;
      cout<<"* 2.Exit"<<"               *"<<endl;
      cout<<"****************************"<<endl;	
      cin>>choice;
    } 
   getch();
 }