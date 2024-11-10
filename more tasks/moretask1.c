
#include <stdio.h>
void primeFactorization(int n) {
 for (int i = 2; i * i <= n; i++) {
 while (n % i == 0) {
 printf("%d ", i);
 n /= i; }
 } if (n > 1) printf("%d", n);
}
int main(){
 int n;
 printf("enter a number: ");
  scanf("%d" , &n);
   primeFactorization(n);
}