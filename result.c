#include <stdio.h>
#include <ctype.h>

int main()
{
char name[100];
int marks[3], i, sum = 0;
float average;
char grade;

//```
scanf("%99s", name);

for (i = 0; i < 3; i++)
{
    scanf("%d", &marks[i]);

    if (marks[i] < 0 || marks[i] > 100)
    {
        printf("Invalid marks\n");
        return 1;
    }

    sum += marks[i];
}

average = sum / 3.0;

for (i = 0; name[i] != '\0'; i++)
    name[i] = toupper((unsigned char)name[i]);

if (average >= 75)
    grade = 'B';
else if (average >= 60)
    grade = 'C';
else if (average >= 40)
    grade = 'D';
else
    grade = 'F';

printf("%s: Average %.1f, Grade %c\n", name, average, grade);

return 0;
//```

}
