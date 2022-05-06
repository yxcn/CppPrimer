#include <iostream>
#include <map>
#include "../Source-Code/1/Sales_item.h"

int main()
{
    Sales_item book1;
    std::map<std::string, int> counter;
    
    while(std::cin >> book1)
    {
        counter[book1.isbn()] += 1;
    }

    for (auto item : counter)
    {
        std::cout << item.first << ": " << item.second << std::endl;
    }

    return 0;
}