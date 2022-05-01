#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2;
    char filename[100], c;
  
    printf("Enter the filename to open for reading :");
    scanf("%s", filename);

    f1 = fopen(filename, "r");
    if (f1 == NULL)
    {
        printf("Cannot open file %s. \n", filename);
        exit(0);
    }

    printf("Enter the filename to open for writing : ");
    scanf("%s", filename);

    f2 = fopen(filename, "w");
    if (f2 == NULL)
    {
        printf("Cannot open file %s \n",filename);
        exit(0);
    }

    c = fgetc(f1);
    while (c != EOF)
    {
        fputc(c, f2);
        c = fgetc(f1);
    }
  
    printf("\nContents copied to %s", filename);
  
    fclose(f1);
    fclose(f2);
    return 0;
    
}