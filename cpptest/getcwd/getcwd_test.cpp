#include <iostream>
#include <unistd.h>


int main () {
    char buf[1024];
    getcwd(buf, sizeof(buf));
    std::cout << "cwd:" << buf << std::endl;
    return 0;
}
