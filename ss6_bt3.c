#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i ;
    while (i!=1234){
        printf("hay nhap mat khau : ");
        scanf("%d", &i);
        
        i=i;
            if(i !=1234){
                printf("sai mat khau roi hihi\n");
            }else if (i ==1234){
                printf("dung roi\n");
        }
    }
    return 0;
}
