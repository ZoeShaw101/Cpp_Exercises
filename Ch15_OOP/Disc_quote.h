//
// Created by Zoe Shaw on 24/11/2017.
//

#ifndef CPP_EXERCISES_DISC_QUOTE_H
#define CPP_EXERCISES_DISC_QUOTE_H

#include "Quote.h"
#include <string>
using namespace std;

class Disc_quote : public Quote{
protected:
    int min_cnt = 0;
    float discount = 0.0;
public:
    Disc_quote() = default;
    Disc_quote(const Disc_quote& other) : Quote(other) {
        cout << "Disc_quote copy assign" <<endl;
        min_cnt = other.min_cnt;
        discount = other.discount;
    }
    Disc_quote& operator=(const Disc_quote& other) {
        cout << "Disc_quote copy operator" <<endl;
        Quote::operator=(other);
        return *this;
    }
    Disc_quote(const string& str, double price, int c, float d) : Quote(str, price), min_cnt(c), discount(d) {}
    virtual double net_price(size_t n) const = 0;
    virtual  void debug() const  {cout << "price:" << price << " min_cnt:"<< min_cnt<< " discount:" << discount << endl;}
    pair<size_t , double> discount_policy() const {return {min_cnt, discount};}
    virtual ~Disc_quote() = default;
};


#endif //CPP_EXERCISES_DISC_QUOTE_H
