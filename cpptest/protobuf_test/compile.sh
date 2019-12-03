#! /bin/sh


rm ./protobuf_serialize

g++ protobuf_serialize.cpp data_define.pb.cc -o protobuf_serialize -std=c++11  -I/home/liangwei/var/protobuf/include -L/home/liangwei/var/protobuf/lib -lprotobuf 

./protobuf_serialize
