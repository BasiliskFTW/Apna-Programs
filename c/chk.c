#include<stdio.h>
int main()
{
      int i=2,c;
      printf("The numbers from 2 to 100 which are not divisible\nby 2, 3 are:\n\n");
      for(i=2;i<=100;i++)
      {
            /*Condition to check numbers not divisible by 2, 3 */
            if((i%2!=0)&&(i%3!=0))
            {
                  printf("%d  ",i);
                  c++;
            }
      }
      printf("\n\n Total Count = %d",c);
      return 0;
}