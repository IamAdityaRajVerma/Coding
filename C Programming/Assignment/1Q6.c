#include<stdio.h>
int main(){


char ch;
printf("Enter a character:");
scanf("%c", &ch);

char newch=++ch;
printf("Next Character is : %c and the ascII value is:  %d\n", newch, newch);


// int n = newch;
// printf("ASCH Value is : %d", n);



return 0;

}