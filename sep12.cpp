#include <iostream>
#include <ctime>

// problem one
int factorial(int n)
{
    if (n > 1)
    {
        return (n * factorial(n-1));
    }
    else
    {
        return n;
    }
}

int main()
{
    srand(time(0));

    int testOne;
    testOne = rand() % 10 + 1;
    std::cout << testOne << std::endl;
    std::cout << factorial(testOne);
    return 0;
}