#include<stdio.h>
 
int main() {
   int i, j, k;
   int blank = 0;
   int lines = 6;
   char symbol = 'A';
   int temp;
   int diff[7] = { 0, 1, 3, 5, 7, 9, 11 };
   k = 0;
 
   for (i = lines; i >= 0; i--) {
      printf("\n");
      symbol = 'A';
 
      for (j = i; j >= 0; j--) {
         printf("%c\t", symbol++);
      }
 
      blank = diff[k++];
 
      for (j = 0; j < blank; j++) {
         printf("\t");
      }
 
      symbol = 'F' - (blank / 2);
 
      if (blank == 0) {
         temp = i - 1;
      } else {
         temp = i;
      }
 
      for (j = 0; j <= temp; j++) { 
         printf("%c\t", symbol--);
      }
 
   }
   return (0);
}