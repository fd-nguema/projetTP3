#include "Store.h"

Store::Store(std::vector<Product>& products, std::vector<Client>& clients, std::vector<Order>& orders):
products_(products), clients_(clients), orders_(orders)
{
    bool problem = false;
    while (problem)
    {
        for (auto it = products.begin(); it != products.end(); it++)
        {
            if (!isProduct((*it).title(), (*it).quantity(), (*it).price()))
            {
                throw std::invalid_argument("Invalid product :\n" + (*it).title() + "\n" + (*it).description() + "\n" + 
                std::to_string((*it).quantity()) + "\n" + std::to_string((*it).price()));
                problem = true;
                break;
            }
        }

        for (auto it = clients.begin(); it != clients.end(); it++)
        {
            if (!isClient((*it).id(), (*it).firstname(), (*it).lastname(), (*it).cart()))
            {
                throw std::invalid_argument("Invalid client :\n" + (*it).id() + "\n" + (*it).firstname() + "\n" + 
                (*it).lastname() + "\n" + (*it).viewCart());
                problem = true;
                break;
            }
        }

        for (auto it = orders.begin(); it != orders.end(); it++)
        {
            if (!isOrder((*it).number(), (*it).client(), (*it).cart()))
            {
                throw std::invalid_argument("Invalid order :\n" + (*it).number() + "\n" + (*it).client().firstname() + "\n" + 
                (*it).client().lastname() + "\n" + (*it).viewCart());
                problem = true;
                break;
            }

        }

    }
}

std::vector<Product>& Store::products() const{
    return products_;
}

std::vector<Client>& Store::clients() const{
    return clients_;
}

std::vector<Order>& Store::orders() const{
    return orders_;
}
