//
// Created by Zoe Shaw on 24/11/2017.
//

#ifndef CPP_EXERCISES_BULK_QUOTE_H
#define CPP_EXERCISES_BULK_QUOTE_H

#include "Quote.h
using namespace std;

class Bulk_quote : public Quote{
private:
    int min_cnt;
    float discount;
public:
    Bulk_quote() = default;
    Bulk_quote(const string s, double p, int min_cnt, float dis) : Quote(s, p), min_cnt(min_cnt), discount(dis) {}
    double net_price(size_t n) const {
        if (n >= min_cnt)
            return n * (1 - discount) * price;
        else
            return n * price;
    }
};


#endif //CPP_EXERCISES_BULK_QUOTE_H
