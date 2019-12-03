#include<iostream>
#include<unordered_map>
#include<vector>


using namespace std;


int main() {
    unordered_map<string, string> m;

    m.insert(make_pair("a", "aaaaaa"));
    m.insert(make_pair("b", "bbbbbb"));
    m.insert(make_pair("c", "cccccc"));

    for(auto iter = m.begin(); iter != m.end(); iter++) {
        cout << &iter << endl;
    }

    /**
    for(auto &iter = m.begin(); iter != m.end(); iter++) {
        cout << &iter << endl;
    }
    **/


    vector<string> vec;
    vec.push_back("aaa");
    vec.push_back("bbb");
    vec.push_back("ccc");
    int idx = 0; 
    for(auto iter = vec.begin(); iter != vec.end(); iter++,idx++) {
        cout << "iter addr:" << &(*iter) << " vec[" << idx << "] addr:" << &vec[idx] << endl;

    }

}
