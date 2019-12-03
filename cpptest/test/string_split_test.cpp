//借助strtok实现split
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <vector>

void split(std::string &str, const std::string &delim, std::vector<std::string> & result) {
    char * p;
    const char * d = delim.c_str();
    char s[str.size() + 1];
    memcpy(s, str.c_str(), str.size()); 
    p = strtok(s, d);
    while(p) {
        result.push_back(p);
        p = strtok(NULL,d);
    }

    std::cout << s << std::endl;
}


int main()
{
    std::string s = "golden global      view,disk * desk";
    std::string delim = " ,*";
    std::vector<std::string> result;

    split(s, delim, result);

    for(auto iter = result.begin(); iter != result.end(); iter++) {
        std::cout << *iter << std::endl;
    }

    return 0;
    /**
	char s[] = "golden global      view,disk * desk";
	const char *d = " ,*";
	char *p;
	p = strtok(s,d);
	while(p)
	{
			printf("%s\n",p);
			p=strtok(NULL,d);
	}

	return 0;
    **/
}
