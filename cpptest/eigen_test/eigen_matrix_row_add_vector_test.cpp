#include<iostream>
#include<unordered_map>

#include<Eigen/Dense>

using namespace std;


int main() {

    Eigen::RowVectorXf vec3f = Eigen::RowVectorXf::Constant(3,0.333);
    Eigen::MatrixXf m = Eigen::MatrixXf::Ones(3, 3);

    m.block(0, 0, 1, 3) += vec3f;

    cout << m << endl;

    // shape 不同的 相加会core
    ///cout << m + vec3f << endl;
    
}
