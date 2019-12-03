#include "map.pb.h"
#include <unordered_map>
#include <sys/time.h>



using namespace std;

int main () {
    int NUM = 10;
    MyMap m;
    for(int i = 1; i < NUM; i++) {
        m.mutable_m()->insert({i, i*2});
    }

    for(auto & item: m.m()) {
        if(item.first == 3) {
            cout << item.first << ":" << item.second << endl;
        }
    }
    
    cout << "================================" << endl;    
    
    for(auto iter = m.mutable_m()->begin(); iter != m.mutable_m()->end(); iter++) {
        if(iter->first == 3) {
            m.mutable_m()->erase(iter);
        }
    }


    for(auto & item: m.m()) {
        cout << item.first << ":" << item.second << endl;
    }

    cout << "================================" << endl;    
    
    for(auto & item: *(m.mutable_m())) {
        if(item.first == 2) {
            m.mutable_m()->erase(item.first);
        }
    }
    
    for(auto & item: m.m()) {
        cout << item.first << ":" << item.second << endl;
    }




}
