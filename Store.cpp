#include "Store.h"

Store::Store(std::vector<Product&>& products, std::vector<Client>& clients, std::vector<Order>& orders):
products_(products), clients_(clients), orders_(orders){}

std::vector<Product&>& Store::products() const{
    return products_;
}

std::vector<Client>& Store::clients() const{
    return clients_;
}

std::vector<Order>& Store::orders() const{
    return orders_;
}

void Store::addProduct(Product& product){
    products_.push_back(product);
}

void Store::showProduct(const std::string& product_name) const{
    for (const auto& product : products_){
        if (product.name() == product_name){
            std::cout << product << std::endl;
            break;
        }
    }
}

void Store::setQuantity(const std::string& product_name, int quantity){
    for (const auto& product : products_){
        if (product.name() == product_name){
            product.setQuantity(quantity);
            break;
        }
    }
}

std::ostream& operator << (std::ostream& os, const Store& store){
    for (const auto& p : store.products()){
        os << p;
    }
    return os;
}
