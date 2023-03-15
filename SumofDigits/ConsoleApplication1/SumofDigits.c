#include <stdio.h>
#include <stdlib.h>

int getNoOfDigites(int number)
{
    int count = 0;
    do
    {
        count += 1;
        number /= 10;
    } while (number != 0);
    return count;
}
int powerofTen(int base)
{
    int number = 1;
    for(int i = 1; i <= base; i++)
    {
        number = number * 10;
    }
    return number;
}
int main()
{
    int number = 0, count;
    printf_s("Please enter your number: ");
    scanf_s("%d", &number);
    count = getNoOfDigites(number);
    printf("total count %d\n", count);
    int digit;
    int result = 0;
    for (int i = count - 1; i >= 0; i--)
    {

        int x = powerofTen(i);
        digit = number / (x);
        result += digit;

        number = number - (digit * (x));

    }
    
    printf_s("The sum of all digits is : %d\n", result);
    return 0;
}

