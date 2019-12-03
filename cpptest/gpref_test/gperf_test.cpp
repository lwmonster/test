#include <gperftools/profiler.h>
#include <iostream>
#include <stdlib.h>

void f() {
    for(int i = 0; i< 1024*1024; ++i) {
        char *p = (char*)malloc(1024*1024*120);
        free(p);
    }
}

int main () {
    
    std::cout << "hello world!" << std::endl;    
    ProfilerStart("test.prof");
    f();
    ProfilerStop();
    return 0;
}
