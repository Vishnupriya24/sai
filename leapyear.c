#include <stdio.h>

int main(void) {
int y;
scanf("%d\n",&y);
if(y>0)
{ 
if((y%4)==0)
printf("it is a leap year");
else
printf("it is not a leap year");
	// your code goes here
}else 
printf("enter a valid year");
return 0;
}
