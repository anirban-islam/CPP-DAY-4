#include<iostream>
using namespace std;

int main(){

//A reference variable is an alias for an existing variable. It is created using the & operator:

string food="Pizza";
string &meal=food;


//Now, you can use either food or meal to refer to the same value:
cout<<"From Main Variable : "<<food<<endl;
cout<<"From Refarence Variable : "<<meal<<endl;

//Memory Address
//In the example from the previous page, the & operator was used to create a reference variable.
// But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.
//When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.
//To access it, use the & operator, and the result will represent where the variable is stored:
cout<<"The Memory Address is: "<<&food<<endl;
//The memory address is in hexadecimal form (0x..)
return 0;
}
