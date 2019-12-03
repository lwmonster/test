/*************************************************************************
    > File Name: test_sstream.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2018年10月18日 星期四 16时57分46秒
 ************************************************************************/

#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main() {
    vector<int> iVec;

    for (int i = 0; i < 100; i++) {
        iVec.push_back(i);
    }
    
    ostringstream oss;
    for(auto &score : iVec) {
        oss << score << ",";
    }

    cout << oss.str() << endl;

}
