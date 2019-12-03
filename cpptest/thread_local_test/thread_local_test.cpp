#include<iostream>
#include<thread>

using namespace std;

void print() {
    thread_local int n = 0;
    
    n++;
    auto tid = this_thread::get_id();
    
    cout << "tid:" << tid << " n:" << n << endl;

}

int main() {
    std::thread t1(print);
    std::thread t2(print);

    t1.join();
    t2.join();
    
    std::this_thread::sleep_for(std::chrono::seconds(2));
    t1(print);
    t1.join();
}

