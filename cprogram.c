#include <stdio.h>

int main()
{
    int n, i;
    char name[50][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter names of %d students:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    printf("\nFirst %d students are:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}