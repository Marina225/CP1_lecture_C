#include <stdio.h>

int main()
{
    char animal;
    int fee = 0;

    printf("Enter the type of animal (D, C, B, or R): ");
    scanf("%c", &animal);

    switch (animal)
    {
        case 'D':
        case 'd':
            printf("Is the dog neutered? (Y/N): ");
            scanf(" %c", &animal);
            if (animal == 'Y' || animal == 'y')
            {
                fee = 50;
            }
            else if (animal == 'N' || animal == 'n')
            {
                fee = 80;
            }
            else
            {
                printf("Invalid input.\n");
            }
            break;
        case 'C':
        case 'c':
            printf("Is the cat neutered? (Y/N): ");
            scanf(" %c", &animal);
            if (animal == 'Y' || animal == 'y')
            {
                fee = 40;
            }
            else if (animal == 'N' || animal == 'n')
            {
                fee = 60;
            }
            else
            {
                printf("Invalid input.\n");
            }
            break;
        case 'B':
        case 'b':
        case 'R':
        case 'r':
            fee = 0;
            break;
        default:
            printf("Invalid animal type.\n");
            return 1;
            break;
    }

    if (fee > 0)
    {
        printf("Insurance fee: $%d\n", fee);
    }
    else
    printf("No Insurance needs to be paid\n");
    return 0;
}
