#include <iostream>

int main()
{
    int min, max, tmp;

    std::cout << "请输入两个整数：" << std::endl;

    std::cin >> min >> max;

    if (min > max) {
        tmp = min;
        min = max;
        max = tmp;
    } 

    for (; min <= max; ++min)
    {
        std::cout << min << " ";
    }
    
    return 0;
}