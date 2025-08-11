
## Authors

- [Anirban Islam Emon ](https://dev-anirban.me/)

 
## 🔗 Links

[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://dev-anirban.me/)

[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/anirban-islam/)

[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://x.com/Anirban_Islam_)



# Day Four CPP 🎈

# Structure-In-C++
	#include<iostream>
	using namespace std;

	//	Create a Structure Variable in Global Scope
	struct {
		string department;
		string name;
		int id;
		char section;
	} student1, student2;

	int main(){
		//	Structures (also called structs) are a way to group several related variables into one place.
		//	Each variable in the structure is known as a member of the structure.
		//	Unlike an array, a structure can contain many different data types: int, string, bool, etc.

		//	To create a structure, use the struct keyword and declare each of its members inside curly braces.
		//	After the declaration, specify the name of the structure variable

		//	struct {             // Structure declaration
		//	    int myNum;         // Member (int variable)
		//	    string myString;   // Member (string variable)
		//	} myStructure;         // Structure variable

		//	Access Structure Members
		//	To access members of a structure, use the dot syntax (.).

		//	One Structure in Multiple Variables
		//	You can use a comma (,) to use one structure in many variables:
		//	struct {
		//	    int myNum;
		//	    string myString;
		//	} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas

		//	Access The Structure Variable
		student1.department = "Computer Science And Engineering";
		student2.department = "Nursing";

		student1.name = "Anirban Islam Emon";
		student2.name = "Mim Isam Maya";

		student1.id = 242311202;
		student2.id = 242568;

		student1.section = 'F';
		student2.section = 'A';

		//	Print structure Data
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


# Refarence-Memorey-Address-In-C++
	#include<iostream>
	using namespace std;

	int main(){

		// A reference variable is an alias for an existing variable. 
		// It is created using the & operator:
		string food = "Pizza";
		string &meal = food;

		// Now, you can use either food or meal to refer to the same value:
		cout << "From Main Variable : " << food << endl;
		cout << "From Reference Variable : " << meal << endl;

		// Memory Address
		// The & operator can also be used to get the memory address of a variable.
		// This is the location where the variable is stored in the computer's memory.
		cout << "The Memory Address is: " << &food << endl;

		// The memory address is in hexadecimal form (0x..)
		return 0;
	}

# Pointer-Variable-In-C++
	#include<iostream>
	using namespace std;

	int main(){
		// We can also use the pointer to get the value of the variable 
		// by using the * operator (the dereference operator):
		string name = "Anirban";
		string* ptr = &name;

		// Access the memory location
		cout << "Memory Location : " << &name << endl;

		// Access the value from memory location using pointer variable
		cout << "Value : " << *ptr;

		return 0;
	    }

# Dereference-Using-pointer-variable-In-C++
    #include<iostream>
    using namespace std;

    int main(){
    // We can also use the pointer to get the value of the variable 
    // by using the * operator (the dereference operator):
    string name = "Anirban";
    string* ptr = &name;

    // Access the memory location
    cout << "Memory Location : " << &name << endl;

    // Access the value from memory location using pointer variable
    cout << "Value : " << *ptr;

    return 0;
    }


# Update-Data-Using_Pointer-Varibale-In-C++

	#include<iostream>
	using namespace std;

	//declare structure structure as data type that name car
	struct car {
	    string model;
	    int year;
	    int price;
	};

	int main(){
	    //declare variable data from structure data type

	    car car1;
	    car1.model="BMW";
	    car1.year=2024;
	    car1.price=150000;

	    car car2;

	    car2.model="Toyota";
	    car2.year =2025;
	    car2.price=120000;


	    // print car data
	    cout<<"\t Car 1 Data"<<endl<<endl<<car1.model<<endl<<car1.year<<endl<<car1.price<<endl<<endl<<endl;

	    cout<<"\t Car 2 Data"<<endl<<endl<<car2.model<<endl<<car2.year<<endl<<car2.price<<endl<<endl<<endl;

	    return 0;
	}

# Refarence-Memorey-Address-In-C++

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


