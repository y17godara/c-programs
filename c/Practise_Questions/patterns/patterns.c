#include <stdio.h>

void printHallowRectangle(int row, int col, char ch){
  for(int i=0; i<=row-1; i++) {
    for(int j=0; j<=col-1; j++) {
      if(i==0 || i==row-1 || j==0 || j==col-1) {
        printf("%c", ch);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}

int main() {
  printHallowRectangle(10, 14, '#');
  return 0;
} 