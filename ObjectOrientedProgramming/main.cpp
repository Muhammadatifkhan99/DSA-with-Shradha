#include <iostream>
#include<string>
using namespace std;


class Teacher {
private:
    double salary;
public:


    //constructor
    Teacher() {
        cout << "I am a constructor" << endl;
    }

    //parameterized Contructors
    // Teacher(string n,string d,string s,double sal) {
    //     name = n;
    //     depth = d;
    //     subject = s;
    //     sal = salary;
    // }

    //using the this pointer approach in constructor
    Teacher(string name, string depth,string subject,double salary) {
        this->name = name;
        this->depth = depth;
        this->subject = subject;
        this->salary = salary;
    }

    //copy constructor
    Teacher (Teacher &orgObj) {
        cout << "Inside the copy constructor" << endl;
        this->name = orgObj.name;
        this->depth = orgObj.depth;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }




    string name;
    string depth;
    string subject;

    //methods member functions

    void changeDept(string newDept) {
        depth = newDept;
    }

    //setters
    void setSalary(double s) {
        salary = s;
    }

    //getters
    double getSalary() {
        return salary;
    }

    void getInfo() {
        cout <<"name: " << name << endl;
        cout << "subject: " << subject << endl;
    }
};


int main() {
    Teacher t1("Atif","ComputerScienc","C++",25000);
    t1.getInfo();

    Teacher t3(t1);
    t3.getInfo();


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