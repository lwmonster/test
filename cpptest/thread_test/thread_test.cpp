#include<iostream>
#include<thread>
#include<vector>


using namespace std;

void fun(vector<int> &vec, int start, int end) {
    for(int i = start; i < end; i++) {
        cout << i << endl;
    }
}

int main() {
    vector<thread> threads;

    for(int i = 0; i < 10; i++) {
        threads.emplace_back(fun, "hello", i);
    }
    
    for(auto & t: threads) {
        t.join();
    }
    

    cout << "all done" << endl;
}
