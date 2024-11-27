#include <stdio.h>

int compute_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int A, B;

  
    printf("Enter the first integer (A): ");
    scanf("%d", &A);
    printf("Enter the second integer (B): ");
    scanf("%d", &B);

    int gcd = compute_gcd(A, B);

    
    printf("The GCD of %d and %d is: %d\n", A, B, gcd);

    return 0;
}