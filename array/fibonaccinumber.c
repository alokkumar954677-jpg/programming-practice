#include<stdio.h>
int fibonacci(int a);
int main(){
    int n;
    printf("enter number=");
    scanf("%d",&n);
    int f=fibonacci(n);
    printf("%d",f);
    return 0;
}
int fibonacci(int c){
int x=0,y=1,z=0;
for(int i=1;i<=c;i++){
printf("%d",z);
   x=y;
   y=z;
   z=x+y;
   break;
}
return 0;
}