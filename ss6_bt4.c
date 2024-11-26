#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int a, b, c, dt;
    printf("hay nhap a : ");
    scanf("%d",&a);
    
    printf("hay nhap b : ");
    scanf("%d",&b);
    printf("hay nhap c : ");
    scanf("%d",&c);
    float x1,x2;
    if (a==0){
        if(b!=0){
            x1=-(float)c/(float)b;
            printf("nghiem cua pt %dx^2 + %dx + %d = 0 la %f\n",a ,b ,c ,x1 );
        }else{
            if(c==0){
                printf("phương trình vô số nghiệm");
            }else{
                printf("phương trình vô nghiệm");
            }
        }
    }else if(a!=0){
        dt = b*b-4*a*c;
        if(dt==0){
            x1=-b/2*a;
            printf("phương trình có 1 nghiệm kép là %f\n",x1);
        }else if(dt >0){
            x1=(-b+sqrt(dt))/2*a;
            x2=(-b-sqrt(dt))/2*a;
            printf("phương trình có 2 nghiệm x1 = %f và x2 = %f\n", x1 ,x2);
        }else if (dt<0){
            printf("phương trình vô nghiệm");
        }
    }
    return 0;
}
