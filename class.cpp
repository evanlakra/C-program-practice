// // //creating class and class objects
// // #include<iostream>
// // using namespace std;

// // class Car {
// //     public:
// //         string brand;
// //         string model;
// //         int year;

// //         void display() {
// //             cout<<"Car: "<<brand<<" "<<model<<", Year: "<<year<<endl;

// //         }
// // };

// // int main() {
// //     Car car1;
// //     car1.brand = "Toyota";
// //     car1.model = "Corolla";
// //     car1.year = 2010;

// //     car1.display();
// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// class Student {
//     public:
//         string name;
//         int age, grade;

//         void display() {
//             cout<<"Name: "<<name<<", Age: "<<age<<", Grade: "<<grade;
//         }
// };
// int main() {
//     Student st1;
//     st1.name = "Evan";
//     st1.age = 21;
//     st1.grade = 9;

//     st1.display();
//     return 0;
// }
#include<iostream>
using namespace std;

class Inventory {
    public:
        string item;
        string type;
        int finished;

        void display() {
            cout<<"Item Name: "<<item<<"Variant: "<<type<<", finished: "<<finished;
        }
};

int main() {
    Inventory in1;
    in1.item ="Chai";
    in1.type="Latte";
    in1.finished=90;

    in1.display();
    return 0;
}