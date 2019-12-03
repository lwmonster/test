#include<iostream>


int main() {
    int *p = NULL;
    try {

        int a = *p;
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }

}
