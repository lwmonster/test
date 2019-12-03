#include<iostream>

int main() {
    std::string str = "id_map.00000";

    std::cout << (str.find_first_of("fm_id_map") == str.npos)<< std::endl;
    std::cout << (str.find_first_of("id_map") == str.npos) << std::endl;
    std::cout << str.find_first_of("map") << std::endl;


    if(str.find_first_of("fm_id_map") == str.npos) {
        std::cout << "fm_id_map not found" << std::endl;
    }

    if(str.find_first_of("id_map") == str.npos) {
        std::cout << "id_map not found" << std::endl;
    } else {
        std::cout << "id_map pos:" << str.find_first_of("id_map") << std::endl;
    }

}
