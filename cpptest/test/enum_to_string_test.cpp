#include<iostream>



struct UserType {
    enum type{
        LIGHT=2,
        MEDIUM = 3,
        HEAVY = 4
    };
};


using namespace std;
int main() {
    string s ;

    UserType::type t = UserType::LIGHT;
    s = t;

    cout << "t:" << t << " s:" << s << endl; 
    
    s = UserType::HEAVY;

    cout << "t:" << t << " s:" << s << endl; 
}
