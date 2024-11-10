#include <stdio.h>

void toBinary(int n) {
    if (n > 1)
        toBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Binary representation: ");
    toBinary(num);
    printf("\n");
    return 0;
}
