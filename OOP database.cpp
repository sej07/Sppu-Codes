#include<iostream>
#include<string.h>
#include<conio.h>
class person_additional_info
{
char address[20],license[20],insurance[20];
long int contact;
public: person_additional_info() //Default constructor
{
strcpy(address,"XYZ");
strcpy(license,"XY0000000000");
strcpy(insurance,"ABCEDFG");
contact=0000000000;
}
~person_additional_info() //Destructor
{
	cout<<"I am in Destructor";
}
friend class person; // Declaration Friend class
};
//Definition of friend class class
class person
{
char name[20], dob[10], blood[10];
float ht,wt;
static int count; // Static variable
person_additional_info *pai;
public: person() //Default constructor
{ strcpy(name,"XYZ");
strcpy(dob,"dd/mm/yy");
strcpy(blood,"A +");
ht=0;
wt=0;
pai=new person_additional_info;
}
person(person *p1) //Copy constructor
{ strcpy(name,p1->name);
strcpy(dob,p1->dob);
strcpy(blood,p1->blood);
ht=p1->ht;
wt=p1->wt;
pai=new person_additional_info;
strcpy(pai->address,p1->pai->address);
strcpy(pai->license,p1->pai->license);
strcpy(pai->insurance,p1->pai->insurance);
pai->contact=p1->pai->contact;
}
static void showcount() //Static member function
{ cout<<"\nNo of records count="<<count<<"\n";
}
~person() //Destructor
{
cout<<"\nI am in Destructor\n";
}
void getdata(char name[20]);
inline void display(); // Inline function declaration
};
void person::getdata(char name[20])
{cout<<"\nEnter Name";
cin>>name;
//strcpy(this->name,name); //this pointer
cout<<"\n Enter date of birth";
cin>>dob;
cout<<"\n Enter blood group";
cin>>blood;
cout<<"\n Enter height";
cin>>ht;
cout<<"\n Enter weight";
cin>>wt;
cout<<"\n Enter address";
cin>>pai->address;
cout<<"\n Enter Licence number";
cin>>pai->license;
cout<<"\n Enter Insurance policy number";
cin>>pai->insurance;
cout<<"\n Enter Contact number";
cin>>pai->contact;
count++;
}
//inline function definition void
inline void person::display()
{
cout<<"\t"<<name; cout<<"\t"<<dob;
cout<<"\t"<<blood; cout<<"\t"<<ht;
cout<<"\t"<<wt; cout<<"\t"<<pai->address;
cout<<"\t"<<pai->license;
cout<<"\t"<<pai->insurance; cout<<"\t"<<pai->contact;
}
int person::count; //Static variable definition
int main()
{
int i;
person *p1,*p2;
int ch; char name[20];
p1=new person; //call default constructor & dynamic memory allocation p2=new
person(p1); //call copy constructor
cout<<"\t Name";
cout<<"\t Dob";
cout<<"\t Blood";
cout<<"\t Ht";
cout<<"\t Wt";
cout<<"\t Address";
cout<<"\tLicense";
cout<<"\tInsurance";
cout<<"\tContact";
cout<<endl;
cout<<"Default Constructor Value \n";
p1->display();
cout<<"\n";
cout<<"Copy Constructor Value \n";
p2->display();
int n;
cout<<"\nEnter how many records you want??";
cin>>n;
person p3[5]; //array of object char name[20];
int x=0;
do
{
cout<<"\n Welcome to Personal database system";
cout<<"\n1.Enter the record";
cout<<"\n2.Display the record";
cout<<"\n3.Exit";
cin>>ch;
switch(ch)
{
case 1:
{
break;
}
case 2:
{
cout<<"\nEnter the Name ";
cin>>name;
p3[x].getdata(name);
person::showcount(); // calls static function x++;
cout<<"\tName";
cout<<"\tDob";
cout<<"\t Blood";
cout<<"\tHt";
cout<<"\tWt";
cout<<"\tAddress";
cout<<"\tLicense"; cout<<"\tInsurance";
cout<<"\tContact";
break; 
} 
}
cout<<"\n";
p3[x].display(); //calls inline function
}while(ch!=3);
delete p1; //dynamic memory de-allocation delete
p2;
getch();
}
