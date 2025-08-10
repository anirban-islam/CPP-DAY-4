	#include<iostream>
	using namespace std;

	//Create a Structure Variable in Global Scope
	struct {
		string department;
		string name;
		int id;
		char section;
	} student1, student2;

	int main(){
		//Structures (also called structs) are a way to group several related variables into one place.
		//Each variable in the structure is known as a member of the structure.
		//Unlike an array, a structure can contain many different data types: int, string, bool, etc.

		//To create a structure, use the struct keyword and declare each of its members inside curly braces.
		//After the declaration, specify the name of the structure variable

		//struct {             // Structure declaration
		//    int myNum;         // Member (int variable)
		//    string myString;   // Member (string variable)
		//} myStructure;         // Structure variable

		//Access Structure Members
		//To access members of a structure, use the dot syntax (.).

		//One Structure in Multiple Variables
		//You can use a comma (,) to use one structure in many variables:
		//struct {
		//    int myNum;
		//    string myString;
		//} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas

		// Access The Structure Variable
		student1.department = "Computer Science And Engineering";
		student2.department = "Nursing";

		student1.name = "Anirban Islam Emon";
		student2.name = "Mim Isam Maya";

		student1.id = 242311202;
		student2.id = 242568;

		student1.section = 'F';
		student2.section = 'A';

		//Print structure Data
		cout << "\t Student 1 Data" << endl << endl << endl;
		cout << student1.department << endl;
		cout << student1.name << endl;
		cout << student1.id << endl;
		cout << student1.section << endl << endl << endl;

		cout << "\t Student 2 Data" << endl << endl << endl;
		cout << student2.department << endl;
		cout << student2.name << endl;
		cout << student2.id << endl;
		cout << student2.section << endl;

		return 0;
	}
