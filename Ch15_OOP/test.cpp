//
// Created by Zoe Shaw on 24/11/2017.
//

#include <iostream>
#include "Quote.h"
#include "Bulk_quote.h"
using namespace std;

double print_total(ostream& os, Quote& item, size_t n) {
    double ret = item.net_price(n);
    os << "#ISBN: " << item.isbn() << " sold: " << n << " total due: " << ret << endl;
    return ret;
}

int main() {
    Bulk_quote *bulk = new Bulk_quote("AB123", 20, 5, 0.2);
    Quote &item = *bulk;
    print_total(cout, item, 10);
}