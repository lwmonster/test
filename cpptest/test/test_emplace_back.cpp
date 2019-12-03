#include <iostream>
#include <vector>

using namespace std;

struct Person {
    string name;
    int age;

    Person(string name_, int age_):name(move(name_)), age(age_) {
        cout << "construct func" << endl;
    }

    Person(const Person & other) : name(move(other.name)), age(other.age) {
        cout << "copy construct func" << endl;
    }


    Person(Person && other) : name(move(other.name)), age(other.age) {
        cout << "moving construct func" << endl;
    }
    

    Person & operator=(const Person& other);
};

int main() {
    vector<Person> vecPerson ;

    
    Person p1("aaa", 1);
    cout << "created p1" << endl;
    vecPerson.push_back(p1);
    cout << "push back p1" << endl;
    cout << endl;
    cout << endl;
    
    
    Person p2("bbb", 2);
    cout << "created p2" << endl;
    vecPerson.emplace_back(p2);
    cout << "emplace back p2" << endl;
    cout << endl;
    cout << endl;
   
    
    vecPerson.emplace_back("ccc", 3);
    cout << "emplace back p3" << endl;
    cout << endl;
    cout << endl;
    
    vector<Person> vecPerson2 ;
    vecPerson2.emplace_back("ddd", 4);
    cout << "emplace back p4 to vecPerson2" << endl;
    cout << endl;
    cout << endl;

    for(int i = 0; i < vecPerson.size(); i++) {
        cout << vecPerson[i].name << " " << vecPerson[i].age << endl;
    }
    
    for(Person const &p : vecPerson2){
        cout << p.name << " " << p.age << endl;
    }


    /**
    vector<string>  vecStr;

    {
        string s1 = "aaaaa";
        vecStr.emplace_back(s1);
    }
    
    for(int i = 0; i < vecStr.size(); i++) {
        cout << vecStr[i] << endl;
    }
    **/
}
