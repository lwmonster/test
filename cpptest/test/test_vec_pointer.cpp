/*************************************************************************
    > File Name: test_vec_pointer.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2018年10月17日 星期三 14时55分20秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    std::vector<string> strVec;
    std::vector<string> * pstrVec;

    strVec.resize(100);
    pstrVec = &strVec;


    (*pstrVec)[55] = "aaaaa";

    std::cout << strVec[55] << std::endl;


}
