# include<stdio.h>
int main(){
    int age ;
    printf("enter the age\n");
    scanf("%d",&age );
    if(age>=90){
     printf("you are above 90,you cannot drive\n");
    }
    else{
        printf("you can drive\n");
    }
  int old ;
    printf("enter the old\n");
    scanf("%d",&old );
    if(old!=90){
     printf("you are drive\n");
    }
    else{
        printf("you cannot drive\n");
    }
    int average;
    printf("enter the average\n");
    scanf("%d",&average);
    if(average>=65){
        printf("true average\n");
    }
    else{
        printf("fulse average\n");
    }
    return 0;
}