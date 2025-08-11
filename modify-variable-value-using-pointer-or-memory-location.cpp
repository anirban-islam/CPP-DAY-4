#include<iostream>
using namespace std;

int main(){
string name="Anirban";
string *ptr =&name;

//original Variable Value
cout<<"Original Value : "<<*ptr<<endl;


//Update data using pointer variable
*ptr="seyam";
cout<<"Update Value : "<<name<<endl<<endl<<endl;


//Main variable input from user
string name1;
cout<<"Enter The Name : ";
getline(cin , name1);
string* ptr1 =&name1;

cout<<"User Input Name : "<<name1<<endl;

//Update Variable from user
string name2;
cout<<"Enter Update Name : ";
getline(cin , name2);

//Update name using pointer
*ptr1 = name2;

cout<<"Update Name : " <<name1;



return 0;
}
