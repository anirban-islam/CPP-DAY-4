#include<iostream>
using namespace std;

int main(){
//we can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):
string name="Anirban";
string* ptr=&name;


//Access The Memory Location
cout<<"Memory Location : "<<&name<<endl;
//Access The Value from memory location using pointer variable
cout<<"Value : "<<*ptr;


return 0;
}

