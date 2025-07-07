#include <stdio.h>

int main(void)
{
    char answer[50];
    printf("What does a dog say?");
    fgets(answer, sizeof(answer), stdin);

    printf("a dog says %s\n", answer);
    return 0;
}
