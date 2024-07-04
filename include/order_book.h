#ifndef ORDER_BOOK_H
#define ORDER_BOOK_H

#include "order.h"
#include <queue>

class OrderBook {
public:
    std::priority_queue<Order, std::vector<Order>, CompareBuy> buyOrders;
    std::priority_queue<Order, std::vector<Order>, CompareSell> sellOrders;

    void addOrder(const Order& order);
    void matchOrders();
};

#endif // ORDER_BOOK_H
