#include<iostream>
#include<map>
#include<sstream>

using namespace std;

int main() {
    std::map<string, int> m;
    for(int i = 100; i>0; i--) {
        ostringstream oss;
        oss << i;
        m.insert(make_pair(oss.str(), i));
    }
    
    for(auto iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << endl;
    }

}
