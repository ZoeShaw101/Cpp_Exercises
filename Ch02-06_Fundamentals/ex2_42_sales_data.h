//
// Created by Zoe Shaw on 07/11/2017.
//

#ifndef C_EXERCISES_EX2_42_SALES_DATA_H_H
#define C_EXERCISES_EX2_42_SALES_DATA_H_H

#include <iostream>
#include <string>
using namespace std;

struct Sales_data{
    string bookNo;
    unsigned unit_sold = 0;
    double revenue = 0.0;

    void CalRevenue(double price);
    double CalAveragePrice();
    void SetData(Sales_data data);
    void AddData(Sales_data data);
    void Print();
};

void Sales_data::CalRevenue(double price) {
    revenue = unit_sold * price;
}
double Sales_data::CalAveragePrice() {
    if (unit_sold != 0) {
        return revenue / unit_sold;
    }
    return 0.0;
}
void Sales_data::SetData(Sales_data data) {
    bookNo = data.bookNo;
    unit_sold = data.unit_sold;
    revenue += data.revenue;
}
void Sales_data::AddData(Sales_data data) {
    if (bookNo != data.bookNo) return;
    unit_sold += data.unit_sold;
    revenue += data.revenue;
}
void Sales_data::Print() {
    std::cout << bookNo << " " << unit_sold << " " << revenue << " ";
    double averagePrice = CalAveragePrice();
    if (averagePrice != 0.0)
        std::cout << averagePrice << std::endl;
    else
        std::cout << "(no sales)" << std::endl;
}
#endif //C_EXERCISES_EX2_42_SALES_DATA_H_H
