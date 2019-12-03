#include<iostream>
#include <sys/time.h>
#include "data_define.pb.h"
#include <vector>

using namespace std;


int main() {
    int NUM = 10000000;
    {
        struct timeval tp;
        gettimeofday(&tp, NULL);
        long int st = tp.tv_sec * 1000 + tp.tv_usec / 1000;
        cout << "begin test map insert at " << st << endl;
        
        //(ProtoMap m)[NUM/10];
        vector<ProtoMap> mvec;
        mvec.resize(NUM/10);
        
        for(int i = 0; i < NUM; i++) {
            MyData tmp;
            tmp.set_id(i);
            mvec[i/10].mutable_data_map()->insert({i, tmp}); 
        }
         
        gettimeofday(&tp, NULL);
        long int inserttime = tp.tv_sec * 1000 + tp.tv_usec / 1000;
        
        for(int i = 0; i < NUM/10; i++) {
            for(auto &item: mvec[i].data_map()) {
                // do nothing
            }
        }

        gettimeofday(&tp, NULL);
        long int endtime1 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
        

        for(int i = 0; i < NUM/10; i++) {
            //for(auto &item: mvec[i].data_map()) {
            for(auto iter = mvec[i].data_map().begin(); iter != mvec[i].data_map().end(); iter++) {
                
                // do nothing
            }
        }

        gettimeofday(&tp, NULL);
        long int endtime2 = tp.tv_sec * 1000 + tp.tv_usec / 1000;


        cout << "protobuf map: inserttime:" << inserttime - st << " lookup time1:" << endtime1 - inserttime  << " lookup time2:" << endtime2 - endtime1 << endl;

    }

    {
        struct timeval tp;
        gettimeofday(&tp, NULL);
        long int st = tp.tv_sec * 1000 + tp.tv_usec / 1000;
        cout << "begin test vector insert at " << st << endl;
        
        //ProtoList vec;
        vector<ProtoList> lvec;
        lvec.resize(NUM/10);
        
        for(int i = 0; i < NUM; i++) {
            MyData tmp;
            tmp.set_id(i);
            lvec[i/10].add_data_vec()->CopyFrom(tmp);
        }

         
        gettimeofday(&tp, NULL);
        long int inserttime = tp.tv_sec * 1000 + tp.tv_usec / 1000;

        for(int i = 0; i < NUM/10; i++) {
            for(auto &item: lvec[i].data_vec()) {
                // do nothing
            }
        }

        gettimeofday(&tp, NULL);
        long int endtime1 = tp.tv_sec * 1000 + tp.tv_usec / 1000;

        for(int i = 0; i < NUM/10; i++) {
            for(auto iter = lvec[i].data_vec().begin(); iter != lvec[i].data_vec().end(); iter++) {
                // do nothing
            }
        }

        gettimeofday(&tp, NULL);
        long int endtime2 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
        cout << "protobuf list: inserttime:" << inserttime - st << " lookup time1:" << endtime1 - inserttime  << " lookup time2:" << endtime2 - endtime1 << endl;

    }
}

