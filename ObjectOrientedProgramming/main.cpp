#include <iostream>
#include<string>
using namespace std;


// class Tea

class Student {
public:
    string name;
    double* cgpaptr;


    Student(string name, double cgpa) {
        this->name = name;
        this->cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    Student(Student &obj) {
        this->name = obj.name;
        //to make a deep copy allocate memory on the heap
        this->cgpaptr = new double;
        //now to copy the value form one object ot another as it is dereference them
        *cgpaptr = *(obj.cgpaptr); //store the value that is stored at the location of cgpaptr not the pointer, so we dereferenced it.
    }
    void getInfo() {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }


};


int main() {



    Student s1("Atif",3.4);

    Student s2(s1);
    s1.getInfo();
    // ReSharper disable once CppDFANotInitializedField
    *(s2.cgpaptr) = 4.32; //dereference the pointer and assigne the values there,
    s1.getInfo();
    s2.getInfo();















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