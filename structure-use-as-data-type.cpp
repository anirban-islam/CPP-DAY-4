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



