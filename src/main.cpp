#include "include/list.h"

// using std::cout, std::cin, std::endl, std::string, std::vector;

// int main (int argc, char** argv) {
int main (int argc, char * args[]) {

    if (argc > 1) {
        List simpleList;  // Create the List object.
        cout << "Hello from main.cpp" << endl;
        simpleList.name = string (args[1]);
        simpleList.print_menu ();
    }
    else {
        cout << "Username not supplied.. exiting the program" << endl;
    }

    return 0;
}

