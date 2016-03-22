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
    Rational R1(27,18);
    Rational R2(3,6);
    Rational R3 = R1.add(R2);

    R3.print1();
    R3.print2();
    R1.print2();
}


int NOD (int x, int y)
{
    int max = std::max(x,y);
    int j = 1;

    for(int i = 2; i <= max/2; i++)
    {
        if (x % i == 0 && y % i == 0){
            j = i;
        }

    }

    return j;
}
