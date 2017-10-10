#include <stdio.h>
#include <stdlib.h>

int main()
{
   //char array[] = "cica";
    char array[] = {'c', 'i', 'c', 'a', '\0'};
    printf("%s", array);
    scanf("%s", array);
    puts(array);
    printf("%d", sizeof(array));
    return 0;
}
