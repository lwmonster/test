#include<iostream>
#include<unordered_map>

#include<Eigen/Dense>
#include <nark/easy_use_hash_map.hpp>

using namespace std;

// 两个value 的combine
static inline uint64_t combineHashValue(uint64_t h, uint64_t k) {
	if (0 == h) {
		return k;
	} else if (0 == k) {
		return h;
	} else {
		// from boost hash combine
		return h ^ (k + 0x9e3779b9 + (h << 6) + (h >> 2));
	}
}

struct pair_hash {
    uint64_t operator () (const std::pair<int,int> &p) const {
        // Mainly for demonstration purposes, i.e. works but is overly simple
        // In the real world, use sth. like boost.hash_combine
        return combineHashValue(p.first, p.second);  
    }
};


using PairKey = std::pair<int, int>;
//using PairMap = unordered_map<PairKey, Eigen::RowVectorXf, pair_hash>;
using PairMap = unordered_map<PairKey, Eigen::VectorXf, pair_hash>;
//using PairMap = nark::easy_use_hash_map<PairKey, Eigen::RowVectorXf, pair_hash>;
//using PairMap = nark::easy_use_hash_map<PairKey, Eigen::RowVectorXf>;


int main() {
    
    cout << "begin vector add test" << endl;
    Eigen::RowVectorXf vec3f;
    
    cout << "vec3f:" << vec3f.rows() << " " << vec3f.cols() << " " << vec3f.size() << endl;

    Eigen::VectorXf tmp(10);
    cout << "tmp:" << tmp.rows() << " " << tmp.cols() << " " << tmp.size() << endl;
    
    vec3f = tmp;
    
    cout << "vec3f:" << vec3f.rows() << " " << vec3f.cols() << " " << vec3f.size() << endl;


    PairMap m;
    m.insert(std::make_pair(std::make_pair(1, 99), Eigen::RowVectorXf::Zero(10)));
    //m.insert(std::make_pair(std::make_pair(1, 99), Eigen::VectorXf::Zero(10)));

    auto & vec = m[std::make_pair(1, 99)];

    cout << vec << endl;
    vec[0] = 10;
    vec[1] = 100;
    cout << vec << endl;
    int k = 2;
    vec = vec/k;
    cout << vec << endl;


    std::unordered_map<int, Eigen::MatrixXf> matrixMap;
    for(int i = 2; i < 10; i+=2) {
        matrixMap[i] = Eigen::MatrixXf::Zero(5, i);

        cout << matrixMap[i] << endl;
        cout << "==================================" << endl;
    }
    for(int i = 0; i < 5; i++) {
        matrixMap[2](i, 0) = 10; 
    }

    cout << matrixMap[2] << endl;
    cout << "==================================" << endl;
    
    cout << matrixMap[2] / 2 << endl;
    cout << "==================================" << endl;
    // 以下实验失败， matrix 不可以除以一个向量   
    //Eigen::VectorXi v = Eigen::RowVectorXi::Ones(5);
    //cout << matrixMap[2] / v<< endl;
    //
    cout << "get one row:" << endl;
   // auto row = matrixMap[2].block<1, 2>(0, 0);
    auto row = matrixMap[2].block(0, 0, 1, 2);
    cout << row << endl;
    
    cout << "test modi one row:" << endl;    
    row = Eigen::RowVectorXf::Constant(1, 2, 0.333);
    cout << row << endl;
    cout << matrixMap[2] << endl;


    //cout << typeid(matrixMap[2].block<1, 2>(0, 0)) << endl; 
    //cout << typeid(matrixMap[2].block(0, 0, 1, 2)) << endl; 
    /**
    vec3f << 1.0, 2.0, 3.0;
    cout << vec3f << endl;
    
    Eigen::RowVectorXf tmp;
    tmp << 4., 5., 7;
    
    Eigen::RowVectorXf result = vec3f + tmp;

    cout << result << endl;

    cout << result / 2 << endl;
    **/ 

}

