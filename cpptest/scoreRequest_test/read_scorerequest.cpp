#include <iostream>
#include <fstream>
#include "model.pb.h"
#include <google/protobuf/util/json_util.h>

using namespace predictor::model;
using namespace std;
using namespace google::protobuf::util;


int main() {

    std::ifstream input("./serializ.data");
    std::string line;
    int cnt = 0;
    while(getline(input, line)) {
        cnt++;
        if(line.size() <= 0) continue;
        
        //line = '\n' + line;
        ScoreRequest request;
        //request.ParseFromString(line);
        
        JsonStringToMessage(line, &request);

        //cout << tl2.data_vec(0).id() << tl2.data_vec(0).name() << endl;
        cout << request.DebugString() << endl;
        
        //std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << cnt << endl;
    }



}
