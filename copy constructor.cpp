// C++ program to illustrate the use of copy constructor
#include <iostream>
#include <string.h>
using namespace std;


class student {
    int rno;
    string name;
    double fee;

public:
    
    student(int, string, double);
    
    student(student& t)
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "Copy Constructor Called" << endl;
    }
    void display();
};


student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

void student::display()
{
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main()
{
    
    student s(1001, "Manjeet", 10000);
    s.display();

    
    student manjeet(s);
    manjeet.display();

    return 0;
}

