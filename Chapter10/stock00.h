#ifndef CPLUSPLUS_STOCK00_H
#define CPLUSPLUS_STOCK00_H

#include <string>
using namespace std;

class Stock
{
private:
    string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot()
    {
        total_val = shares * share_val;
    }
    void acquire(const string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif // CPLUSPLUS_STOCK00_H
