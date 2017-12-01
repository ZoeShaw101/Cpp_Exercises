//
// Created by Zoe Shaw on 24/11/2017.
//

#ifndef CPP_EXERCISES_QUOTE_H
#define CPP_EXERCISES_QUOTE_H

#include <string>
#include <iostream>
using namespace std;

class Quote {
public:
    Quote() = default;
    Quote(const Quote& other) {
        cout << "Quote copy assign" << endl;
        bookNo = other.bookNo;
        price = other.price;}
    Quote& operator=(const Quote& ) = default;
    Quote(const string& s, double p) : bookNo(s), price(p) {}
    virtual ~Quote() = default;

    string isbn() const {return bookNo;}
    virtual double net_price(size_t n) const {return n * price;}
    virtual void debug() {cout << "bookNo: "<< bookNo << ", price: " << price <<endl;}
private:
    string bookNo;
protected:
    double price;
};


#endif //CPP_EXERCISES_QUOTE_H
