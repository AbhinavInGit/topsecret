#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int A[20], n, i, j, k, pos, val, ch = 0;

    printf("\t Array Operation \n");

    printf("\n\t Input number of data in Array (Max 20) : ");
    scanf("%d", &n);

    if (n > 20)
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("\n\t Input %d data for Array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("\t Data number %d : ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\n\t Data of Array : ");
    for (i = 0; i < n; i++)
        printf(" %d", A[i]);
    printf("\n\t 1. Insert at index number");
    printf("\n\t 2. delete from index number");
    printf("\n\t 3. Delete Value from Array");
    printf("\n\t 4. Delete all duplicate value");
    printf("\n\t 5. Exit");
    printf("\n\t Input your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {

    case 1:
        printf("enter the position in which you wanna insert\n");
        scanf("%d", &pos);
        printf("enter what you want to insert\n");
        scanf("%d", &val);
        for (i = n - 1; i >= pos - 1; i--)
        {
            A[i + 1] = A[i];
        }
        A[pos - 1] = val;

        printf("resultant array is \n");
        for (i = 0; i <= n; i++)
        {
            printf(" %d", A[i]);
        }
        break;

    case 2: // delete from index
        printf("please give us the index number you wanna delete\n");
        scanf("%d", &pos);
        for (j = pos; j < n - 1; j++)
        {
            A[j] = A[j + 1];
        }
        n--;
        printf("resultant array is \n");
        for (i = 0; i < n; i++)
        {
            printf(" %d", A[i]);
        }
        break;

    case 3:
        printf("please tell the number you wanna delete\n");
        scanf("%d", &val);
        for (i = 0; i < n - 1; i++)
        {
            if (A[i] == val)
                for (j = i; j < n - 1; j++)
                {
                    A[j] = A[j + 1];
                }
        }
        n--;

        printf("resultant array is \n");
        for (i = 0; i < n; i++)
        {
            printf(" %d", A[i]);
        }
        break;

    case 4:
        printf("\n\t Comming soon");
        break;

    case 5:
        exit(0);
    default:
        printf("\n\t Invalid Choice. Press any key to cont. ");
        getch();
    }
    getch();
}
