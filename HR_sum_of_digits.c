#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int digit_sum(int num);

int num, a, b, c, d, e, sum, result;

int main(){    
    printf("");
    scanf("%d",&num);
    result=digit_sum(num);
    printf("%d",result);    
return 0;
}

int digit_sum(int num){    
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    e=(num/10000)%10;
    sum=a+b+c+d+e;
    return sum;
}