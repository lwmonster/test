#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct myComp {
    bool operator() (int *a, int *b){
        return *a < *b;
    }
};

int main() {
    
    myComp comp;
    int a = 1;
    int b = 100;

    cout << std::boolalpha <<  comp(&a, &b) << endl;

}
