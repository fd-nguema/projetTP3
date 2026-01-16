#include <iostream>

#include "Store.h"

int main(){
    std::vector<Product> products = {};
    std::vector<Client> clients = {};
    std::vector<Order> orders = {};

    Store emptyStore(products, clients, orders);
}