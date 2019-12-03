#include<iostream>

using namespace std;

int getValue() {
    int ii = 10;
    return ii;
}

int main() {
    int && r = 99;

    cout << r << endl;
    

    int && ret = getValue();

    cout << ret << endl;
}
