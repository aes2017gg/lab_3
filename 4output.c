#include<stdio.h>
#include"main.h"
void danger_signal (int N, int *danger)
{
    int i;
    char c;
    for(i = 0; i < N; i++)
    {
        printf("%d    ", i + 1);
        if(danger[i] == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        scanf("%c", &c);
    }
}
