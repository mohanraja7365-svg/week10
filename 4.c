#include <stdio.h>

int firstPosition(int scores[], int n, int target)
{
int left = 0, right = n;


while (left < right)
{
    int mid = left + (right - left) / 2;

    if (scores[mid] < target)
        left = mid + 1;
    else
        right = mid;
}

return left;


}

int countInBand(int scores[], int n, int low, int high)
{
int start = firstPosition(scores, n, low);
int end = firstPosition(scores, n, high + 1);


return end - start;


}

int main()
{
int scores[] = {35, 42, 42, 50, 58, 58, 58, 63, 71, 88};
int n = sizeof(scores) / sizeof(scores[0]);
int low = 42, high = 58;


printf("Number of students in band [%d, %d]: %d\n",
       low, high, countInBand(scores, n, low, high));

low = 90;
high = 100;

printf("Number of students in band [%d, %d]: %d\n",
       low, high, countInBand(scores, n, low, high));

return 0;


}
