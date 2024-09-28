#include <stdio.h>

int countOnesInBinary(int n) {
    int count = 0;
    while (n != 0) {
        if ((n & 1) == 1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = countOnesInBinary(number);
    printf("The number of 1s in the binary representation of %d is: %d\n", number, result);
    return 0;
}

