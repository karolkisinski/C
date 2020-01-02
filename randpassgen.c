#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,n,random;

    i = 0;
    n = 0;
    random = 0;
    srand((unsigned int)(time(NULL)));

    char number [] = "1234567890";
    char lowcase [] = "abcdefghijklmnoqprstuvwyzx";
    char upcase [] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char symbol [] = "!@#$%^&*(){}[]:<>?,./";

    printf("\nHow long password:");
    scanf("%d", &n);
    char password[n];
    random = rand() % 4;
    for (i=0;i<n;i++)
    {
        if(random == 1)
        {
            password[i] = number[rand() % 10];
        }
        else if (random == 2)
        {
            password[i] = symbol[rand() % 21];
        }
        else if (random == 3)
        {
            password[i] = upcase[rand() % 26];
        }
        else
        {
            password[i] = lowcase[rand() % 26];
        }
        printf("%c", password[i]);
        random = rand() % 4;
    }
    return 0;
}
