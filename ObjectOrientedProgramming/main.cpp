#include <iostream>
#include<string>
using namespace std;


// class Tea

// class Student {
// public:
//     string name;
//     double* cgpaptr;
//
//
//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }
//     ~Student() {
//         cout << "Hi, I am a destructor" << endl;
//         delete cgpaptr;
//     }
//
//     // Student(Student &obj) {
//     //     this->name = obj.name;
//     //     //to make a deep copy allocate memory on the heap
//     //     this->cgpaptr = new double;
//     //     //now to copy the value form one object ot another as it is dereference them
//     //     *cgpaptr = *(obj.cgpaptr); //store the value that is stored at the location of cgpaptr not the pointer, so we dereferenced it.
//     // }
//     void getInfo() {
//         cout << "name: " << name << endl;
//         cout << "cgpa: " << *cgpaptr << endl;
//     }
//
//
// };


class Person {
public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    //     cout << "I am parent constructor: " << endl;
    // }

    virtual void show() {
        cout << "Parent class " << endl;
    }
};

class Student : public Person {
public:
    int rollno;

    // Student(string name,int age,int rollno) : Person(name,age) {
    //     this->rollno = rollno;
    //     cout << "I am child Constructor: " << endl;
    // }
    void show() {
        cout << "Child class" << endl;
    }

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age <<endl;
        cout << "rollno: "<< rollno << endl;
    }
};


int main() {

    Person p1;
    p1.show();

    Student s1;
    s1.show();




    // Student s1("atif",21,1234);
    // s1.getInfo();


    // Student s2(s1);
    // s2.getInfo();
    // s1.getInfo();
    // // ReSharper disable once CppDFANotInitializedField
    // *(s2.cgpaptr) = 4.32; //dereference the pointer and assigne the values there,
    // s1.getInfo();
    // s2.getInfo();















    // Teacher t1("Atif","ComputerScienc","C++",25000);
    // t1.getInfo();
    //
    // Teacher t3(t1);
    // t3.getInfo();


   // Teacher t2(t1); //make the exact copy of the orginal object using default copy constructor

    // t1.name = "Atif";
    // t1.depth = "Computer Science";
    // t1.subject = "Math";
    //
    // t1.setSalary(25000);
    //
    // cout << t1.name << endl;
    // cout << t1.getSalary() << endl;
    return 0;
}