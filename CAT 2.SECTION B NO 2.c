#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    int scores[2][4]={{65,92,35,70},{84,72,59,67}};

    for(m=0;m<2;m++){
    for(n=0;n<4;n++){

            printf("scores[%d][%d]-%d\n",m,n,scores[m][n]);
    }
    }

    return 0;
}
