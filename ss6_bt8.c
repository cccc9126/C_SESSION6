#include <stdio.h>

int main(int argc, const char * argv[]) {
    float num,lai,thang;
    printf("hay nhap so tien : ");
    scanf("%f", &num);
    printf("hay nhap lai suat : ");
    scanf("%f", &lai);
    printf("hay nhap so thang : ");
    scanf("%f", &thang);
    float tienLai, tong = num;
    int i = 1;
    while(i<=thang){
        tienLai = (float)num/100*(float)lai;
        printf("%f\n",tienLai);
        num = num+tienLai;
        ++i;
        
    }printf("tong tien la %.3f", num);
}
