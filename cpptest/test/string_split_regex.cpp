#include<iostream>
#include<vector>
#include<regex>
#include<iterator>



using namespace std;

/* 
   用delim指定的正则表达式将字符串in分割，返回分割后的字符串数组
   delim 分割字符串的正则表达式 
 */
std::vector<std::string> s_split(const std::string& in, const std::string& delim) {
    std::regex re{ delim };
    // 调用 std::vector::vector (InputIterator first, InputIterator last,const allocator_type& alloc = allocator_type())
    // 构造函数,完成字符串分割
    return std::vector<std::string> {
        std::sregex_token_iterator(in.begin(), in.end(), re, -1),
        std::sregex_token_iterator()
    };
}

int main() {
	string s = "aaa bbb    cc  \t dd";
	
	auto vec = s_split(s, "\\s+");
	
	for(auto iter = vec.begin(); iter!=vec.end(); iter++) {
        cout << *iter << endl;
    }

    

}
