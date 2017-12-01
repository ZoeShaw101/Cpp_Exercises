//
// Created by Zoe Shaw on 24/11/2017.
//

#ifndef CPP_EXERCISES_MY_DISC_QUOTE_H
#define CPP_EXERCISES_MY_DISC_QUOTE_H

#include "Disc_quote.h"
using namespace std;

class My_disc_quote : public Disc_quote{
public:
    My_disc_quote() = default;
    My_disc_quote(const string& s, double p, int c, float d) : Disc_quote(s, p, c, d) {}
    double net_price(size_t n) const override {
        if (n > min_cnt) {
            return (n - min_cnt) * price + min_cnt * (1 - discount) * price;
        } else {
            return n * price;
        }
    }
    virtual  void debug() const override {cout << "price:" << price << " min_cnt:"<< min_cnt<< " discount:" << discount << endl;}
};


#endif //CPP_EXERCISES_MY_DISC_QUOTE_H
