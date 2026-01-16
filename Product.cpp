#include "Product.h"

Product::Product(const std::string& name, const std::string& description, int quantity, double price): name_(name), description_(description), quantity_(quantity), price_(price){
    if (name == "" || quantity < 0 || price < 0) 
        throw std::invalid_argument("Invalid product : " + name + " " + std::to_string(quantity) + " " + std::to_string(price) + "\n");
}

const std::string& Product::name() const{
    return name_;
}
const std::string& Product::description() const{
    return description_;
}

int Product::quantity() const{
    return quantity_;
}

double Product::price() const{
    return price_;
}

void Product::setQuantity(int number){
    quantity_ = number;
}

std::ostream& operator << (std::ostream& os, const Product& product){
    os << product.name() + " : " + product.description() + "\n" + "Il y en a " + std::to_string(product.quantity()) 
    + " disponibles au prix unitaire de " + std::to_string(std::round(product.price()*100)/100) + "€.\n";
    return os;
}