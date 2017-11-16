//
// Created by Zoe Shaw on 07/11/2017.
//
#include <iostream>
using namespace std;

int main() {
    const double x = 0.1;
    const double *const pointer = &x; //从右向左阅读

    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    a = 42;
    b = 42;
    c = 42;
    //d = 42; //error: assigning to 'int *' from incompatible type 'int'
    //e = 42; //error: assigning to 'const int *' from incompatible type 'int'

    const int ii = 42;
    auto j = ii;
    const auto &k = ii;
    auto *p = &ii;
    const auto j2 = ii, &k2 = ii;

}
