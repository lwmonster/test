#include <iostream>
#include <thread>
#include <sys/time.h>

#include "itoa_utils/itoa_sse2.h"

using namespace std;
#define DEFAULT_STR_LEN 32

void toString1(int num, string & result) {
    result.reserve(DEFAULT_STR_LEN);
    result.clear();

    char* buff = new char[DEFAULT_STR_LEN];
    i32toa_sse2(num, buff);
    result += buff;

    delete[] buff;
    buff = NULL;

}


void toString2(int num, string & result) {
    char* buff = new char[DEFAULT_STR_LEN];
    i32toa_sse2(num, buff);
    result.assign(buff);
    delete[] buff;
    buff = NULL;
}

int main() {
    
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    std::cout << "start time:" << ms << std::endl;

    for(int i = 0; i<10000000; i++) {
        string s;
        toString1(i, s);
    }
    
    gettimeofday(&tp, NULL);
    long int t1 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    std::cout << "toString1 time cost:" << t1 - ms << std::endl;


    for(int i = 0; i<10000000; i++) {
        string s;
        toString2(i, s);
    }
    
    gettimeofday(&tp, NULL);
    long int t2 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    std::cout << "toString2 time cost:" << t2 - t1<< std::endl;
}
