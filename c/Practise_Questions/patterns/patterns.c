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

void invertedRoatatedHaldPyramid(int row) {
    for(int i=1; i<=row; i++) {
      for(int j=1; j<=row-i; j++) {
        printf(" ");
      }
      for(int k=1; k<=i; k++) {
        printf("%c", "*");
      }
      printf("\n");
    }
}

void invertedHalfPyramid(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i+1; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
}

void floydsTriangle(int n) {
  int count = 1;
  for(int i=1; i<=n; i++){
      for(int j=1; j<=1; j++) {
        printf("%d", count);
        count++;
      }
      printf("\n");
  }
}

int main() {
  // printHallowRectangle(10, 14, '#');
  // invertedRoatatedHaldPyramid(4);
  // invertedHalfPyramid(5);
  floydsTriangle(5);
  // zeroOneTriangle();
  // butterflyPattern();
  // solidRhombus();
  // hallowRhombus();
  // diamondPattern();
  // numberPyramid();
  // palindromicPattern();
  return 0;
} 