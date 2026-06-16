#include "include/database.h"
#include <string>

void Database::write (vector <string> list) {
    ofstream db;
    db.open ("db/lists.sl");  // symbol list
    if (db.is_open ()) {
        // db << "1\n2\n3\n4\n5\n";
        for (unsigned int list_index=0; list_index < list.size(); list_index++) {
            // cout << " * " << list[list_index] << "\n";
            db << list[list_index] << "\n";
        }
    }
    else {
        cout << "Cannot open db file for writing." << endl;
    }
    db.close ();
}

vector <vector <string>> Database::read () {
    string line;
    ifstream db;
    vector <string> userList;

    db.open ("db/lists.sl");  // symbol list

    if (db.is_open ()) {
        while (getline (db, line, '\n')) {  // '\n' is a char
            if (line.front() == '#') {
                cout << "Found a hashtag" << line << endl;
                line.erase (line.begin ());
                userList.push_back (line);
            }
            else if (line.front() == '%') {
                cout << "Found a percent sign:" << line << endl;
                mainList.push_back (userList);
                userList.clear();
            }
            else {
                cout << "Found an item: " << line << endl;
                userList.push_back (line);
            }
        }
    }
    else {
        cout << "Cannot open db file for reading." << endl;
    }

    db.close ();
    return mainList;
}

