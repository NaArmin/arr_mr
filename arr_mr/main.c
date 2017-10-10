#include <stdio.h>
#include <stdlib.h>

int main()
{
   char array1[] = "cica";
    char array[] = {'c', 'i', 'c', 'a', '\0'};
    printf("%s", array);
    scanf("%s", array);
    puts(array);
    printf("%d\n", sizeof(array1));
    printf("%d\n", sizeof(array));
    int array2[2][7];
    for (int n = 0; n < 3; n++) {
        for (int i = 0; i < 7; i++) {
            array2[n][i] = i + n;
            printf("%d\t", array2[n][i]);
        }
        printf("\n");
    }

    return 0;
}
