/*                                                                                                                                                                                                      
*如果thrift有嵌套，最外层的struct放在最下面.
*/ 
namespace cpp client


struct CommunicateMessage{
    1: optional i64 timestamp;
    2: optional list<string> categories;
    3: optional map<i64, string> myMap;
}

