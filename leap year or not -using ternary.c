#include<stdio.h>
int main()
{
  int year;
  printf("enter the year:");
  scanf("%d",&year);
  (year%100!=0)?
  ((year%400==0)?
  (printf("%d is leap year\n",year)):
  (printf("%d is not leap year\n",year))
   ):
       (((year%4==0))?(printf("%d is leap year\n",year)):
           (printf("%d is not leap year\n",year))
           );
           return 0;
}
