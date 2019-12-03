#include<iostream>
#include<algorithm>

// trim from start (in place)
static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
        return !std::isspace(ch);
    }));
}

// trim from end (in place)
static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}

int main() {
	std::string s1 = "    aaa  ";
	ltrim(s1);
	std::cout << "[" << s1 << "]" << std::endl;

	rtrim(s1);
	std::cout << "[" << s1 << "]" << std::endl;

}
