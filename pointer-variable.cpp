#include<iostream>
using namespace std;

int main(){
//A pointer however, is a variable that stores the memory address as its value.
//A pointer variable points to a data type (like int or string) of the same type,
// and is created with the * operator. The address of the variable you're working with is assigned to the pointer:


// A food variable of type string.
string food = "Pizza";

// A pointer variable, with the name ptr, that stores the address of food.
string* ptr = &food;

cout<<"Output From Main Variable : "<<food<<endl;
cout<<"Output From Memory Location : "<<&food<<endl;
cout<<"Output from Pointer VAriable : "<<ptr<<endl;

return 0;
}
