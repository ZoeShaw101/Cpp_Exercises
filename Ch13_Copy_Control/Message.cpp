//
// Created by Zoe Shaw on 08/12/2017.
//

#include "Message.h"
#include <iostream>
using namespace std;

Message::Message(const Message &msg) : contents(msg.contents), folders(msg.folders){
    add_to_folders(msg);
}
Message& Message::operator=(const Message &msg) {
    remove_from_folders();
    contents = msg.contents;
    folders = msg.folders;
    add_to_folders(msg);
    return *this;
}
Message::~Message() {
    remove_from_folders();
}
void Message::add_to_folders(const Message &msg) {
    for (auto f : msg.folders) {
        f->addMsg(this);
    }
}
void Message::remove_from_folders() {
    for (auto f: folders) {
        f->removeMsg(this);
    }
}
void Message::save(Folder &f) {
    folders.insert(&f);
    f.addMsg(this);
}
void Message::remove(Folder &f) {
    folders.erase(&f);
    f.removeMsg(this);
}
void Message::print_debug() {
    if (folders.size() == 0) {
        cout <<"no folders"<<endl;
        return;
    }
    cout << "messaged " << contents <<" in folders:" <<endl;
    for (auto f : folders) cout << f->folder_name <<endl;
}