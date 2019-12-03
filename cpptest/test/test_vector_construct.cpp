
#include<iostream>
#include<vector>
#include<sstream>

using namespace std;
int main() {

    vector<float> fvec1;
    for(int i = 0; i<1000; i++) {
        fvec1.push_back(i);
    }
    

    vector<float> fvec2(fvec1);
    for(int i = 0; i < fvec1.size(); i++) {
        if(fvec1[i] != fvec2[i]) {
            std::cout << "error:" << fvec1[i] << "," << fvec2[i] << std::endl;
        }
    }

    fvec1[20] = 8888.0;
    std::cout << "fvec1[20]:" << fvec1[20] << " fvec2[20]:" << fvec2[20] << endl;

}
