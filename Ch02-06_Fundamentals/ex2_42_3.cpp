//
// Created by Zoe Shaw on 07/11/2017.
//
#include <iostream>
#include "ex2_42_sales_data.h"
using namespace std;

int main() {
    Sales_data total;
    double totalPrice;
    if (cin >> total.bookNo >> total.unit_sold >> totalPrice) {
        total.CalRevenue(totalPrice);
        Sales_data trans;
        double transPrice;
        while (cin >> trans.bookNo >> trans.unit_sold >> transPrice) {
            trans.CalRevenue(transPrice);
            if (trans.bookNo == total.bookNo) {
                total.AddData(trans);
            } else {
                total.Print();
                total.SetData(trans);
            }
        }
        total.Print();
        return 0;
    } else {
        cerr << "No data?" << endl;
        return -1;
    }
}
