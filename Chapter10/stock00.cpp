#include <iostream>
#include "stock00.h"
using namespace std;

void Stock::acquire(const std::string &co, long n, double pr) {
    company = co;
    if (n < 0) {
        cout << "Number of shares cant be negative; ";
        cout << company << " shares set to .\n";
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price) {
    if (num < 0)
    {
        cout << "Number of shares purchased can't be negative"
        << "Transaction is aborted\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0)
    {
        cout << "Number of shares sold can't be nagative. "
        << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
        << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    cout << "Company: " << company
        << "    Shares: " << shares << '\n'
        << "    Share Price: $" << share_val
        << "    Total Worth: $" << total_val << '\n';
}