# include <stdio.h>

int num( int x, int y){
if(x>y){
    printf ("O numero maior eh %d",x);
    return x;
} else { printf("%d",y);
return y;
}
}
int main (){

int num1,num2;
printf(" Digite dois numeros:");
scanf("%d %d",&num1,&num2);
num(num1,num2);
return 0;
}
