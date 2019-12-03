#include<iostream>

using namespace std;


int main() {
    auto f = [](int x, int y) -> float { return x*x + y*y ; };
    
    //f(3,4);
    cout << f(3,4) << endl;    

}
