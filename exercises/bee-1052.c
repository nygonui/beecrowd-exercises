#include <stdio.h>

int main()
{
    char months[12][15] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int monthNumber;
    scanf("%d", &monthNumber);
    printf("%s\n", months[--monthNumber]);

    return 0;
}