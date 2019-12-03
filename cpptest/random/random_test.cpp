#include<iostream>
#include<random>
#include<time.h>

#define N 4
int main() {
    std::default_random_engine randomIndex(time(NULL));
    std::uniform_int_distribution<int> uniform_dist(0, N-1);

    std::cout << randomIndex() << std::endl;
    std::cout << randomIndex() << std::endl;
    std::cout << randomIndex() << std::endl;
    std::cout << randomIndex() << std::endl;


    std::cout << uniform_dist(randomIndex) << std::endl;
    std::cout << uniform_dist(randomIndex) << std::endl;
    std::cout << uniform_dist(randomIndex) << std::endl;
    std::cout << uniform_dist(randomIndex) << std::endl;
    std::cout << uniform_dist(randomIndex) << std::endl;
    std::cout << uniform_dist(randomIndex) << std::endl;

}
