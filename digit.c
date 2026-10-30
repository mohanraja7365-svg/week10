#include <stdio.h>

int main()
{
int n, digit, sum = 0, reverse = 0;

scanf("%d", &n);

while (n > 0)
{
    digit = n % 10;
    sum += digit;
    reverse = reverse * 10 + digit;
    n = n / 10;
}

printf("Sum of digits: %d\n", sum);
printf("Reverse: %d\n", reverse);

return 0;

}
