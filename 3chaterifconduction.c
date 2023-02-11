// // c program to check whether a number is evenor not?
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a number \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
      
    
    int x;
   
    printf("enter x number \n");
    scanf("%d",&x);

  
    if(x % 2==0){
        printf("%d is even\n",x);
       

    }
    else{
        printf("%d is odd\n",x);
    }
    int c=12;
    if(c>18){
        printf("%d  true\n",c);
    }
    else{
        printf("%d is fulse\n",c);
    }
      int d=19;
    if(d>18){
        printf("%d  true\n",d);
    }
    else{
        printf("%d is fulse\n",d);
    }
return 0;
}