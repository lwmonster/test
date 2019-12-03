#ifndef TEST_STATIC_MEMBER2_H
#define TEST_STATIC_MEMBER2_H

#include "static_member.h"
using namespace std;

class ChildTestStatic : public TestStatic {
    public:
        void testFunc() { 
            cout << "child test func" << endl;
        }


};




#endif
