#include <fstream>
#include <iostream>
#include "data_define.pb.h"
#include <thread>
#include <unordered_map>
#include <google/protobuf/util/json_util.h>


using namespace std;

int main() {
    //MyData md1;
    //md1.set_id(100);
    //md1.set_name("lw");
    
    //ProtoMap m;
    //m.insert({100, md1});
    std::unordered_map<thread::id, ofstream*> smap;
    auto this_tid = this_thread::get_id();
    
    //fstream output("./serializ.data", ios::out | ios::trunc | ios::binary);
    {
        thread_local ofstream output;
        output.open("./serializ.data");
    
        smap.insert(make_pair(this_tid, &output));
    }
    //ofstream output("./serializ.data", ios::out | ios::trunc | ios::binary);

    ProtoList  tl1;
    MyData* myPtr = tl1.add_data_vec();
    myPtr->set_id(100);
    myPtr->set_name("lw");
    
    
    ofstream* outstreamPtr = smap[this_tid];

    if(!tl1.SerializeToOstream(outstreamPtr)) {
        cerr << "Failed to write" << endl;
        return -1;
    }
    
    std::string tmp;
    google::protobuf::util::MessageToJsonString(tl1, &tmp);
    cout << "json msg:" << tmp << endl;


    string ser;
    tl1.SerializeToString(&ser);    
    *outstreamPtr << ser;    
    cout << ser << endl; 
    
    myPtr->set_name("lcl");
    tl1.SerializeToString(&ser);    
    *outstreamPtr << ser;    
    cout << ser << endl; 
    
    MyData* myPtr2 = tl1.add_data_vec();
    myPtr2->set_id(22);
    myPtr2->set_name("xlxlx");
    tl1.SerializeToString(&ser);    
    *outstreamPtr << ser;    
    cout << ser << endl; 
    
    outstreamPtr->close();
    
    for(int i = 0; i < ser.size(); i++) {
        cout << (int)ser[i] << endl;
    }

    cout << "==================" << endl; 
    
    std::ifstream input("./serializ.data");
    std::string line;
    int cnt = 0;
    while(getline(input, line)) {
        cnt++;
        if(line.size() <= 0) continue;
        
//        for(int i = 0; i < line.size(); i++) {
//            cout << (int)line[i] << endl;
//        }
        cout << ser.size() << ":" << line.size() << endl;
        line = '\n' + line;
        if(line == ser) {
            cout << "data ok" << endl;
        }
        ProtoList  tl2;
        tl2.ParseFromString(line);

        //cout << tl2.data_vec(0).id() << tl2.data_vec(0).name() << endl;
        cout << tl2.DebugString() << endl;
        
        //std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << cnt << endl;
    }

    cout << "num:" << cnt << endl;


}

