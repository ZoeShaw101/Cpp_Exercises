//
// Created by Zoe Shaw on 16/11/2017.
//

#ifndef CPP_EXERCISES_STRBLOBPTR_H
#define CPP_EXERCISES_STRBLOBPTR_H

#include <memory>
#include "StrBlob.h"
using namespace std;

class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz) : wptr(a.data), curr(sz) {}
    string& deref() const;  //解指针引用
    StrBlobPtr& incr(); //前缀递增
    inline bool operator!=(const StrBlobPtr& p) {return p.wptr.lock() == this->wptr.lock();}

private:
    shared_ptr<vector<string>> check(size_t t, const string& s) const ; //检查解引用StrBlobPtr是否安全
    weak_ptr<vector<string>> wptr;
    size_t curr;
};

#endif //CPP_EXERCISES_STRBLOBPTR_H
