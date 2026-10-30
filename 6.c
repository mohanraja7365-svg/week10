#include <stdio.h>

int main()
{
int days[100];
int n, i;
int present = 0;
int currentStreak = 0;
int longestStreak = 0;


printf("Enter number of days: ");
scanf("%d", &n);

if (n < 1 || n > 100)
{
    printf("Invalid number of days.\n");
    return 1;
}

printf("Enter attendance (1 = Present, 0 = Absent):\n");

for (i = 0; i < n; i++)
{
    scanf("%d", &days[i]);

    if (days[i] != 0 && days[i] != 1)
    {
        printf("Invalid attendance value.\n");
        return 1;
    }
}

for (i = 0; i < n; i++)
{
    if (days[i] == 1)
    {
        present++;
        currentStreak++;

        if (currentStreak > longestStreak)
            longestStreak = currentStreak;
    }
    else
    {
        currentStreak = 0;
    }
}

printf("Present: %d, Longest streak: %d\n",
       present, longestStreak);

return 0;


}
