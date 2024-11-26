#include <stdio.h>

int main(int argc, const char * argv[]) {
    int day, month, year;
    printf("hay nhap nam : ");
    scanf("%d",&year);
    printf("hay nhap so thang : ");
    scanf("%d", &month);
    if (year % 4==0 && year %100!=0){
        
        if(month==1||month==3||month ==5||month==7||month==8||month==10||month==12){
            printf("co 31 ngay");
        }else if (month==4||month==6||month==9||month==11){
            printf("co 30 ngay");
        }else if(month == 2){
            printf("co 29 ngay");
        }else{
            printf("khong hop le");
        }
    }else if (year %400 == 0){
           
        if(month==1||month==3||month ==5||month==7||month==8||month==10||month==12){
            printf("co 31 ngay");
        }else if (month==4||month==6||month==9||month==11){
            printf("co 30 ngay");
        }else if(month == 2){
            printf("co 29 ngay");
        }else{
            printf("khong hop le");
        }
    }else if (year%400!=0){
            if(month==1||month==3||month ==5||month==7||month==8||month==10||month==12){
                printf("co 31 ngay");
            }else if (month==4||month==6||month==9||month==11){
                printf("co 30 ngay");
            }else if(month == 2){
                printf("co 30 ngay");
            }else{
                printf("khong hop le");
            }
        }
    return 0;
}
