#include <stdio.h>

int main()
{
    //FILE* ascii = fopen("vystup-txt-bin.txt", "w");
    FILE* ascii = fopen("vystup-txt-bin.txt", "wb");

    int x = 0x1A2B3C4D;
    fprintf(ascii, "%d\n", x);
    fwrite(&x, sizeof(int), 1, ascii);

    fclose(ascii);

}

