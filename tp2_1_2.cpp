#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#define N 4
#define M 5
using namespace std;


int main(){
int f,c;
      double mt[N][M]={   { 1 , 2, 15, 3 , 4},
                          { 5 , 6 , 7 , 8, 55},
                          { 9 , 10 , 11 , 12, 60}
                        };
double *punteroM;
punteroM=&mt[0][0];

        for(f = 0;f<N; f++)
                    {
                    for(c = 0;c<M; c++)
                    {
                    printf("%lf ", *punteroM++);
                    }     
                    printf("\n");
                    }
        punteroM=&mt[0][0];
 return 0;
}