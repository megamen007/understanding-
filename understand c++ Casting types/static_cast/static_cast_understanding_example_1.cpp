#include <iostream>

int main ()
{
    // implicit type cast float to int ;
    float f = 3.5;
    int a = f ;
    std::cout << "the value of  a: " << a << std::endl;

    // using static_cast for float to int ;
    int b = static_cast<int>(f);
    std::cout << "the value if b: " << b << std::endl;
}