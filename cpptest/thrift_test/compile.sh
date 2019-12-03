#! /bin/bash
set -x
HOME=/home/liangwei/xiaomi_work/thrift-define-lib

$HOME/deps/thrift-0.9.3/bin/thrift -r -o ./ --gen cpp ./client_define.thrift
$HOME/deps/thrift-0.9.3/bin/thrift -r -o ./ --gen cpp ./server_define.thrift

export LD_LIBRARY_PATH=$HOME/deps/thrift-0.9.3/lib:$HOME/deps/boost/lib

g++ -std=c++11 -g -o test thrift_ser_deser_test.cpp   gen-cpp/*.cpp  \
    -I$HOME/deps/thrift-0.9.3/include/thrift                        \
    -I$HOME/deps/thrift-0.9.3/include/                              \
    -I$HOME/deps/boost/include                                      \
    -L$HOME/deps/boost/lib                                          \
    -L$HOME/deps/thrift-0.9.3/lib                                   \
    -lboost_system                                                  \
    -lthrift                                                        


./test
