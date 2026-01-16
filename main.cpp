#include <iostream>

#include "Product.h"

int main(){
    Product gameconsole("PS5", "The last new-gen PlayStation game console.", 20, 599.99);
    std::cout << gameconsole << std::endl;
    gameconsole.setQuantity(15);
    std::cout << gameconsole << std::endl;
    return 0;
}