//GOUMDEBE NGASSIA JOSEPH FRANCK
//Sequentiel

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int n, i,j;
    printf("Entrez n\t");
    scanf("%d",&n);
    clock_t start = clock();

    int tab[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            tab[i][j]=(i+2)*(j+1);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           printf("%d\t",tab[i][j]);
        }
        printf("\n");
    }

    clock_t stop = clock();
    double elapse = (stop - start) ;
    printf("%f\t", elapse);

    return 0;
}
