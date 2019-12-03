#! /bin/bash

INCLUDE_CPP="-I/home/liangwei/xiaomi_work/ctr/ctr-score/deps/eigen/include "
INCLUDE_CPP="$INCLUDE_CPP -I/home/liangwei/xiaomi_work/ctr/ctr-score/deps/nark-hashmap"
INCLUDE_CPP="$INCLUDE_CPP -I/home/liangwei/xiaomi_work/ctr/ctr-score/deps/nark-bone"
INCLUDE_CPP="$INCLUDE_CPP -I/home/liangwei/xiaomi_work/ctr/ctr-score/deps/boost/include/"


g++ -g -std=c++11 eigen_test.cpp -o eigen_test $INCLUDE_CPP
g++ -g -std=c++11 eigen_vector_test.cpp -o eigen_vector_test $INCLUDE_CPP
g++ -g -std=c++11 eigen_matrix_row_add_vector_test.cpp -o eigen_matrix_row_add_vector_test $INCLUDE_CPP
