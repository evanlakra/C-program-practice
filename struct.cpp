//struct
// #include<iostream>
// using namespace std;

// struct Student{
//     string name;
//     int age;
//     float grade;
// };

// int main(){
//     Student st1;
//     st1.name = "Evan";
//     st1.age =21;
//     st1.grade = 99.9;

//     cout<<"Name: "<<st1.name<<endl;
//     cout<<"Age: "<<st1.age<<endl;
//     cout<<"Grade: "<<st1.grade<<endl;

//     return 0;

// }
//Unions

// #include<iostream>
// using namespace std;
// union Data {
//     int i;
//     float f;
//     char c;

// };

// int main() {
//     Data data;
//     data.i =10;
//     cout<<"Data as integer: "<<data.i<<endl;

//     data.f = 200.5;
//     cout<<"Data as float: "<<data.f<<endl;

//     data.c ='C';
//     cout<<"Data as a character: "<<data.c<<endl;

//     return 0;
// }

//Enumeration(enum)
#include<iostream>
using namespace std;
enum Color{RED, GREEN, BLUE};

int main() {
    color myColor;
    myColor = GREEN;

    if(myColor ==GREEN) {
        cout << "The color is green."<<endl;
    } else {
        cout <<"The color is not green."<<endl;
    }

    cout<<"RED: "<<RED<<", GREEN: "<<GREEN<<", BLUE: "<<BLUE<<endl;

    return 0;
}