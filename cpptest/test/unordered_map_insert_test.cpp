#include<iostream>
#include<unordered_map>
#include<unordered_set>

using namespace std;


int main() {
    unordered_map<string, unordered_set<string>>  map;

    //map["a"] = unordered_set<string>();
    
    for(auto iter = map.begin(); iter != map.end(); iter++) {
        cout << iter->first << endl;
    }

    cout << map["a"].size() << endl;
    for(auto iter = map.begin(); iter != map.end(); iter++) {
        cout << iter->first << endl;
    }
    
}
