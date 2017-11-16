//
// Created by Zoe Shaw on 07/11/2017.
//

#include "new_sales_data.h"

new_sales_data& new_sales_data::Combine(const new_sales_data &rhs) {
    unit_sold += rhs.unit_sold;
    revenue += rhs.unit_sold;
    return *this;
}

void new_sales_data::CalRevenue(double price) {
    revenue = unit_sold * price;
}
double new_sales_data::CalAveragePrice() {
    if (unit_sold != 0) {
        return revenue / unit_sold;
    }
    return 0.0;
}
void new_sales_data::SetData(new_sales_data data) {
    bookNo = data.bookNo;
    unit_sold = data.unit_sold;
    revenue += data.revenue;
}
void new_sales_data::AddData(new_sales_data data) {
    if (bookNo != data.bookNo) return;
    unit_sold += data.unit_sold;
    revenue += data.revenue;
}
void new_sales_data::Print() {
    std::cout << bookNo << " " << unit_sold << " " << revenue << " ";
    double averagePrice = CalAveragePrice();
    if (averagePrice != 0.0)
        std::cout << averagePrice << std::endl;
    else
        std::cout << "(no sales)" << std::endl;
}
