#include <iostream>

//base class
class  Base
{
    public:
        virtual void function01()
        {
            std::cout << "Base function01()" << std::endl;
        }
        virtual void function02()
        {
            std::cout << "Base function02()" << std::endl;
        }
        virtual void function03()
        {
            std::cout << "Base function03()" << std::endl;
        }
};

//derived class 01
class Derived01 : public Base
{
    // hna ghadi n overidiw l function 01
    void function01()
    {
        std::cout << "Derived01 function01" << std::endl;
    }
};

//derived class 02
class Derived02 : public Derived01
{
    //hna ghadi n overidiw we7da akher 02
    void function02()
    {
        std::cout << "Derived02 function02" << std::endl;
    }
};

int main()
{
    // defining base class pointers:
    Base* ptr1 = new Base();
    Base* ptr2 = new Derived01();
    Base* ptr3 = new Derived02();

    // calling the functionss:
    ptr1->function01();
    ptr1->function02();
    ptr1->function03();
    ptr2->function01();
    ptr2->function02();
    ptr2->function03();
    ptr3->function01();
    ptr3->function02();
    ptr3->function03();

    // deleting the objects 
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;

}

