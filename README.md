## Recursion Review

__Problem One__
<br>
1. Without looking at previous implementations, implement a C++ function that finds the factorial given an integer value using recursion. <br> <br>

<i> example </i> <br>
int factorial(int n);<br>
<br>

__Problem Two__
<br>
2. Without looking at previous implementations, write a function that finds the power of number to an exponent using recursion.<br> <br>

<i> example </i> <br>
int power(int base, int exponent);<br>
// Example calling power<br>
std::cout << "2^3 = " << power(2,3) << std::endl;<br>
<br>

__Problem Three__
<br>
3. Write a recursive function that returns sum of the digits in an input integer.<br> <br>

<i> example </i> <br>
int sum_digits(unsigned n);<br>
<br>// Example of using sum_digits<br>
int n = 123456;<br>
cout << "Sum of digits in " << n << " is " << sum_digits(n) << endl;
(Hint, use modulo (%) 10 to obtain the last digit and / 10 to remove the last digit)<br>
<br>

__Problem Four__
<br>
4. Write a recursive function that returns the number of ”b” characters in a character array. (Length is the
number of characters in the array)<br><br>

<i> example </i> <br>
int b_counter(char data[], int length, int i);<br>
// Example of using b_counter<br>
// i is the index of the current character to check<br>
char myString2[] = {"bHellbo"};<br>
cout << "# of b's = " << b_counter(myString2,7,0) << endl;<br>
(Hint, i is index of the current character. Increment each time. Stop when i is equal to the length.)<br>

<br>

__Problem Five__
<br>
5. Write a recursive function that calculates the length of a null terminated string stored in a character array.
(Don’t count the null terminator)<br> <br>

<i> example </i> <br>
int string_length(char* data);<br>
// Example calling string_length<br>
char myString[] = {"Hello\0"};<br>
cout << "string_length: " << string_length(myString) << endl;<br>
(Hint, you can use pointer arithmetic to increment the data pointer to the next character. Stop when you reach the null terminator).<br>