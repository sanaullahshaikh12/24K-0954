#include<stdio.h>
#include<conio.h>

int main() {
    int coast, discount, final;
    
    printf("ENTER THE UNIT ");
    scanf("%d", &coast);
    
    if (coast <= 1500) {
        discount = (coast * 7) / 100;
        final = coast - discount;
        printf("ORIGINAL PRICE IS %d \n", coast);
        printf("DISCOUNT AMOUNT IS %d \n", discount);
        printf("FINAL BILL IS %d \n", final);
    }
    else if (coast > 1500 && coast <= 3000) {
        discount = (coast * 12) / 100;
        final = coast - discount;
        printf("ORIGINAL PRICE IS %d \n", coast);
        printf("DISCOUNT AMOUNT IS %d \n", discount);
        printf("FINAL BILL IS %d \n", final);
    }
    else if (coast > 3000 && coast <= 5000) {
        discount = (coast * 22) / 100;
        final = coast - discount;
        printf("ORIGINAL PRICE IS %d \n", coast);
        printf("DISCOUNT AMOUNT IS %d \n", discount);
        printf("FINAL BILL IS %d \n", final);
    }
    
    return 0;
}
