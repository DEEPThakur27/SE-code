#include<iostream>
#include<string.h>
using namespace std;
#define max 100;
class per_info
{
  string lic,dob, bldgrp;
  public:
  per_info();
  per_info(per_info &);  //?
  ~per_info()
  {
    cout<<"\nDestructor i called!!!!"<<endl<<"Record deleted successfully"<<endl;
  }
  friend class student;
};
class student
{
  string name , address , year;
  char div;
  int roll_no;
  long mob;
  static int cnt;
  public:
  void create(per_info &);
  void display(per_info &);
  inline static void inccnt()

 {
   cnt++;
 }
 inline static void showcnt()

 {
  cout<<"\nTotal Number of records are : "<<cnt;
 }
 student();
 student(student &);
 ~student()
 {
  cout<<"\nDestructor is called!!!!"<<endl<<"Record Deleted successsfully"<<endl;
 }
};
int student::cnt;
student::student()
{
  name="Anagha Nirgude";
  address="SR NO.81 BABBAR SOLANKHI \nDIGHT PUNE";
  year="SE COMPUTER";
  div='A';
  roll_no=21042;
  mob=7854639899;
}
per_info::per_info()
{
  lic="ABD45656";
  dob="02/11/2002";
  bldgrp="A";
}
student::student(student &obj)
{
  this->name=obj.name;
  this->address=obj.address;
  this->year=obj.year;
  this->div=obj.div;
  this->roll_no=obj.roll_no;
  this->mob=obj.mob;
}
per_info::per_info(per_info &obj)
{
  lic=obj.lic;
  dob=obj.dob;
  bldgrp=obj.bldgrp;
}
 
void student::create(per_info &obj)
{
 cout<<"\nname : "<<endl;
 cin>>name;
 cout<<"\naddress : "<<endl;
 cin>>address;
 cout<<"\nDate Of Birth : "<<endl;
 cin>>obj.dob;
 cout<<"\nYear : "<<endl;
 cin>>year;
 cout<<"Division : "<<endl;
 cin>>div;
 cout<<"\nRoll no : ";
 cin>>roll_no;
 cout<<"Blood Group : ";
 cin>>obj.bldgrp;
 cout<<"\nLicence Number : "<<endl;
 cin>>obj.lic;
 cout<<"\nMobail number : "<<endl;
 cin>>mob;
}
void student::display(per_info &obj)
{
 cout<<"*********************************"<<endl;
 cout<<"\nName of student : "<<name<<endl;
 cout<<"\nAddress of student : "<<address<<endl;
 cout<<"\nDate of birth : "<<obj.dob<<endl;
 cout<<"\nYear : "<<year<<endl;
 cout<<"\nDivision : "<<div<<endl;
 cout<<"\nRoll number : "<<roll_no<<endl;
 cout<<"\nBlood Group : "<<obj.bldgrp<<endl;
 cout<<"\nLicence number : "<<obj.lic<<endl;
 cout<<"\nMobail number : "<<mob<<endl;
 cout<<"\n******************************"<<endl;
}
int main()
{
 int n;
 int ch;
 char ans;
 
 cout<<"\nEnter no of students : "<<endl;
 cin>>n;
 cout<<"\n******************************"<<endl;
 student *sobj=new student[n];
 per_info *pobj=new per_info[n];
do
{
  cout<<"\n Menu \n 1.create database \n 2.Display database \n 3.Copy Constructor \n 4.Default Constructor \n 5.Delete (Destructor)";
  cout<<"\n Enter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1: //create database
  {
     for(int i=0;i<n;i++)
     {
        sobj[i].create(pobj[i]);
        sobj[i].inccnt();
      }
  }
      break;
  case 2: // Display database
     {
        sobj[0].showcnt();
         for (int i=0;i<n;i++)
          {
                sobj[i].display(pobj[i]);
           }
     }
     break;
case 3: //Copy Constructor
     {
       student obj1;
       per_info obj2;
       obj1.create(obj2);
       student obj3(obj1);
       per_info obj4(obj2);
       cout<<"\n Copy constructor is called";
       obj3.display(obj4);
     }
    break;
case 4: //Default Constructor
     {
      student obj1;
      per_info obj2;
      cout<<"\n Default constructor is called";
      obj1.display(obj2);
     }
    break;
case 5: //Destructor is called
     delete []sobj;
     delete []pobj;
}
cout<<"\n want to continue:(y/n)";
cin>>ans;
}while(ans=='y');
return 0;
}
