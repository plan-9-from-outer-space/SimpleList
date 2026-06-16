#include "include/list.h"
#include "include/database.h"

// int main (int argc, char ** argv) {
int main (int argc, char * args[]) {
    List simpleList;  // Create the List object.
    Database data;

    if (argc > 1) {
        
        cout << "Hello from main.cpp" << endl;
        simpleList.name = string (args[1]);
        data.read ();
        simpleList.print_menu ();
        // data.write (simpleList.list);
    }
    else {
        cout << "Username not supplied.. exiting the program" << endl;
    }

    return 125;
}

