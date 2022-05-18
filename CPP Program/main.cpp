#include<iostream>
#include<string>
#include<fstream>
#include"scg_test.pb.h"
using namespace std;

int main(int argc, char* argv[]){
    SCGTest::TestMessage message; //creating the proto object
    ifstream file ("scg_test.pb"); //opening .pb file
    string inputFile; //string for the input from the file

    while(file >> inputFile){
        message.has_timestamp();
        message.set_notes(inputFile); //adding contents of the file to notes
        cout << message.notes() << "  "; //outputting what was written to notes to the console
        cout << message.has_timestamp() << "\n";
    }

}
