#include<iostream>
#include<string>
int main(){
    int x = 10;
    int y = 20;
    int sum  = x + y;
    int mult = x * y;
    int sub = y - x;
    int div = y / x;
    int modulus = y % x;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Mult: " << mult << std::endl;
    std::cout << "Div: " << div << std::endl;
    std::cout << "Modululs: " << sum << std::endl;

    std::cin.get();
    return 0;
}