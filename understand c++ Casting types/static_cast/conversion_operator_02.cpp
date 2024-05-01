// second example 
#include <cmath>
#include <iostream>

class Complex 
{
    private: 
        double real;
        double imaginary;
        double getMag()
        {
            return sqrt(real * real + imaginary * imaginary );
        }
    public :
        // default constructor :
        Complex (double r = 0.0, double i = 0.0 ): real(r) , imaginary(i)
        {

        }
        // usual function style to get Magnitude :
        double mag()
        {
            return (getMag());
        }
        // magnitude : conversion operator style;
        operator double()
        {
            return (getMag());
        }
};

int main ()
{
    Complex C(3.0 , 1.0);
    // print magnitude 
    std::cout << C.mag() << std::endl;
    // same can be done using conversion operator 
    std::cout << C << std::endl;

}