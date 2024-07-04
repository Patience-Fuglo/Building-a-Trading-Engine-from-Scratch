#ifndef ORDER_H
#define ORDER_H

#include <string>

enum OrderType { BUY, SELL };

struct Order {
    int id;
    OrderType type;
    std::string symbol;
    double price;
    int quantity;
    
    Order(int id, OrderType type, const std::string& symbol, double price, int quantity)
        : id(id), type(type), symbol(symbol), price(price), quantity(quantity) {}
};

struct CompareBuy {
    bool operator()(Order const& o1, Order const& o2) {
        return o1.price < o2.price; // Higher price first
    }
};

struct CompareSell {
    bool operator()(Order const& o1, Order const& o2) {
        return o1.price > o2.price; // Lower price first
    }
};

#endif // ORDER_H
