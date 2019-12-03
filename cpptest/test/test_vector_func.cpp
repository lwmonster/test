/*************************************************************************
    > File Name: test_vector_func.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2018年10月17日 星期三 17时34分55秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<sstream>

using namespace std;
int main() {
    vector<string> strVec;
    for (int i = 0; i < 10; i++) {
        ostringstream oss;
        oss << "aaa" << i;
        strVec.push_back(oss.str());
    }

    const string &value = strVec.at(2);
    cout << strVec.at(8) << endl;
    cout << strVec.at(8).data() << endl;
    cout << value << endl;

    cout << "value addr:" << &value << endl;
    string v1 = strVec.at(2);
    cout << "v1 addr:" << &v1 << endl;

}
