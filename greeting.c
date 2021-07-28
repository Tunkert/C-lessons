#include <stdio.h>

int main()
{
    printf("Enter your name: ");
    char name[31];
    scanf("%s", name);
    printf("What is your occupation? ");
    char occupation[31];
    scanf("%s", occupation);
    printf("Your name is %s", name);
    printf(" and you work as a %s.", occupation);
    return 0;
}
