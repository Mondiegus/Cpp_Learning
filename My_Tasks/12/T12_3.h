#ifndef STOCK2_H_
#define STOCK2_H_

#include <iostream>

using std::ostream;

class Stock
{
    private:
        char * company;
        int shares;
        double share_val;
        double total_val;
        void set_tot() {total_val = shares * share_val;}
    public:
        Stock();
        Stock(const char * co, int n = 0, double pr = 0.0);
        ~Stock() {};
        void buy(int num, double price);
        void sell (int num, double price) ;
        void update(double price);
        friend ostream & operator<<(ostream & os, Stock & s);
        const Stock & topval(const Stock & s) const;
};
#endif