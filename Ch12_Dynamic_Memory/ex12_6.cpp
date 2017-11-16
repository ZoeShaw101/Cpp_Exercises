//
// Created by Zoe Shaw on 13/11/2017.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int>* create_vec() {
    return new vector<int>();
}
vector<int>* use_vec(vector<int>* v) {
    int num;
    while(cin >> num && num != -1) v->push_back(num);
    return v;
}
void get_vec(vector<int>* v) {
    for (auto i : *v) cout<< i << " ";
    delete v;
}
int main() {
    vector<int>* v = create_vec();
    v = use_vec(v);
    get_vec(v);
}