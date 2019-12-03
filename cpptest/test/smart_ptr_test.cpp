#include<iostream>
#include<memory>
#include<vector>

using namespace std;

class PtrTest {
    public:
        int id;
        string name;
        PtrTest(){}
        ~PtrTest(){
            cout << "destruct" << endl;
        }
};

int main() {
    shared_ptr<PtrTest> t = make_shared<PtrTest>();
    cout << "t use_count:" << t.use_count() << endl;
    cout << t->id << " " << t->name << endl;
    
    {    
        shared_ptr<PtrTest> t1 = t;
        cout << "t use_count:" << t.use_count() << endl;
        cout << "t1 use_count:" << t1.use_count() << endl;
    }        
    
    cout << "t use_count:" << t.use_count() << endl;




    unique_ptr<PtrTest> t2(new PtrTest());
    t2->id =199;
    cout << "t2 :" << t2->id << endl;
    


    vector<unique_ptr<PtrTest>> vec;
    vec.emplace_back(move(t2));
    vec.emplace_back(new PtrTest());

    for(auto & item:vec) {
        cout << item->id << endl;
    }
}

