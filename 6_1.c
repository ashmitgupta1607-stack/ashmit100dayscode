#include<stdio.h> 
int main(){
    int n;
    printf("Enter any Number :");
    scanf("%d",&n);
    if(n==0){
        printf(" %d is neither odd or even ",n);
    }
    if(n%2==0) {
        printf(" %d is  Even  ",n);
    
    } else {
        printf(" %d is  odd  ",n);
    }
    
    return 0;
}
