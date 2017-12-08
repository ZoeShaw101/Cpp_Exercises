//
// Created by Zoe Shaw on 08/12/2017.
//

#ifndef CPP_EXERCISES_MESSAGE_H
#define CPP_EXERCISES_MESSAGE_H

#include <set>
#include <string>
#include "Folder.h"

using namespace std;

class Folder;

class Message {
    friend class Folder;
public:
    Message(const string& s) : contents(s) {};
    Message(const Message& msg);
    Message& operator=(const Message& msg);
    ~Message();

    void save(Folder&);
    void remove(Folder&);

    void print_debug();

private:
    string contents;
    set<Folder*> folders;

    void add_to_folders(const Message&);
    void remove_from_folders();
};


#endif //CPP_EXERCISES_MESSAGE_H
