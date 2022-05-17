#include<stdio.h>
#include<stdlib.h>
int main(){
    int v[20],n,i;
    printf("digite um número: ");
    scanf("%d",&n);
    for(i=0;i<20;i++){
    if(n+1>20){
        v[i]=1;
    }if(1>n){
        v[i]=0;
    }
    printf("%d\n",v[i]);
    }
    return 0;
}