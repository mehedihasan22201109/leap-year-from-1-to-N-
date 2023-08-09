
#include<stdio.h>
int main()
{
   int m;
   printf("Enter a year:");
   scanf("%d",&m);
   while(1)
    {
    if(m%100 == 0){
        if(m%400 == 0){
            printf("leap year");
            break;
        }
        else{
            printf("Not Leap Year");
         break;
         }
    }
    else if (m%4 == 0){
        printf("leap year");
        break;
    }
   else{
       printf("Not Leap Year");
   break;
  }
    }


    return 0;
}
