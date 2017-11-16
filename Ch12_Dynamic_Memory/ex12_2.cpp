//
// Created by Zoe Shaw on 13/11/2017.
//
#include <iostream>
#include "StrBlob.h"
using namespace std;

int main() {
    StrBlob b1;
    {
        StrBlob b2 = {"a", "ab", "abc"};
        b1 = b2;
        b2.push_back("abcd");
    }
    cout << b1.size() << endl;  //b1和b2有相同的底层元素。这就是动态内存的好处。
}
