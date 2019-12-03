#include <iostream>


using namespace std;

class ext {
public:
    ext(uint64_t group_id, bool is_common, bool is_output): groupId(group_id), isCommon(is_common), isOutput(is_output){}

private:
    uint64_t groupId;
    bool isCommon;
    bool isOutput;
};

class test_ext : public ext{
public:
    test_ext(uint64_t group_id, bool is_common, bool is_output): ext(group_id, is_common, is_output){}

};



#define GenInstance(name, group_id, is_common, is_output) \
    new #name##_ext(group_id, is_common, is_output)




class ExtractorFactory {
public:
    static ext* getExtractor(string name, uint64_t group_id, bool is_common, bool is_output) {
        return GenInstance(name, group_id, is_common, is_output);
    }
};


int main() {
    ext * e = ExtractorFactory::getExtractor("test", 1, true, true);
    

}

