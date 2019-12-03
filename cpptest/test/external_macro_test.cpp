#include<iostream>

int main() {

#ifdef DEBUG
    std::cout << "debug" << std::endl;
#endif
    std::cout << "hello world!" << std::endl;

}
