#include<iostream>
#include<unordered_map>

#include<Eigen/Dense>
#include <nark/easy_use_hash_map.hpp>

using namespace std;

int main() {


    Eigen::VectorXf tmp(10);
    tmp[1] = 100;

    cout << tmp << endl;
    cout << "tmp rows:" << tmp.rows() << " cols:" << tmp.cols() << " size:" << tmp.size() << endl;



    Eigen::RowVectorXf tmp1(10);
    tmp1 = tmp;

    cout << tmp1 << endl;
    cout << "tmp1 rows:" << tmp1.rows() << " cols:" << tmp1.cols() << " size:" << tmp1.size() << endl;
}
