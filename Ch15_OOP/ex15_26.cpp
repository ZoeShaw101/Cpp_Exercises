//
// Created by Zoe Shaw on 01/12/2017.
//

#include <iostream>
#include "Quote.h"
#include "Bulk_quote.h"
#include "My_disc_quote.h"
using namespace std;

int main() {
    Quote quote("ABC", 10.0);
    Quote quotecp(quote);
    //Quote quotemv(move(quote));

    Bulk_quote bkquote("BCD", 20.0, 10, 0.8);
    Bulk_quote bkquotecp(bkquote);
    Quote *p = &bkquote;
    p->debug();
}