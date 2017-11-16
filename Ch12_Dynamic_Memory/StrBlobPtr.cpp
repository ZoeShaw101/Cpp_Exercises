//
// Created by Zoe Shaw on 16/11/2017.
//

#include "StrBlobPtr.h"
#include <StrBlob.h>

string& StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}
StrBlobPtr& StrBlobPtr::incr() {
    //如果curr已经指向容器结尾，则不能递增它
    check(curr, " increment past end of StrBlob");
    curr++;
    return *this;
}
shared_ptr<vector<string>> StrBlobPtr::check(size_t t, const string &s) const {
    auto ret = wptr.lock();
    if (!ret)
        throw runtime_error("unbound StrBlob");
    if (t >= ret->size())
        throw out_of_range(s);
    return ret;
}
StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this, 0);
}
StrBlobPtr StrBlob::end() {
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}