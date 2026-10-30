#include <stdio.h>

int main()
{
int n, i, prime = 1;

scanf("%d", &n);

if (n <= 1)
{
    printf("%d is not prime\n", n);
    return 0;
}

for (i = 2; i * i <= n; i++)
{
    if (n % i == 0)
    {
        prime = 0;
        break;
    }
}

if (prime)
    printf("%d is prime\n", n);
else
    printf("%d is not prime\n", n);

return 0;
}
