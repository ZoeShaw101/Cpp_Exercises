//
// Created by Zoe Shaw on 13/11/2017.
//

#ifndef CPP_EXERCISES_STRBLOB_H
#define CPP_EXERCISES_STRBLOB_H

#include <vector>
#include <string>
#include "StrBlobPtr.h"
using namespace std;

class StrBlob {
    friend class StrBlobPtr;
public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> li);
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    void push_back(const string& s) {data->push_back(s);}
    void pop_back();
    string& front() const;
    string& back() const;
    StrBlobPtr begin();
    StrBlobPtr end();

private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const ;
};


#endif //CPP_EXERCISES_STRBLOB_H
