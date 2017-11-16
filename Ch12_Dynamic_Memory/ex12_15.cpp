//
// Created by Zoe Shaw on 16/11/2017.
//
#include <memory>
using namespace std;

struct destination {};
struct connection {};

connection connect(destination*) {return connection();};
void disconnection(connection) {};
//void end_connection(connection *p) {disconnection(*p);}; //使用lambda重写end_connection函数

void f(destination &d) {
    connection c = connect(&d);
    shared_ptr<connection> p(&c, [](connection *p){disconnection(*p);}); // lambda
    //lambda一般表达式如下:
    //[capture list](param list) -> return type {function body};
    //使用智能指针，创建删除器来防止程序异常退出或结束时，忘记释放内存。
}
int main() {
    destination d;
    f(d);
}
