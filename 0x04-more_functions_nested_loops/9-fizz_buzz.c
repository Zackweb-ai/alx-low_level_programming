#include "main.h"

/**
* main - Prints the numbers from 1 to 100,
* replacing multiples of three with "Fizz"
* and multiples of five with "Buzz", and multiples of both with "FizzBuzz".
* Return: Always 0 (Success)
*/

int main(void)
{
	int num;

    	for (num = 1; num <= 100; num++)
    	{
        if (num % 3 == 0 && num % 5 != 0)
        {
            printf("Fizz ");
        }
        else if (num % 5 == 0 && num % 3 != 0)
        {
            printf("Buzz ");
        }
        else if (num % 3 == 0 && num % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        else
        {
            printf("%d ", num);
        }
    }

	printf("\n");
}
