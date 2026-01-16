#ifndef PRODUCT_H
#define PRODUCT_H

#include <stdexcept>
#include <string>
#include <cmath>


class Product{
    private:
        std::string name_;
        std::string description_;
        int quantity_;
        double price_;
    public:
        Product(const std::string& name_, const std::string& description_, int quantity_, double price_);
        const std::string& name() const;
        const std::string& description() const;
        int quantity() const;
        double price() const;
        void setQuantity(int number);
        friend std::ostream& operator << (std::ostream& os, const Product& product);
};

#endif