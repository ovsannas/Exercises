#include <iostream>
#include <cmath>
#include <complex>

template<typename E>
class Complex {
    private:
        E real;
        E imaginary;
    public:
        Complex(): real(0), imaginary(0) {}
        Complex (E r, E i): real(r), imaginary(i) {}
        E norm ();
        E module();
        Complex add (const Complex &);
        Complex sub (const Complex &);
        Complex multiply(Complex &);
        void print();
};

template<typename E>
void Complex<E>::print()
{
     std::cout << "(" << real << (imaginary < 0 ? "" : "+") << imaginary << "j)" << std::endl;
}

template<typename E>
E Complex<E>::norm ()
{
    return real * real + imaginary * imaginary;
}

template<typename E>
E Complex<E>::module()
{
    return sqrt(real*real + imaginary*imaginary);
}

template<typename E>
Complex<E> Complex<E>::add(const Complex<E> & C)
{
    return Complex<E>(real + C.real, imaginary + C.imaginary);
}

template<typename E>
Complex<E> Complex<E>::sub(const Complex<E> & C)
{
    return Complex<E>(real - C.real, imaginary - C.imaginary);
}

template<typename E>
Complex<E> Complex<E>::multiply(Complex<E> & C)
{
    E real_p = (real * C.real) - (imaginary * C.imaginary);
    E imaginary_p = (C.real * imaginary) + (real * C.imaginary);

    return Complex<E>(real_p, imaginary_p);
}


int main()
{
    std::complex<double> c1(-5.34,19.02);
    std::complex<double> c2(4.24,-2.87);

    Complex<double> C1(-5.34,19.02);
    Complex<double> C2(4.24,-2.87);
    std::complex<double> c4(0.0,0.0);

    Complex<double> C3 = C1.multiply(C2);
    c4 = c1 * c2; 

    C3.print();
    std::cout << c4 << std::endl;

    std::cout << C1.module() << std::endl;
    std::cout << C1.norm() << std::endl;


    return 0;
}





