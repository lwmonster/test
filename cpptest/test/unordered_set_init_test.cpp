
#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int main() {
    vector<string> vec = {"a", "b"};
    unordered_set<string> set;// = unordered_set<string>(vec);
    

    set.insert(vec.begin(), vec.end());
    for(auto &it : set) {
        cout << it << endl;
    }

}
