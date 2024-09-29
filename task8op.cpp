#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name, float matric, float inter, float ecat);
void compareMarks(string name1, int ecat1, string name2, int ecat2);

main()
{
system("cls");
cout<<endl<<endl;
cout<<"                               #   #  #####  #####       #       ###   #   #   ###   ####   #####"<<endl;
cout<<"                               #   #  #        #         #      #   #  #   #  #   #  #   #  #    "<<endl;
cout<<"                               #   #  ###      #         #      #####  #####  #   #  ####   ###  "<<endl;
cout<<"                               #   #  #        #         #      #   #  #   #  #   #  # #    #    "<<endl;
cout<<"                                ###   #####    #         #####  #   #  #   #   ###   #  #   #####"<<endl;
cout<<endl;
cout<<"_____________________________________________________________________________________________________________________________________"<<endl;
cout<<endl<<endl;
cout<<"MAIN MENU"<<endl;
cout<<"1. Calculate Aggregate"<<endl;
cout<<"2. Compare Marks"<<endl;
cout<<endl;
int n;
cout<<"Enter '1' or '2' : ";
cin>>n;

if(n==1)
  {
   string name;
   float matric, inter, ecat;
   cout<<"Enter your name: ";
   cin>>name;
   cout<<"Enter marks in matric (out of 1100) : ";
   cin>>matric;
   cout<<"Enter intermediate marks (out of 550) : ";
   cin>>inter;
   cout<<"Enter ECAT marks (out of 400) : ";
   cin>>ecat;

   calculateAggregate(name, matric, inter, ecat);
  }

if(n==2)
  {
   string name1, name2;
   int ecat1, ecat2;
   cout<<"Enter student 1 name: ";
   cin>>name1;
   cout<<"Enter student 2 name: ";
   cin>>name2;
   cout<<"Enter "<<name1<<" ECAT marks: ";
   cin>>ecat1;
   cout<<"Enter "<<name1<<" ECAT marks: ";
   cin>>ecat2;
   
   compareMarks(name1, ecat1, name2, ecat2);
  }
}


void calculateAggregate(string name, float matric, float inter, float ecat)
{
float matricP, interP, ecatP;
matricP=(matric/1100)*100;
interP=(inter/550)*100;
ecatP=(ecat/400)*100;
float aggregate=(matricP*0.3)+(interP*0.3)+(ecatP*0.4);
cout<<"STUDENT NAME: "<<name<<endl;
cout<<"AGGREGATE: "<<aggregate<<"%";
}

void compareMarks(string name1, int ecat1, string name2, int ecat2)
{

 if(ecat1>ecat2)
   cout<<"First roll number is assigned to: "<<name1;

 else
   cout<<"First roll number is assigned to: "<<name2;
}