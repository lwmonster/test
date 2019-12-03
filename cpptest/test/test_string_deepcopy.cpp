#include<iostream>

using namespace std;


int main() {
    string s1 = "aaaaa";

    string s2 = s1;
    string s3(s1);
    
    const char * s1_content = s1.c_str();
    const char * s2_content = s2.c_str();
    const char * s3_content = s3.c_str();
    cout << "s1:" << s1_content << " addr:" << &s1_content << endl;
    cout << "s2:" << s2_content << " addr:" << &s2_content << endl;
    cout << "s3:" << s3_content << " addr:" << &s3_content << endl;

    cout << "s1 addr:" << &s1.data() << endl;


}
