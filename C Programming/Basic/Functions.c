#include <stdio.h>
// declaration / prototype
/*void hello();
void bye();

int main(){
    hello(); // function call
    bye();
    return 0;
}

//function definition
void hello(){ 
    printf("Hello\n");
}
void bye(){
    printf("Good Bye\n");
}*/


/*void table(int n);
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    table(n); // here n is argument or actual parameter
    return 0;
   
}
void table(int n){ // here n is parameter or formal parameter
     for(int i =1; i<=10; i++){
        printf("%d\n", n*i);
    }
}*/
 

/* float rectanglearea (float length , float width);
 float CircleArea (float radius);
 int main(){

 float a=1.00;
 float b=5.6755;
 printf("Area is : %f", rectanglearea(a,b));

 




return 0;
}
float rectanglearea (float length , float width) {
    return length * width;
}*/

int sum(int n);
int main(){
    int n;

 printf("Enter the number upto which sum is calculated : ");
 scanf("%d", &n);
 printf("sum is %d", sum(n));

    return 0;
}
int sum(int n){
    if (n==1){

    return 1;
    }
int sumNm1 = sum(n-1);
int sumN=sumNm1 + n;
    return sumN;
}