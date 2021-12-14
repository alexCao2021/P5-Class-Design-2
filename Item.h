#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string.h>

using namespace std;

class Item
{
    public:
        Item() {}
        virtual ~Item() {}

        string Getname() { return name; }
        void Setname(string val) { name = val; }
        long Getid() { return id; }
        void Setid(long val) { id = val; }
        double Getprice() { return price; }
        void Setprice(double val) { price = val; }
        int Getstock() { return stock; }
        void Setstock(int val) { stock = val; }

    protected:

    private:
        string name;
        long id;
        double price;
        int stock;
};

ostream &operator << (ostream &out, const Item item){
    return (out << "Name: " << item.Getname() << endl << "ID: " << item.Getid() << endl
            << "Price: " << item.Getprice() << endl << "Stock: " << item.Getstock() << endl);
}

#endif // ITEM_H