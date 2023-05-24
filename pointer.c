#include <stdio.h>

struct {             
  int myNum;          
} myStructure; 

int main() {
   int myAge = 15;
   printf("%d", myAge);
   printf("\n");
   printf("%p", &myAge);
}
