#include<stdio.h>//es me ham paqrametr or return value ka use kiye hai 
int factorial(int a);//declaration
int main (){
    int n;
    printf("enter number");
    scanf("%d",&n);
    int d=factorial(n);//callig function
    printf("%d",d);
    return 0;
}
int factorial(int c){//deffine
    int fact=1;
    for(int i=1;i<=c;i++){
        printf("i=%d\n",i);
        fact=fact*i;
    }
    printf("factorial=%d\n",fact);
    return fact;
}
