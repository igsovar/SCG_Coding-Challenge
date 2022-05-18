using System;
using System.IO; 

namespace main {
      
    // Class declaration
    class fileWrite {
          
        // Main Method
        static void Main(string[] args) {
              
            using (Stream stream = File.OpenRead("scg_test.pb")) //reading in the scg_test
            {
                TestMessage message = TestMessage.Parser.ParseFrom(stream); 
                Print(message);
            }
            return 0;
        }
    }
}