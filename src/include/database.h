#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
// using DB = std::vector <std::vector <string>>;

class Database {
    private:
    protected:
    public:

        Database() { }   // constructor
        ~Database() { }  // destructor

        vector <vector <string>> mainList;
        string name;

        void write (vector <string> mainList);
        vector <vector <string>> read ();
        // DB read ();
};
