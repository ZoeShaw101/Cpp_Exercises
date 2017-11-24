//
// Created by Zoe Shaw on 24/11/2017.
//

#ifndef CPP_EXERCISES_QUOTE_H
#define CPP_EXERCISES_QUOTE_H

#include <string>
using namespace std;

class Quote {
public:
    Quote() = default;
    Quote(const string& s, double p) : bookNo(s), price(p) {}
    string isbn() const {return bookNo;}
    virtual double net_price(size_t n) {return n * price;}
    virtual ~Quote() = default;

private:
    string bookNo;
protected:
    double price;
};


#endif //CPP_EXERCISES_QUOTE_H
