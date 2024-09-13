#include <iostream>
#include <ctime>

// problem 1
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

// problem 2
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

// problem 3
int sum_digits(unsigned n)
{
    if ((n % 100) != 0)
    {
        return (n % 10) + sum_digits(n / 10);
    }
    else
    {
        return n;
    }
}

// problem 4
int b_counter(char data[], int length, int i)
{
    if (i != length)
    {
        if (data[i] == 'b')
        {
            return 1 + (data, length, i + 1);
        }
        else
        {
            return (data, length, i + 1);
        }
    }
    else
    {
        if (data[i] == 'b')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

// problem 5
int string_length(char* data){
    if (*data == '\0')
    {
        return 0;
    }
    else 
    {
        return 1 + string_length(data+1);
    }
}
void testOne(int num);
void testTwo(int num, int num2);
void testThree(unsigned n);
void testFour(char data[], int length, int i);
void testFive(char data[]);

int main()
{
    srand(time(0));

    // vars to be used
    int num = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    char myString[] = {"Hello"};
    char myString2[] = {"bHellbo"};

    // testOne(num);
    // testTwo(num, num2);
    // testThree(123456);
    // testFour(myString2, 7, 0);
    testFive(myString);

    return 0;
}

void testOne(int num)
{
    std::cout << testOne << std::endl;
    std::cout << factorial(num);
}

void testTwo(int num, int num2)
{
    std::cout << "" << num << "^" << num2 << " = " << power(num, num2) << std::endl;
}

void testThree(unsigned n)
{
    std::cout << "Sum of digits in " << n << " is " << sum_digits(n) << std::endl;
}

void testFour(char data[], int length, int i)
{
    std::cout << "# of b's = " << b_counter(data, length, i) << std::endl;
}

void testFive(char data[])
{
    std::cout << "string_length: " << string_length(data) << std::endl;
}