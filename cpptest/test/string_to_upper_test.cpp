#include<iostream>
#include<algorithm>


using namespace std;


int main() {
    string str = "aaaaa";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    
    cout << str << endl;
}
