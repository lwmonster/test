#include <iostream>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/compiler/importer.h>

using namespace std;
using namespace google::protobuf;
using namespace google::protobuf::compiler;

int main() {
 	DiskSourceTree sourceTree;

    //look up .proto file in current directory

    sourceTree.MapPath("","./");

    Importer importer(&sourceTree, NULL);

    //runtime compile model.proro

    importer.Import("model.proto");    
    
    //cout << importer.DebugString() << endl;
    //
    const Descriptor *descriptor =  importer.pool()->FindMessageTypeByName("predictor.model.ScoreRequest");
    if(descriptor == nullptr) {
        cout << "get ScoreRequest failed" << endl;
    } else {
        cout << descriptor->DebugString();
    }

    DynamicMessageFactory factory;

    const Message *message = factory.GetPrototype(descriptor);
        // create a real instance of "Pair"
        //
    Message *pair = message->New();

 	// write the "Pair" instance by reflection
    const Reflection *reflection = pair->GetReflection();

    const FieldDescriptor *field = NULL;

    field = descriptor->FindFieldByName("uid");

    reflection->SetString(pair, field,"lw");


  

    cout << pair->DebugString();

    delete pair;

    return 0;

}

