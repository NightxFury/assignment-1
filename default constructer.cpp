#include <iostream>
using namespace std;

class Base {
public:
    
};

class A {
public:
    
    A() { cout << "A Constructor" << endl; }

   
    int size;
};

class B : public A {
   
};

class C : public A {
public:
    C()
    {
        
        cout << "C Constructor" << endl;

        
    }
};

class D {
    A a;
public:
    D()
    {
        
        cout << "D Constructor" << endl;

        
int main()
{
    Base base; 
    B b; 
    C c; 
    D d; 
    return 0;
}

