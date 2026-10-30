#include <stdio.h>
#include <ctype.h>

int main()
{
char word[100];
int i, vowels = 0, consonants = 0;
char ch;


scanf("%99s", word);

for (i = 0; word[i] != '\0'; i++)
{
    ch = tolower((unsigned char)word[i]);

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u')
        vowels++;
    else
        consonants++;
}

printf("Vowels: %d\n", vowels);
printf("Consonants: %d\n", consonants);

return 0;


}
