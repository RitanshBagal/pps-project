#include <stdio.h>
#include<stdlib.h>
int main(){    
float x,y;    
char operator,again;    
do{    
printf("Enter two numbers\n");    
scanf("%f %f",&x,&y);    
printf("Enter + to add\nOr Enter - to subtract\nOr Enter / to  Divide\nOr Enter * to Multiply\n");    
fflush(stdin);  
scanf("%c",&operator);    
if (operator=='+')    
{
       printf("\nSum=%f\n",x+y);
 }
  else if (operator=='-')    
{
      printf("\nDiffrence=%f\n",x-y);
 }  
  else if (operator=='/')    
{
      printf("\nDivision=%f\n",x/y);
 }   
 else if (operator=='*')   
 {
      printf("\nMultiplication=%f\n",x*y);
  }   
 else    
{
      printf("\nInvalid Entry");
 } 
   printf("press y to again use it and n to exit");  
  scanf("%c",&again); 
  } while(again=='y'&& again!='n');    
printf("%c",again);  
getchar();
return 0;
}