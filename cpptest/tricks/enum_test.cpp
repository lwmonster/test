#include<iostream>
#include<vector>


enum {
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    WeekCount
};

int main() {
    std::vector<int> remains[WeekCount];
    std::cout << WeekCount << std::endl;

    std::cout << "remains.size():" << sizeof(remains) / sizeof(remains[0]) << std::endl;
    return 0;
}
