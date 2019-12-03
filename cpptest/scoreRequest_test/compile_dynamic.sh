#! /bin/sh




rm ./dynamic_message

g++  dynamic_message_test.cpp -o dynamic_message -std=c++11  -I/home/liangwei/var/protobuf/include -L/home/liangwei/var/protobuf/lib -lprotobuf 

./dynamic_message
