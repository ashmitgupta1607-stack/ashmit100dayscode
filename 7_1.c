#include<stdio.h>
int main(){
    int n;
    printf("Enter a year:");
    scanf("%d",&n);
    if(n%400==0){
        printf(" Leap year ");
    }
    else if ((n%4==0)&&(n%100!=00)){
        printf(" Leap Year ");
        

    } else {
        printf("Not a Leap Year");

    }
    
    return 0;
    

}
