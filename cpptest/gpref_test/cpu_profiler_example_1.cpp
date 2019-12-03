#include <gperftools/profiler.h>
#include <iostream>
#include <stdlib.h>
#include <csignal>

using namespace std;


void signalHandler(int signum) {
    if(signum == SIGUSR1) {
        cout << "start profile" << endl;
        ProfilerStart("CPUProfile");
    } else if(signum == SIGUSR2) {
        cout << "stop profile" << endl;
        ProfilerStop();
    }
}




void consumeSomeCPUTime1(int input){ 
    int i = 0;
    input++; 
    while(i++ < 10000){
        i--;i++;i--;i++;
    }
}; 

void consumeSomeCPUTime2(int input){ 
    input++; 
    consumeSomeCPUTime1(input); 
    int i = 0; 
    while(i++ < 10000){ 
        i--;i++;i--;i++; 
    } 
}; 

int stupidComputing(int a, int b){ 
    int i = 0;
    while(i++ < 10000){
        consumeSomeCPUTime1(i); 
    } 
    int j = 0; 
    while(j++ < 5000){ 
        consumeSomeCPUTime2(j); 
    } 
    return a+b; 
}; 

int smartComputing(int a, int b){ 
return a+b; 
}; 

int main(){ 
    int i = 0;

    signal(SIGUSR1, signalHandler);  
    signal(SIGUSR2, signalHandler);  

    while(1){ 
        cout << "Stupid computing return : " << stupidComputing(i, i+1) << endl;; 
        cout << "Smart computing return " << smartComputing(i+1, i+2) << endl; 
    }
}
