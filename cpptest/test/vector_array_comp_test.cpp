#include <iostream>
#include <vector>
#include <sys/time.h>

#define N 10000

int main() {
    std::cout << "begin ..." << std::endl;
    
    std::vector<int> intVec;
    intVec.reserve(N);
    int intArr[N];
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    std::cout << "start time:" << ms << std::endl;
    std::flush(std::cout);

    for(int i = 0; i < N; i++) {
        intVec[i] = i;
    }
    
    gettimeofday(&tp, NULL);
    long int t1 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    std::cout << "vector assign time cost:" << t1 - ms << std::endl;
    std::flush(std::cout);


    for(int i = 0; i < N; i++) {
        intArr[i] = i;
    }


    gettimeofday(&tp, NULL);
    long int t2 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    std::cout << "array assign time cost:" << t2 - t1 << std::endl;
    std::flush(std::cout);
}
