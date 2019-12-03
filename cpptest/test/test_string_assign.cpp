#include <iostream>

using namespace std;


int main() {

    char * buff = new char[100];

    buff[0] = 'a';
    buff[1] = 'b';
    
    string s;

    cout << "size of s:" << s.size() << endl;

    s.assign(buff);
    
    delete[] buff;

    cout << "size of s:" << s.size() << endl;
    cout << "s:" << s << endl;



}
