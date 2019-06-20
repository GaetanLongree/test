#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main()
{
    FILE * file = fopen("output.txt", "w");
    int n=300000, i, fact, j;
    clock_t start, end;
    double cpu_time_used = 0.;
    fprintf(file, "Prime numbers are: \n");
    start = clock();
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            fprintf(file, "%d\n" ,i);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    fprintf(file, "Total time taken: %f\n", cpu_time_used);
    exit(0);
}
