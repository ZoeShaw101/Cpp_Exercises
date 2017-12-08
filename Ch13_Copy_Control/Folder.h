//
// Created by Zoe Shaw on 08/12/2017.
//

#ifndef CPP_EXERCISES_FOLDER_H
#define CPP_EXERCISES_FOLDER_H


#include "Message.h"
#include <string>
class Message;
using namespace std;

class Folder {
    friend class Message;
public:
    Folder(const string &s) : folder_name(s) {};
    Folder(const Folder &folder);
    Folder& operator=(const Folder& folder);
    ~Folder();

    void addMsg(Message *msg);
    void removeMsg(Message *msg);

    void print_debug();

private:
    string folder_name;
    set<Message*> messages;

    void add_all_messages(const Folder &folder);
    void remove_all_messages();
};


#endif //CPP_EXERCISES_FOLDER_H
