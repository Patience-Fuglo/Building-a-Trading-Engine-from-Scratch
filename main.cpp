#include "trading_engine.h"

int main() {
    TradingEngine engine;

    // Simulating incoming orders
    engine.receiveOrder(BUY, "AAPL", 150.0, 10);
    engine.receiveOrder(SELL, "AAPL", 149.0, 5);
    engine.receiveOrder(BUY, "AAPL", 151.0, 15);
    engine.receiveOrder(SELL, "AAPL", 150.0, 10);

    return 0;
}
