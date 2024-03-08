#include <stdio.h>

void decimalToBinary(int num) {
    // Array to store binary number
    int binaryNum[32];
  
    // Counter for binary array
    int i = 0;
    while (num > 0) {
        // Store remainder in binary array
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
  
    // Print binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    printf("Binary representation: ");
    decimalToBinary(decimalNum);
    return 0;
}
