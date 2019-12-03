#include "static_member.h"
#include "static_member_child.h"


using namespace std;


int main() {
    
    auto iter = TestStatic::m.find("aaa");
    if (iter != TestStatic::m.end()) {
    
        cout <<  iter->second << endl;
    }

}
