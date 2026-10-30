#include <stdio.h>

int secondHighest(int scores[], int n)
{
int highest = -1;
int second = -1;

for (int i = 0; i < n; i++)
{
    if (scores[i] > highest)
    {
        second = highest;
        highest = scores[i];
    }
    else if (scores[i] < highest && scores[i] > second)
    {
        second = scores[i];
    }
}

return second;


}

int main()
{
int scores[] = {45, 78, 92, 78, 60};
int n = sizeof(scores) / sizeof(scores[0]);


printf("Second-highest distinct score: %d\n",
       secondHighest(scores, n));

return 0;


}
