//
// Created by Zoe Shaw on 08/12/2017.
//

#ifndef CPP_EXERCISES_HASPTR_H
#define CPP_EXERCISES_HASPTR_H

#include <iostream>
using namespace std;

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {cout << "HasPtr()"<<endl;}
    HasPtr(const HasPtr& rhs) : ps(new string(*rhs.ps)), i(rhs.i) {cout << "HasPtr(const HasPtr&)" << endl;}
    HasPtr& operator=(const HasPtr& rhs) {
        auto tmp = new string(*rhs.ps);
        delete ps;
        ps = tmp;
        i = rhs.i;
        return *this;
    }
    ~HasPtr() {delete ps; cout<< "destructor"<<endl;}

    string& get_string() const {return *ps;}
private:
    std::string *ps;
    int i;
};


#endif //CPP_EXERCISES_HASPTR_H
