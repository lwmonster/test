#include <iostream>
#include <transport/TBufferTransports.h>
#include <protocol/TCompactProtocol.h>
#include "gen-cpp/client_define_types.h"
#include "gen-cpp/server_define_types.h"

using namespace std;
using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;

void clientSerialize(client::CommunicateMessage& df, string & result) {
    //TMemoryBuffer* mem_buf = new TMemoryBuffer();
    //TCompactProtocol* bin_proto = new TCompactProtocol(mem_buf);
    boost::shared_ptr<TMemoryBuffer> mem_buf(new TMemoryBuffer());
    boost::shared_ptr<TCompactProtocol> bin_proto(new TCompactProtocol(mem_buf));   
    uint8_t *buf_ptr;
    uint32_t sz;
    df.write(bin_proto.get());
    mem_buf->getBuffer(&buf_ptr, &sz);

    //result = (char*)buf_ptr;
    //result += (char)0;
    result.assign((char*)buf_ptr, sz);
    cout << "result.size:" << result.size() << endl;
}

void serverSerialize(server::CommunicateMessage& df, string & result) {
    //TMemoryBuffer* mem_buf = new TMemoryBuffer();
    //TCompactProtocol* bin_proto = new TCompactProtocol(mem_buf);
    boost::shared_ptr<TMemoryBuffer> mem_buf(new TMemoryBuffer());
    boost::shared_ptr<TCompactProtocol> bin_proto(new TCompactProtocol(mem_buf));   
    uint8_t *buf_ptr;
    uint32_t sz;
    df.write(bin_proto.get());
    mem_buf->getBuffer(&buf_ptr, &sz);
    //result = (char*)buf_ptr;
    //result += (char)0;
    result.assign((char*)buf_ptr, sz);
    cout << "result.size:" << result.size() << endl;
}

void clientDeserialize(string & ser_string, client::CommunicateMessage& df) {
    boost::shared_ptr<TMemoryBuffer> buffer(new TMemoryBuffer());
    boost::shared_ptr<TCompactProtocol> compactProtocol(new TCompactProtocol(buffer));   
    
    //std::shared_ptr<ClientSideDefine> clientSideDefinePtr(new ClientSideDefine());
    //std::shared_ptr<client::CommunicateMessage> msg(new client::CommunicateMessage());                                                                                                                              
    buffer->resetBuffer((uint8_t *)(ser_string.c_str()), ser_string.size());
    df.read(compactProtocol.get());
    cout << "client deserialized msg:" << df << endl;
    //df.read(compactProtocol.get());
    
}


void serverDeserialize(string & ser_string, server::CommunicateMessage& df) {
    boost::shared_ptr<TMemoryBuffer> buffer(new TMemoryBuffer());
    boost::shared_ptr<TCompactProtocol> compactProtocol(new TCompactProtocol(buffer));   
    
    //std::shared_ptr<ClientSideDefine> clientSideDefinePtr(new ClientSideDefine());
    buffer->resetBuffer((uint8_t *)(ser_string.c_str()), ser_string.size());
    //clientSideDefinePtr->read(compactProtocol.get());
    df.read(compactProtocol.get());
}

void test_client_serialize_client_deserialize() {
    cout << "begin test client serialize and client deserialze ....." << endl;
    client::CommunicateMessage csd;
    csd.timestamp = 111111111;
    csd.__isset.timestamp = true;
    csd.categories.push_back("tiyu");
    csd.__isset.categories = true;
    cout << csd << endl;

    string ser_str;
    clientSerialize(csd, ser_str);
    cout << "client serialized string:" << ser_str << endl;
    
    client::CommunicateMessage ssd;
    clientDeserialize(ser_str, ssd);
    cout << "client deserialize result:" << ssd << endl;
    cout << "==================================================================" << endl;
}

void test_server_serialize_server_deserialize() {
    cout << "begin test SERVER serialize and SERVER deserialze ....." << endl;
    server::CommunicateMessage csd;
    csd.timestamp = 111111111;
    csd.__isset.timestamp = true;
    csd.categories.push_back("tiyu");
    csd.__isset.categories = true;
    cout << csd << endl;

    string ser_str;
    serverSerialize(csd, ser_str);
    cout << "server serialized string:" << ser_str << endl;
    
    server::CommunicateMessage ssd;
    serverDeserialize(ser_str, ssd);
    cout << "server deserialize result:" << ssd << endl;
    cout << "==================================================================" << endl;
}


void test_client_serialize_server_deserialize() {
    cout << "begin test CLIENT serialize and SERVER deserialze ....." << endl;
    client::CommunicateMessage csd;
    csd.timestamp = 111111111;
    csd.__isset.timestamp = true;
    csd.categories.push_back("tiyu");
    csd.__isset.categories = true;
    cout << csd << endl;

    string ser_str;
    clientSerialize(csd, ser_str);
    cout << "client serialized string:" << ser_str << endl;
    
    server::CommunicateMessage ssd;
    serverDeserialize(ser_str, ssd);
    cout << "server deserialize result:" << ssd << endl;
    cout << "==================================================================" << endl;
}


void test_server_serialize_client_deserialize() {
    cout << "begin test SERVER serialize and CLIENT deserialze ....." << endl;
    server::CommunicateMessage csd;
    csd.timestamp = 111111111;
    csd.__isset.timestamp = true;
    csd.categories.push_back("tiyu");
    csd.__isset.categories = true;
    csd.newMap[99] = "abc";
    csd.__isset.newMap = true;
    cout << "server msg:" << csd << endl;

    string ser_str;
    serverSerialize(csd, ser_str);
    cout << "server serialized string:" << ser_str << endl;
    
    client::CommunicateMessage ssd;
    clientDeserialize(ser_str, ssd);
    cout << "client deserialize result:" << ssd << endl;
    cout << "==================================================================" << endl;
}

int main() {
    test_client_serialize_client_deserialize();
    test_server_serialize_server_deserialize();   

    test_client_serialize_server_deserialize();
    test_server_serialize_client_deserialize();
}
