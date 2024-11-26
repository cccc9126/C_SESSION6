#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("hay nhap mot so : ");
    scanf("%d",&num);
    printf("cac uoc cua %d la:\n", num);
    for(int i = 1;i<=num;i++){
        if(num %i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
