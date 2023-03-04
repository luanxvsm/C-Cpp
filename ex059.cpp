#include <stdio.h>

int main(){
    int v1,v2,v3,i;
    v1=1;
    v2=1;
    v3=v1+v2;

    printf("1-1");
    for (i=0; i<=15; i++){
            printf("-%d",v3);
            v2 = v1;
            v1 = v3;
            v3 = v1+v2;
    }
}