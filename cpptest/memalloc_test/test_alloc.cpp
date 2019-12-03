#include<iostream>
#include<sstream>
#include<cstring>
#include<sys/time.h>

class Person {
    public:
        char* info;

        Person(int len){
            this->info = new char[len];
        }

        ~Person(){
            if(this->info != NULL) {
                delete[] this->info;
            }
        }
};


long getCurrMillTimestamp() {
	struct timeval tv;  
	gettimeofday(&tv,NULL);  
	return tv.tv_sec * 1000 + tv.tv_usec / 1000; 
}

int main() {
    int testLen[]  = {
        64, 128, 256,512, 1024
    };

    std::string content = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

    for(int k = 0; k < 5; k++) {
        long start_time = getCurrMillTimestamp();
        std::cout << "start to test alloc " << testLen[k]<< " bytes object 100m times at:" << start_time << std::endl;
        for(int i = 0; i < 100000000; i++) {
            Person* p = new Person(testLen[k]);
            
            delete p;
        }
        
        long end_time = getCurrMillTimestamp();
        std::cout << "end to test alloc " << testLen[k] << " bytes object 100m times at:" << end_time << std::endl;
        std::cout << "used time:" << end_time - start_time << std::endl;
    }
    
    
    for(int k = 0; k < 5; k++) {
        long start_time = getCurrMillTimestamp();
        std::cout << "start to test alloc and set " << testLen[k]<< " bytes object 100m times at:" << start_time << std::endl;
        for(int i = 0; i < 100000000; i++) {
            Person* p = new Person(testLen[k]);
            std::memcpy(p->info, content.c_str(), testLen[k] - 1);
            delete p;
        }
        
        long end_time = getCurrMillTimestamp();
        std::cout << "end to test alloc and set " << testLen[k] << " bytes object 100m times at:" << end_time << std::endl;
        std::cout << "used time:" << end_time - start_time << std::endl;
    }
    
}
