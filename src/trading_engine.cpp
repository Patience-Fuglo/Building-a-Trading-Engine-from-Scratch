#include "trading_engine.h"

void TradingEngine::receiveOrder(OrderType type, const std::string& symbol, double price, int quantity) {
    Order newOrder(orderIdCounter++, type, symbol, price, quantity);
    orderBook.addOrder(newOrder);
    orderBook.matchOrders();
}
