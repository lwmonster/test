#include <iostream>
#include <sstream>

using namespace std;

int main() {
    
    ostringstream oss;
    uint64_t a = 1111111111111;
    oss << "tm:" << a ;

    cout << oss.str() << endl;

}
