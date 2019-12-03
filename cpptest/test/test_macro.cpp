#include <iostream>
#include<string>
using namespace std;

class ttt {

    public:
        string a;
        int b;

        ttt(){}
        ttt(string a_, int b_) {
            this->a = a_;
            this->b = b_;
        }
};


#define GenVariable(var1, var2) \
    ttt* tPtr = new ttt(#var1, var2)

int main() {
    GenVariable(xxx, 22);
    //ttt txxx = ttt("xxx","yyy");
    std::cout << tPtr->a << ", " << tPtr->b << std::endl;
}

