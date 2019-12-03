#include<iostream>
#include<array>

using namespace std;

int main() {
    array<int, 5> arr1 = {1,5,3,8,2};

    for(auto &x: arr1) {
        cout << x << '\t';
    }
    cout << endl;

    arr1[-2] = 10;

    for(auto &x: arr1) {
        cout << x << '\t';
    }
    cout << endl;

}
