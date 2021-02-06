#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int a,b;
    float c,d;
    printf("");
    scanf("%d %d", &a, &b);
    printf("");
    scanf("%f %f", &c, &d);
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f",c+d,c-d);    
return 0;
}