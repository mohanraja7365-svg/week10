#include <stdio.h>

int main()
{
char names[100][50], rotated[100][50];
int n, k, i, newIndex;


printf("Enter number of names: ");
scanf("%d", &n);

if (n < 1 || n > 100)
{
    printf("Invalid number of names.\n");
    return 1;
}

printf("Enter the names:\n");
for (i = 0; i < n; i++)
{
    scanf("%49s", names[i]);
}

printf("Enter rotation count k: ");
scanf("%d", &k);

if (k < 0)
{
    printf("Invalid rotation count.\n");
    return 1;
}

k = k % n;

for (i = 0; i < n; i++)
{
    newIndex = (i + k) % n;
    snprintf(rotated[newIndex], sizeof(rotated[newIndex]),
             "%s", names[i]);
}

printf("Rotated roster: [");
for (i = 0; i < n; i++)
{
    printf("%s", rotated[i]);

    if (i < n - 1)
        printf(", ");
}
printf("]\n");

return 0;


}
