#include <algorithm>
#include <cassert>
#include <cstdio>
#include <cstring>
#include <exception>
#include <limits>
#include <stdint.h>
#include <stdlib.h>

#include "itoa_sse2.h"
#include "iostream"

void test_i64toa_sse2(int64_t i, char* buff) {
  i64toa_sse2(i, buff);
  std::cout << "test_i64toa_sse2 i: " << i << " => str: " << buff <<std::endl;
}

void test_u64toa_sse2(uint64_t i, char* buff) {
  u64toa_sse2(i, buff);
  std::cout << "test_u64toa_sse2 i: " << i << " => str: " << buff <<std::endl;
}

void test_i32toa_sse2(int32_t i, char* buff) {
  i32toa_sse2(i, buff);
  std::cout << "test_i32toa_sse2 i: " << i << " => str: " << buff <<std::endl;
}

void test_u32toa_sse2(uint32_t i, char* buff) {
  u32toa_sse2(i, buff);
  std::cout << "test_u32toa_sse2 i: " << i << " => str: " << buff <<std::endl;
}

int main() {
    // init
    int64_t i64_data = 1;
    uint64_t u64_data = 1;
    int32_t i32_data = 1;
    uint32_t u32_data = 1;

    char* buff = new char[100];
    // tests
    std::cout << "========i32toa_sse2======" << std::endl;
    for (int i = 0; i < 32; ++i){
        test_i32toa_sse2(i32_data << i, buff);
    }
    std::cout << "\n\n" << std::endl;

    std::cout << "========u32toa_sse2======" << std::endl;
    for (int i = 0; i < 32; ++i){
        test_u32toa_sse2(u32_data << i, buff);
    }
    std::cout << "\n\n" << std::endl;

    std::cout << "========u64toa_sse2======" << std::endl;
    for (int i = 0; i < 64; ++i){
        test_i64toa_sse2(i64_data << i, buff);
    }
    std::cout << "\n\n" << std::endl;

    std::cout << "========u64toa_sse2======" << std::endl;
    for (int i = 0; i < 64; ++i){
        test_u64toa_sse2(u64_data << i, buff);
    }

    delete buff;
}
