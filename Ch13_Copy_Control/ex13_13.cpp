//
// Created by Zoe Shaw on 08/12/2017.
//

#include "HasPtr.h"
#include <vector>
using namespace std;

void func1(const HasPtr& hp) {
    vector<HasPtr> vec;
    vec.push_back(hp);
}

void func2(const HasPtr& hp) {
    cout << hp.get_string() << endl;
}

void func3(const HasPtr& rhp, HasPtr hp) {
    vector<HasPtr> vec;
    vec.push_back(rhp);
    vec.push_back(hp);
}

int main() {
    HasPtr hp1("first");
    HasPtr hp2(hp1);

    HasPtr* ptr = new HasPtr("second");
    func2(*ptr);
    delete ptr;
}