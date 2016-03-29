#include <iostream>
#include <algorithm>
#include <iomanip>

int NOD(int, int);


class Rational {
    private:
        int num;
        int denom;
    public:
        Rational(): num(0), denom(0) {}
        Rational(int a, int b);
        Rational add(const Rational &);
        void print1();
        void print2();
};

Rational::Rational(int a, int b) 
{
    num = a / NOD(a,b);
    denom = b / NOD(a,b);
}

Rational Rational::add(const Rational & r)
{
    int a = r.denom * num + denom * r.num;
    int b = denom * r.denom;

    return Rational(a,b);
}

void Rational::print1()
{
    std::cout << "a / b = " << num << "/" << denom << std::endl;
}

void Rational::print2()
{
    double f = static_cast<double>(num) / denom;
    std::cout << "a / b = " << std::setprecision(2) << f << std::endl;
}

int main()
{
    Rational R1(18,45);
    R1.print1();
    R1.print2();
    Rational R2(24,64);
    R2.print1();
    R2.print2();

    Rational R3 = R1.add(R2);
    R3.print1();
    R3.print2();

    return 0;
}


int NOD (int x, int y)
{
    while (x != 0 && y != 0)
    {
        if (x > y)
            x = x % y;
        else
            y = y % x;
    }

    return x + y;
}
