//
// Created by Zoe Shaw on 08/12/2017.
//

#include "Message.h"
#include "Folder.h"
using namespace std;

int main() {
    Message firstMail("hello");
    Message signInMail("welcoome to cppprimer");
    Folder mailBox("mailbox");
    Folder secondBox("secondbox");

    firstMail.save(mailBox);
    firstMail.print_debug();

    signInMail.save(mailBox);
    mailBox.print_debug();

    auto secondMail = firstMail;
    secondMail.print_debug();
    firstMail.save(secondBox);
    secondBox.print_debug();
}