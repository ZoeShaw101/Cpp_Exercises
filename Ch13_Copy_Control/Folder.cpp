//
// Created by Zoe Shaw on 08/12/2017.
//

#include "Folder.h"
#include <iostream>
using namespace std;

Folder::Folder(const Folder &folder) :
        folder_name(folder.folder_name), messages(folder.messages){
    add_all_messages(folder);
}
Folder& Folder::operator=(const Folder &folder) {
    remove_all_messages();
    folder_name = folder.folder_name;
    messages = folder.messages;
    add_all_messages(folder);
    return *this;
}
Folder::~Folder() {
    remove_all_messages();
}
void Folder::add_all_messages(const Folder &folder) {
    for (auto m : folder.messages) {
        m->save(*this);
    }
}
void Folder::remove_all_messages() {
    for (auto m : messages) {
        m->remove(*this);
    }
}
void Folder::addMsg(Message *msg) {
    messages.insert(msg);
}
void Folder::removeMsg(Message *msg) {
    messages.erase(msg);
}
void Folder::print_debug() {
    if (messages.size() == 0) {
        cout <<"no messages"<<endl;
        return;
    }
    cout << "folder "<< folder_name <<" include messages:"<<endl;
    for (auto m : messages) cout << m->contents << endl;
}