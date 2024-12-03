#include<stdio.h>
int main()
{
    int watermelon;
    scanf("%d",&watermelon);
    if (watermelon % 2==0 && watermelon != 2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

