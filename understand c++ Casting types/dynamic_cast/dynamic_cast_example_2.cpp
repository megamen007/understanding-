#include <iostream>

#include <iostream>

class Base 
{
    virtual void print()
    {
        std::cout << "Base" << std::endl;
    }
};

class Derived01 : public Base
{
    void print()
    {
        std::cout << "Derived01" << std::endl;
    }
};

class Derived02 : public Base
{
    void print()
    {
        std::cout << "Derived02" << std::endl;
    }
};

int main()
{
   Derived02 A;
   Base *ptr1 = dynamic_cast<Base *>(&A);

   Derived02 *ptr2 = dynamic_cast<Derived02 *>(ptr1);

   if (ptr2 == nullptr)
   {
    std::cout << "null" << std::endl;
   }
   else
   {
    std::cout << "not null" << std::endl;
   }
}