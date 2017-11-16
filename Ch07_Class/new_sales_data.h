//
// Created by Zoe Shaw on 07/11/2017.
//

#ifndef CPP_EXERCISES_NEW_SALES_DATA_H
#define CPP_EXERCISES_NEW_SALES_DATA_H

#include <string>
#include <iostream>
using namespace std;

class new_sales_data {
private:
    string bookNo;
    unsigned unit_sold = 0;
    double revenue = 0.0;
    new_sales_data *p;
    static new_sales_data s_n;
    double CalAveragePrice();
public:
    static double basic_cost;
    new_sales_data() = default;
    new_sales_data(const string &s, unsigned n, double p) : bookNo(s), unit_sold(n), revenue(n * p) {}
    static double GetBasicCost() {return basic_cost;}
    static void SetBasicCost() {basic_cost = 2000.0;}
    void CalRevenue(double price);
    void SetData(new_sales_data data);
    void AddData(new_sales_data data);
    void Print();
    string isbn() const {return bookNo;}
    new_sales_data& Combine(const new_sales_data&);
};


#endif //CPP_EXERCISES_NEW_SALES_DATA_H
