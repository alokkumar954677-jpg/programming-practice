#include<stdio.h>
void fibonacci(int);//declaratinon function
int main(){
    int a;
    printf("enter fibonacci number=\n");
    scanf("%d",&a);
    fibonacci(a);// calling function
    return 0;
}
void fibonacci(int k){// definition function
    int x=0,y=1,z=0;
    for(int i=1;i<=k;i++){
        printf("%d",z);
        x=y;
        y=z;
        z=x+y;
    }
}