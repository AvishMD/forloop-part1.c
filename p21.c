#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
        int sum=0;
        int base=1;
        for(;n!=0; ){
            int rem=n%10;
            sum=sum+rem*base;
            base=base*2;
            n/=10;
        }
        printf("%d",sum);
    return 0;
}
