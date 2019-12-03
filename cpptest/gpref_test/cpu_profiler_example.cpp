#include <gperftools/profiler.h>
#include <iostream>
#include <stdlib.h>


using namespace std;


int loopop() {
    int n = 0;
    for(int i = 0; i < 10000; i++) {
        for(int j = 0; j < 10000; j++) {
            n |= i%100 + j/100;
        }
    }
    return n;
}

int main() {
    ProfilerStart("cpu_profiler_example.prof");
    int result = loopop();
    cout << "result:" << result << endl;
    ProfilerStop();
    return 0;
}
