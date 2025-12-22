#include<stdio.h>
void factorial(int a);//fanction declaration return value nhi 
// p hai  
int main(){
    int n;
    printf("enter number =");
    scanf("%d",&n);
    factorial(n);//calling fanction 
    return 0;
}
void factorial(int b){//deffianing fanction         
    int fact=1;
    for (int i=1;i<=b;i++){
        fact=fact*i;
    }
    printf("factorial=%d",fact);
    
}