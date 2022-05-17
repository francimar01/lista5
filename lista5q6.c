#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int v[10],r,i,zero=0,um=0;
srand(time(NULL));
  for(i=0;i<10;i++){
   r=rand();
   r=r%2;
   v[i]=r;
   if(v[i]==0){
    zero++;
   }else if(v[i]==1)
   {
       um++;
   }
}
printf("quantidade de zeros:");
printf("%d",zero);
printf("quantidade de um:");
printf("%d",um);
    return 0;
}