#include <stdio.h>
#include <string.h>

int main()
{
char word[100], reversed[100];
int i, length;


scanf("%99s", word);

length = strlen(word);

for (i = 0; i < length; i++)
    reversed[i] = word[length - 1 - i];

reversed[length] = '\0';

printf("%s - ", reversed);

if (strcmp(word, reversed) == 0)
    printf("palindrome\n");
else
    printf("not a palindrome\n");

return 0;


}
