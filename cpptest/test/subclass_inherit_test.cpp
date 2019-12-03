#include<iostream>


class Base{
    public:
        virtual void func() {
            std::cout << "hello world!" << std::endl;
        }

};


class Child : public Base{
    public:
    virtual void func();
};


void Child::func() {
    std::cout << "sub class func!" << std::endl;
}


int main() {
    Child c;
    c.func();
}
