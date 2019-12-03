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
    vector<int *> vec;
    int i1 = 1;
    int i2 = 7;
    int i3 = 3;
    int i4 = 9;
    int i5 = 2;
    int i6 = 19;
    int i7 = 11;
    
    vec.push_back(&i1);
    vec.push_back(&i2);
    vec.push_back(&i3);
    vec.push_back(&i4);
    vec.push_back(&i5);
    vec.push_back(&i6);
    vec.push_back(&i7);
    
    std::sort(vec.begin(), vec.end(), myComp());

    for(auto &item : vec) {
        cout << *item << endl;
    }
}
