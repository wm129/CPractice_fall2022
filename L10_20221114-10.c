#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int j;
    int a[1000];
    char data[] = "data3.txt";
    FILE *fp;
    if(NULL ==(fp=fopen(data, "r")))
    {
        printf("\n %s can not be opened\n", data);
        exit(1);
    }
    fp = fopen("data3.txt", "a");
    for( j=0;j<100;j++ )
        {
            fprintf(fp, "%d\n", j+1 );
        }
    fclose(fp);
    
return 0;
}