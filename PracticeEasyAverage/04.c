#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    int is_prime;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
	is_prime=1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            count++;
        }
    }

    printf("There are %d prime numbers less than or equal to %d\n", count, n);

    return 0;
}
