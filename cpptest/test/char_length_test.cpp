#include<iostream>
#include<string.h>

int main() {
    char * cp = NULL;
    {
        char tmp[] = "aaa";
        cp = tmp;
    }
    std::cout << strlen(cp) << std::endl;
}
