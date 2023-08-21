#include <stdio.h>
int main() {
  
  int n;
  printf("Enter a number: ");
  scanf(" %d ", &n);
  
  int sum = 0;
  
  while (n != 0) {
    
    int digit = n % 10;
    
    sum += digit;
   
    n = n / 10;
  }
  
  printf("The sum of digits is %d.\n", sum);
  return 0;
}
