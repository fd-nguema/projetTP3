#ifndef STORE_H
#define STORE_H

#include <stdexcept>
#include <vector>
#include <iostream>

#include "Product.h"

class Store{
    private:
        std::vector<Product&>& products_;
        std::vector<Client>& clients_;
        std::vector<Order>& orders_;
    public:
        Store(std::vector<Product&>& products, std::vector<Client>& clients, std::vector<Order>& orders);
        std::vector<Product&>& products() const;   
        std::vector<Client>& clients() const;
        std::vector<Order>& orders() const;
        void addProduct(Product& product);
        void showProduct(const std::string& product_name) const;
        void setQuantity(const std::string& product_name, int quantity);
        friend std::ostream& operator << (std::ostream& os, const Store& store);

};

#endif