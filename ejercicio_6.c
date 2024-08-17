#include <stdio.h>

int main(void)
{
    char tablaASCII[256];
    int i;

    
    for (i = 0; i < 256; i++){
        tablaASCII[i] = (char)i;
        printf("%c   ", tablaASCII[i]);
        if (0 == i % 8)
            printf("\n");
    }
}