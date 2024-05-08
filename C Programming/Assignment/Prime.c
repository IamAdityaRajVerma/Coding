#include <stdio.h>
int main(){
int n,a;
printf("Enter the Number : ");
scanf("%d",&n);

for(int i=2;i<n;i++){
    a=n%i;

if(a==0){
    printf("\n%d is not Prime",n);}else{ printf("\n%d is prime ",n);}
}
    return 0;
}