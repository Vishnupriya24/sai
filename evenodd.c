#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d\n",&n);
    if(n>0)
     {
	if((n%2)==0)
	 printf("the number is even");
	else 
	 printf("the number is odd");
	 }else
        printf("plz enter a positive number");
      return 0;
}
