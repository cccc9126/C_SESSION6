#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, i= 1,result = 0;
    while(i!=6){
        printf("hay nhap mot so ");
        scanf("%d",&num1);
        if (num1 %2==1){
            result=result+num1;
            
        }
        i++;
    }
    printf("tong cua cac so le la %d",result);
        
        return 0;
    }
