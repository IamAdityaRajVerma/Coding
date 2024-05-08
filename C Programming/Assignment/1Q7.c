#include<stdio.h>
int main(){


char a;
printf("Enter a Alphabet:");
scanf("%c", &a);

if (a>=65 && a<= 90)
{
    printf("%c\n", a+32);
}
else if (a>=97 && a<=122)
{
   printf("%c\n", a-32);
}
else{
    printf("%c", a);
}
return 0;
}