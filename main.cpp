#include <iostream>

#include "Product.h"
#include "Store.h"

int main(){
    std::vector<Product&> products = {};
    std::vector<Client> clients = {};
    std::vector<Order> orders = {};
    Store thestore(products, clients, orders);

    Product gameconsole("PS5", "The last new-gen PlayStation game console.", 20, 599.99);
    std::cout << gameconsole << std::endl;
    gameconsole.setQuantity(15);
    std::cout << gameconsole << std::endl;

    thestore.addProduct(gameconsole);
    thestore.showProduct("PS5");
    thestore.setQuantity("PS5", 10);
    std::cout << thestore << std::endl;
    
    return 0;
}