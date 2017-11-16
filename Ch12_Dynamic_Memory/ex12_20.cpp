//
// Created by Zoe Shaw on 16/11/2017.
//
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include <iostream>
#include <fstream>
#include <initializer_list>
using namespace std;

int main(int argc, char** argv) {
    ifstream fin(argv[1]);
    if (!fin) {
        cout << "Can not open file!" <<endl;
        return -1;
    }
    StrBlob b;
    string s;
    while (getline(fin, s)) {
        b.push_back(s);
    }
    for (auto it = b.begin(); it != b.end(); it.incr()) {
        cout << it.deref() << "";
    }
}