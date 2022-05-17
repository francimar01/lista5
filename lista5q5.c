#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int v[10],r,i,par[5],impar[5];
srand(time(NULL));
  for(i=0;i<5;i++){
   r=rand();
   r=r%50+1;
   if(r%2==0){
       par[i]=r;
       impar[i]=r+1;  
   }else{
       impar[i]=r;
       par[i]=r-1;
   }
    }
    printf("par:\n ");
for(i=0;i<5;i++){
  printf("%d-\n",par[i]);
}
printf("impar:\n ");
for(i=0;i<5;i++){
    printf("%d-\n",impar[i]);
}
    return 0;
}