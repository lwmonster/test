#include<iostream>
#include<vector>

using namespace std;

void fun(const string & s) {

    cout << s << endl;
}

void fun2(string && s) {
    cout << "fun2:" << s << endl;
}

int main () {
    string s = "aaaa";
    fun(std::move(s));
    
    cout << "after " << s << endl;

    fun2(std::move(s));

    cout << "after2 " << s << endl;
    

    vector<string> vecStr;
    vecStr.push_back(std::move(s));
    cout << "after3 " << s << endl;
    cout << "s.size:" << s.size() << endl;
}
