//
// Created by Zoe Shaw on 13/11/2017.
//
#include <iostream>
#include <vector>
using namespace std;

shared_ptr<vector<int>> create_vec() {
    return make_shared<vector<int>>();
}
shared_ptr<vector<int>> insert_vec(shared_ptr<vector<int>> v) {
    int num;
    while(cin >> num && num != -1) v->push_back(num);
    return v;
}
void use_vec(shared_ptr<vector<int>> v) {
    for (auto i : *v) cout << i << " ";
}
int main() {
    auto v = create_vec();
    v = insert_vec(v);
    use_vec(v);
}