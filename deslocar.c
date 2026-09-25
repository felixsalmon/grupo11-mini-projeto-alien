#include <stdio.h>

int main()
{
    char N[10001];
    char msgdeslocada[10001];
    int n, i;

    fgets(N, sizeof(N), stdin);

    scanf("%d", &n);

    for (i = 0; N[i] != '\0'; i++)
    {
        if (N[i] >= 'a' && N[i] <= 'z')
        {
            if (N[i] == 'z')
            {
                msgdeslocada[i] = ('a' + n) - 1;
            }
            else
            {
                msgdeslocada[i] = N[i] + n;
            }
        }
        else if (N[i] >= 'A' && N[i] <= 'Z')
        {
            if (N[i] == 'Z')
            {
                msgdeslocada[i] = ('A' + n) - 1;
            }
            else
            {
                msgdeslocada[i] = N[i] + n;
            }
        }
        else if (N[i] >= '0' && N[i] <= '9')
        {
            if (N[i] == '9')
            {
                msgdeslocada[i] = ('0' + n) - 1;
            }
            else
            {
                msgdeslocada[i] = N[i] + n;
            }
        }
        else
        {
            msgdeslocada[i] = N[i];
        }
    }
    msgdeslocada[i] = '\0';

    printf("%s", msgdeslocada);
    printf("\n");

    return 0;
}