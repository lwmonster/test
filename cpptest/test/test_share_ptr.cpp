#include <iostream>
#include <memory>

using namespace std;

class A {
public:
    string  name;
    int     id;
};


typedef shared_ptr<A> APtr;



int main() {
    APtr a = APtr(new A());
    a->name = "aaaaa";
    a->id = 100;


    APtr b = APtr(new A());
    *b = *(a.get());
    
    b->name = "bbbbb";
    b->id = 99;

    APtr c = APtr(b.get());
    

    cout << "a:" << a->name << ", " << a->id << endl;
    cout << "b:" << b->name << ", " << b->id << endl;
    cout << "c:" << c->name << ", " << c->id << endl;
    
    c->name = "cccc";
    c->id = 88;


    cout << "a:" << a->name << ", " << a->id << endl;
    cout << "b:" << b->name << ", " << b->id << endl;
    cout << "c:" << c->name << ", " << c->id << endl;
}


