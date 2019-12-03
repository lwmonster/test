#include <iostream>
#include <unordered_set>
#include <stdint.h>
using namespace std;
int main() {
    std::unordered_set<uint64_t> totalGroupIdSet{
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
                            29, 30, 31, 32, 33, 34, 35, 36, 38, 39, 40};
    
    for (const auto gid: totalGroupIdSet) {
        std::cout << gid << "\t";
    }
    std::cout << std::endl;
    
    return 0;
}



