#include <iostream>

class Base
{
    public:
        virtual void function1()
        {
            std::cout << "Base function1()" << std::endl;
        }
};

class Derived : public Base
{
    public :
    void function1()
    {
        std::cout << "Derived function1()" << std::endl;
    }
};

int main()
{
    Base* ptr1 = new Base();
    Base* ptr2 = new Derived();
    Derived A;

    A.function1();
    ptr1->function1();
    ptr2->function1();

    delete ptr1;
    delete ptr2;

}


///////////////////////////////////////////////////////////////////////

//this is using memory managed automatically 

int main ()
{
    Derived obj;
    obj.function1();
    Base * ptr = &obj;
    ptr->function1();
}