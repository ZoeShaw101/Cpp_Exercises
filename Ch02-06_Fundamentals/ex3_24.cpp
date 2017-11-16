//
// Created by Zoe Shaw on 07/11/2017.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int num;
    while (cin >> num && num != -1) vec.push_back(num);
    auto it1 = vec.begin();
    auto it2 = vec.end() - 1;
    while (it1 < it2) {
        cout << *it1  + * it2<< endl;
        it1++;
        it2--;
    }
    if (vec.size() % 2 == 1) cout << *it1 << endl;
}
