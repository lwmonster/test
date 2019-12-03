#include<iostream>
#include<vector>

using namespace std;

// 测试删除vector 第k个之后的元素
int main() {

    vector<int> vec = {1, 2, 3, 4, 5, 6};
    
    for(auto t: vec) {
        cout << t << '\t';
    }
    cout << endl;
    int num = 2;


    int k = 0; 

    auto iter = vec.begin();

    for(; iter != vec.end(); iter++, k++) {
        
        if (k >= num) {
            vec.erase(iter, vec.end());
            break;
        }

    }
    

    cout << "after erase ....." << endl;
    for(auto t: vec) {
        cout << t << '\t';
    }
    cout << endl;

}
