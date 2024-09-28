#include<stdio.h>
int main ()
{
    int hours;
    printf("Enter the hours: ");
    scanf("%d", &hours);

    if (hours >= 6 && hours < 12)
        printf("GOOD MORNING\n");
    
    else if (hours >= 12 && hours < 18)
        printf("GOOD AFTERNOON\n");

    else if (hours >= 18 && hours < 24)
        printf("GOOD EVENING\n");

    else if (hours >= 0 && hours < 6)
        printf("GOOD NIGHT\n");

    else
        printf("Sorry, invalid output\n");
}

