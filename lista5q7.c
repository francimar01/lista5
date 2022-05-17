#include<stdio.h>
int main(){
    int v[20],i;
    for(i=0;i<20;i++){
        if(i%2==0){
            v[i]=0;
        }else{
            v[i]=1;
        }
        printf("%d-%d\n",v[i],i);
    }
    return 0;
}