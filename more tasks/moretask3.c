#include <stdio.h>
#include <string.h>
void CaeserCipher(char string[99] , int shift){
  int len;
  char newstring[99];
  len = strlen(string);
  for(int i=0; i<len; i++)
  {
    newstring[i] = string[i] + shift;
    printf("%c" , newstring[i]);
  }
}
int main(){
  char string[99];
  int shift;
  printf("enter string: ");
  scanf("%s" , string);
  printf("enter shift: ");
  scanf("%d" , &shift);
  CaeserCipher(string , shift);
}
