#include <iostream>
#include <ctime>

int factorial(int n)
{
    if (n > 1)
    {
        return (n * factorial(n - 1));
    }
    else
    {
        return n;
    }
}

int power(int base, int exponent)
{
    if (exponent > 1)
    {
        return base * (power(base, (exponent - 1)));
    }
    else
    {
        return base;
    }
}

void testOne(int num);
void testTwo(int num, int num2);

int main()
{
    srand(time(0));

    int num = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    // testOne(num);
    // testTwo(num, num2);
    

    return 0;
}

void testOne(int num)
{
    std::cout << testOne << std::endl;
    std::cout << factorial(num);
}

void testTwo(int num, int num2)
{
    std::cout << ""<<num<<"^"<<num2<<" = " << power(num, num2) << std::endl;
}