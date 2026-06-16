#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

class List {
    private:
    protected:
    public:

        List() { }   // constructor
        ~List() { }  // destructor

        vector <string> list;
        string name;

        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
};
