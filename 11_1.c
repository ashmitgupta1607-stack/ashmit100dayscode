#include<stdio.h>
int main(){
    int m_n; //m_n = Month Number 
    printf("Enter a month Number (1-12): ");
    scanf("%d",&m_n);
    switch (m_n) {
        case 1: 
              printf("January ,31 days");
              break;
        case 2:
               printf("February ,28 days");
               break;
        case 3:
               printf("March ,31 days");
               break;
        case 4:
               printf("April ,30 days");
               break;
        case 5:
               printf("May ,31 days");
               break;
        case 6:
               printf("June ,30 days");
               break;
        case 7:
               printf("July,31 days");
               break;
        case 8:
              printf("August ,31days");
              break;
        case 9:
              printf("September,30 days");
              break;
        case 10:
              printf("October ,31 days");
              break;
        case 11:
              printf("November,30 days");
              break;
        case 12:
              printf("December ,31 days");
              break;
        default :
              printf(" Invalid Month Number ,Please Enter a number betwwen 1 and 12 ");
              break;                                                              
    
    } 
    
    return 0;
}
