
#include <stdio.h>
#define N 10
void add( int *a, int *b, int *c){
    int tid = 0 ; // 这是第0个cpu，因此索引从0开始
    while (tid < N){
        c[tid] = a[tid] + b[tid];
        tid += 1;
    }
}


int main(void){
    int a[N], b[N],c[N];

    //在cpu上
    for (int i=0; i<N; i++){
        a[i] = -i;
        b[i] =i*i;
    }
    add( a,b,c);
    for (int i=0;i<N; i++){
        printf("%d + %d = %d \n", a[i], b[i], c[i]);


    }
    return 0;

}