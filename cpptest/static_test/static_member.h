#ifndef TEST_STATIC_MEMBER_H
#define TEST_STATIC_MEMBER_H


#include<iostream>
#include<unordered_map>

using namespace std;


class TestStatic {
    public:
        static unordered_map<string, int> m;

};

unordered_map<string, int> TestStatic::m = {
    {"aaa", 1},
    {"bbb", 2}    
};



#endif
