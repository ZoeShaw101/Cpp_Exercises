//
// Created by Zoe Shaw on 13/11/2017.
//

#include "StrBlob.h"
StrBlob::StrBlob() : data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> li) : data(make_shared<vector<string>>(li)){}
void StrBlob::check(size_type i, const string &msg) const {
    if (i >= data->size())
        throw out_of_range(msg);
}
void StrBlob::pop_back() {
    check(0, "Pop on empty StrBlob");
    data->pop_back();
}
string& StrBlob::front() const {
    check(0, "Pop on empty StrBlob");
    return data->front();
}
string& StrBlob::back() const {
    check(0, "Back on empty StrBlob");
    return data->back();
}