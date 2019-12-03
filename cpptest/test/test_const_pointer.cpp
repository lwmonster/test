/*************************************************************************
    > File Name: test_const_pointer.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2018年10月17日 星期三 15时15分54秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;


int main() {
    const std::vector<string> * pVec;
    std::vector<string> data;
    std::vector<string> data1;
    data1.resize(100);


    pVec = &data;


    cout << pVec->size() << endl;
    

    pVec = &data1;
    cout << pVec->size() << endl;

    cout << "const TYPE *  can be point to another object" << endl;

    //pVec->resize(100);
    (*pVec)[10] = "aaa";
    cout << pVec->size() << endl;



}
