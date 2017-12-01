//
// Created by Zoe Shaw on 24/11/2017.
//

#ifndef CPP_EXERCISES_BULK_QUOTE_H
#define CPP_EXERCISES_BULK_QUOTE_H

#include "Disc_quote.h"
using namespace std;

class Bulk_quote : public Disc_quote{

public:
    Bulk_quote() = default;
    Bulk_quote(const Bulk_quote& other) : Disc_quote(other) {
        cout << "Bulk_qoute copy assign" <<endl;
    }
    Bulk_quote& operator=(const Bulk_quote& other) {
        cout << "Bulk copy operator" <<endl;
        Disc_quote::operator=(other);
        return *this;
    }
    virtual ~Bulk_quote() = default;

    Bulk_quote(const string s, double p, int min_cnt, float dis) : Disc_quote(s, p, min_cnt, dis) {}
    double net_price(size_t n) const override {
        if (n >= min_cnt)
            return n * (1 - discount) * price;
        else
            return n * price;
    }
    virtual  void debug() const {cout << "price:" << price << " min_cnt:"<< min_cnt<< " discount:" << discount << endl;}
};


#endif //CPP_EXERCISES_BULK_QUOTE_H
