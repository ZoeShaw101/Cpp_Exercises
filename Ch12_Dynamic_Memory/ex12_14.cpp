//
// Created by Zoe Shaw on 13/11/2017.
//
#include <memory>
using namespace std;

struct destination;
struct connection;

connection connect(destination*);
void disconnection(connection);
void end_connection(connection *p);

void f(destination &d) {
    connection c = connect(&d);
    shared_ptr<connection> p(&c, ersdf)
}