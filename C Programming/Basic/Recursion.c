#include<stdio.h>
// sum of n 
/*int sum(int n);
int main(){
    int n;

 printf("Enter the number upto which sum is calculated : ");
 scanf("%d", &n);
 printf("sum is %d", sum(n));

    return 0;
}
//recursive function
int sum(int n){
    if (n==1){

    return 1;
    }
int sumNm1 = sum(n-1);
int sumN=sumNm1 + n;
    return sumN;
}*/

// factorial of n 
/*int fact(int n);
int main(){
    int n;
 printf("Enter the number of which Factorial is calculated : ");
 scanf("%d", &n);
 printf("Factorial  is : %d",fact(n));


    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }

    int factNm1 = fact(n-1);
    int factN=factNm1*n;
    return factN;
}*/

// nth term of Fibonacci Sequence
 /*int fib(int n);
 int main(){
    int n;
 printf("Enter the number : ");
 scanf("%d", &n);
  printf(" %dth term of Fibonacci Sequence is : %d", n, fib(n));
    return 0;
 }
 int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int fibNm2=fib(n-2);
    int fibNm1=fib(n-1);
    int fibN= fibNm1 + fibNm2;
    return fibN;
 } */

// same ques by loop
int main (){

    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int a=0;
    int b=1;
    int c=0;

    for (int i = 1; i <=n ; i++)
    {
          printf("%d ",a);
          c=a+b;
          a=b;
          b=c;
    }
    
    return 0;
    
    
    
}

/*int power(int x , int y);
int main(){
    int a , b;
    printf("a : ");
    scanf("%d", &a); 
    printf("b :");
scanf("%d", &b);
printf("\n%d to the power %d is : %d\n" , a , b , power(a , b) );


    return 0;
}
int power(int x , int y){
    
int p = 1;
    
    if (y==0){
        return 1;
    }
    for(int i=1 ; i<=y ; i++)
      
      

     p = p*x;
   return p;

    
    

}*/

// int main ()
// {   int c=1;
//     for ( int i =1;i<=5;i++)
//     {
//         for (int j=1;j<=i;j++)
//         {
//             printf("%d ",c);
//             c++;
//         }
//         printf("\n");
//     }
    // return 0;
// }
