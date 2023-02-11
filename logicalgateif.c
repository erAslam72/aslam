# include<stdio.h>
int main(){
    int age;
    // agar vippass 2 ho to kya hota hai ,agar   nhi lagaya hai in vipass=0 to kya hoga 
    int vippass =0;
     vippass =1;
    printf("enter the age\n");
    scanf("%d",&age);
    if((age<=90 && age>=18) || !vippass==1)

    {
        printf("you can drive\n");
    
    }
    else{
       printf("you cannot drive");
    }int oldage;
      printf("enter the oldage\n");
    scanf("%d",&oldage);
    if(oldage<=90 && oldage>=18)

    {
        printf("you can drive\n");
    
    }
    else{
       printf("you cannot drive");
    }
    return 0;
}