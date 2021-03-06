//
// Created by Zoe Shaw on 13/11/2017.
//
#include <memory>
using namespace std;

struct destination {};
struct connection {};

connection connect(destination*) {return connection();};
void disconnection(connection) {};
void end_connection(connection *p) {disconnection(*p);};

void f(destination &d) {
    connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection); //
    //使用智能指针，创建删除器来防止程序异常退出或结束时，忘记释放内存。
}
int main() {
    destination d;
    f(d);
}