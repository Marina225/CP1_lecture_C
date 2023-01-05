#include <stdio.h>
#include <stdbool.h>

int main()
{
    int count = 0;
    int num = 2;

    while (count < 1001)
    {
        bool is_prime = true;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            count++;
        }

        num++;
    }

    printf("The 1001st prime number is %d\n", num - 1);

    return 0;
}
