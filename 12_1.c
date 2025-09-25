#include<stdio.h>
int main(){
    int l_days; int bill;// late days 
    printf("Enter Late Days :");
    scanf("%d",&l_days);
    if (l_days<=4){
        bill= l_days*2;
        printf("Fine ₹%d",bill);
    } else if ((l_days>4)&&(l_days<=8)){ 
        l_days-=4;
        bill=l_days*6+8;
        printf("Fine ₹%d",bill);
    } else if((l_days>8)){
        l_days-=8;
        float _bill;
        bill= l_days*8.3+32;
        printf("Fine ₹%d",bill);
    } else {
        printf("INVALID VALUE ENTER A POSITIVE INTERGER ");
    }
    
    return 0;

}
