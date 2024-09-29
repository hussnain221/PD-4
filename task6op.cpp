#include<iostream>
#include<windows.h>
using namespace std;
void printH();
void printA();
void printS();
void printN();

main()
{
system("cls");
printH();
cout<<endl;
printA();
cout<<endl;
printS();
cout<<endl;
printS();
cout<<endl;
printA();
cout<<endl;
printN();
}

void printH()
{
cout<<"#   #"<<endl;
cout<<"#   #"<<endl;
cout<<"#####"<<endl;
cout<<"#   #"<<endl;
cout<<"#   #"<<endl;
}

void printA()
{
cout<<" ### "<<endl;
cout<<"#   #"<<endl;
cout<<"#####"<<endl;
cout<<"#   #"<<endl;
cout<<"#   #"<<endl;
}

void printS()
{
cout<<" ### "<<endl;
cout<<"#    "<<endl;
cout<<" ### "<<endl;
cout<<"    #"<<endl;
cout<<" ### "<<endl;
}

void printN()
{
cout<<"#   #"<<endl;
cout<<"##  #"<<endl;
cout<<"# # #"<<endl;
cout<<"#  ##"<<endl;
cout<<"#   #"<<endl;
}