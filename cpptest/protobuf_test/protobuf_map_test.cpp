#include "map.pb.h"
#include <unordered_map>
#include <sys/time.h>

using namespace std;

int main () {
    int NUM = 10000000;
    {
        struct timeval tp;
        gettimeofday(&tp, NULL);
        long int st = tp.tv_sec * 1000 + tp.tv_usec / 1000;

        MyMap m;
        for(int i = 1; i < NUM; i++) {
            m.mutable_m()->insert({i, i*2});
        }
         
        gettimeofday(&tp, NULL);
        long int inserttime = tp.tv_sec * 1000 + tp.tv_usec / 1000;

        for(int i = 1; i < NUM; i++) {
            //int x = m.m()[i];
            auto iter = m.m().find(i);

        }
        gettimeofday(&tp, NULL);
        long int endtime = tp.tv_sec * 1000 + tp.tv_usec / 1000;

        cout << "protobuf map: inserttime:" << inserttime - st << " lookup time:" << endtime - inserttime << endl;
    }
    

    {
        struct timeval tp;
        gettimeofday(&tp, NULL);
        long int st = tp.tv_sec * 1000 + tp.tv_usec / 1000;

        unordered_map<int, int> m;
        for(int i = 1; i < NUM; i++) {
            m.insert(make_pair(i, i*2));
        }
         
        gettimeofday(&tp, NULL);
        long int inserttime = tp.tv_sec * 1000 + tp.tv_usec / 1000;

        for(int i = 1; i < NUM; i++) {
            //int x = m.m()[i];
            //auto iter = m.m().find(i);
            auto iter = m.find(i);

        }
        gettimeofday(&tp, NULL);
        long int endtime = tp.tv_sec * 1000 + tp.tv_usec / 1000;

        cout << "unordered_map: inserttime:" << inserttime - st << " lookup time:" << endtime - inserttime << endl;
    }


}
