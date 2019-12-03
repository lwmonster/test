#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main() {
    { // unordered_map test
        string * sPtr;
        std::unordered_map<string, string> m;

        m.insert(make_pair("a", "aaa"));

        auto iter = m.find("a");
        //std::cout << iter->first << iter->second << std::endl;
        sPtr = &iter->second;
        std::cout << *sPtr << std::endl;
    }    
    

    {
        string *sPtr;

        std::vector<string> vec;

        vec.push_back("bbb");

        auto iter = vec.begin();

        sPtr = &*iter;

        std::cout << *sPtr << std::endl;

    }

}
