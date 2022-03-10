#include <iostream>

#define abCHECK(a,b) (a>=0 && a<b) ? std::cout << "true\n" : std::cout << "false\n"

int main()
{
    int a, b;
    std::cout << "первое число: ";
    std::cin >> a;
    std::cout << "второе число: ";
    std::cin >> b;
    
    abCHECK(a,b);
    
    return 0;
}
