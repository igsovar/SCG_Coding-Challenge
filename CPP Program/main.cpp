#include<iostream>
#include<string>
#include<fstream>
#include"scg_test.pb.h"
#include <fcntl.h>
#include <google/protobuf/text_format.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
using namespace std;
using namespace google::protobuf::io;

int main(int argc, char* argv[]){
  GOOGLE_PROTOBUF_VERIFY_VERSION;
    SCGTest::TestMessage message; //creating the TestMessage object
    //string inputFile = "scg_test.pb";
    
        fstream input(argv[1], ios::in | ios::binary); 
        if(!message.ParseFromIstream(&input)){
            cerr << "Failed to read file" << argv[1] << endl;
            return -1;
        }

        cout << "Notes: " << message.notes() << endl;
        
}
