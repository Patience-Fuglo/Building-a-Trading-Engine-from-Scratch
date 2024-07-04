# Building-a-Trading-Engine-from-Scratch
A simplified version of a trading engine to demonstrate the basic concepts of creating an order matching engine.

## Basic Trading Engine in C++
Building a trading engine from scratch using C++ involves various components such as order matching, risk management, market data handling, and communication protocols. This project demonstrates the basic concepts by focusing on creating a simple order matching engine.

## Project Overview

This project includes the following components:
1. **Order Matching Engine**: Core logic to match buy and sell orders.
2. **Order Book**: Data structure to store and manage orders.
3. **Main Server**: Handles incoming orders and routes them to the matching engine.

## Table of Contents

- [Basic Trading Engine Components](#basic-trading-engine-components)
- [Order Structures](#order-structures)
- [Order Book](#order-book)
- [Trading Engine Server](#trading-engine-server)
- [Running the Code](#running-the-code)


## Basic Trading Engine Components

### 1. Order Matching Engine
The core logic to match buy and sell orders.

### 2. Order Book
A data structure to store and manage orders.

### 3. Main Server
Handles incoming orders and routes them to the matching engine.

## Order Structures

## Explanation
Order Structure: Represents buy or sell orders with relevant details like price, quantity, etc.
Order Book: Stores and matches orders. Buy orders are stored in a max-heap (highest price first), and sell orders in a min-heap (lowest price first).
Trading Engine: Receives orders, adds them to the order book, and attempts to match them.

## Running the Code
To run this code, you need a C++ compiler like g++. Save the code in a file, say trading_engine.cpp, and compile it using: g++ trading_engine.cpp -o trading_engine
./trading_engine
## Summary
This project provides a foundational example of a trading engine in C++. It demonstrates the management of buy and sell orders (OrderBook) and the handling of incoming orders (TradingEngine). The separation of header files (include/) for declarations and source files (src/) for implementations helps in organizing and maintaining the codebase effectively.

## Compilation
To compile the project: g++ -I include src/order_book.cpp src/trading_engine.cpp main.cpp -o trading_engine

## Execution
./trading_engine
