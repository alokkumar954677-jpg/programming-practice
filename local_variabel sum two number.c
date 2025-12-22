#include<stdio.h>// es code me  return value nhi le rha but
//  parameters le raha hai 
void sum(int a,int b);//function declaration 
int main (){
int a,b;
printf("enter two number=");
scanf("%d%d",&a,&b);
sum(a,b);//local varibel with calling function
return 0;
}
void sum(int c,int d){//diffine function 
    int k=c+d;
    printf("sum=%d",k);
    
}
