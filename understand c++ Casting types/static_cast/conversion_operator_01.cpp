// conversion operator allows a class to define custom rules for converting instances of its type to other types.
// it can be implicit or explicit 
// providing flexibility in how conversions are performed .

// first example :

#include <iostream>

class MyString 
{
    private:
    std::string str;

    public:
    MyString(const std::string &s):str(s) {}
    operator std::string() const {return str;}
};

int main()
{
    MyString mystringo("Hello");
    std::string str = mystringo; // implicit conversion
    std::cout << str << std::endl; // output ghadi ykun Hello;
    return 0; 
}


/////////////////////////////////////////////////////

