#include <iostream>

int main(int argc, const char** argv)
{
    int i = 50, sum = 0;
    while(i <= 100) {
        sum += i++;
    }

    std::cout << sum << std::endl;

    return 0;
}