//
// Created by Zoe Shaw on 24/11/2017.
//

#include <iostream>
#include "Quote.h"
#include "Bulk_quote.h"
#include "My_disc_quote.h"
using namespace std;

//注意这里Quote一定要是const的 => 因为const对象、需要类型转换的都不能传递给普通的引用
double print_total(ostream& os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "#ISBN: " << item.isbn() << " sold: " << n << " total due: " << ret << endl;
    return ret;
}

int main() {
    Bulk_quote bq("AB", 20, 5, 0.2);
    My_disc_quote mdq("AB", 20, 5, 0.2);
    print_total(cout, bq, 10);
    Quote &qb = bq;
    Quote &qmdq = mdq;
    cout << qb.net_price(10) <<" " << qmdq.net_price(10);

    Bulk_quote bulk;
    Bulk_quote *bulkp = &bulk;
    Quote *itemp = &bulk;
    bulkp->discount_policy();
}