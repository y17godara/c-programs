#include <stdio.h>

void printHallowRectangle(int row, int col, char ch)
{
  for (int i = 0; i <= row - 1; i++)
  {
    for (int j = 0; j <= col - 1; j++)
    {
      if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
      {
        printf("%c", ch);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

void invertedRoatatedHaldPyramid(int row)
{
  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= row - i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= i; k++)
    {
      printf("%c", "*");
    }
    printf("\n");
  }
}

void invertedHalfPyramid(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

void floydsTriangle(int n)
{
  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 1; j++)
    {
      printf("%d", count);
      count++;
    }
    printf("\n");
  }
}

void zeroOneTriangle(int n)
{
  for (int i = 0; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if ((i + j) % 2 == 0)
      {
        printf("%d", 0);
      }
      if ((i + j) % 2 != 0)
      {
        printf("%d", 1);
      }
    }
    printf("\n");
  }
}

void butterflyPattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

void solidRhombus(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (n - i); j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= n; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

void hallowRhombus(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (n - i); j++)
    {
      printf(" ");
    }

    if (i == 1 || i == n)
    {
      for (int j = 1; j <= n; j++)
      {
        printf("*");
      }
    }
    else
    {
      for (int j = 1; j <= n; j++)
        if (j == 1 || j == n)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
    }
    printf("\n");
  }
}

void diamondPattern(int n)
{
  for (int k = 1; k <= n; k++)
  {
    for (int c = 1; c <= n-k; c++)
      printf(" ");

    for (int c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  for (int k = 1; k <= n - 1; k++)
  {
    for (int c = 1; c <= k; c++)
      printf(" ");

    for (int c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");

    printf("\n");
  }
}

int main()
{
  // printHallowRectangle(10, 14, '#');
  // invertedRoatatedHaldPyramid(4);
  // invertedHalfPyramid(5);
  // floydsTriangle(5);
  // zeroOneTriangle(5);
  // butterflyPattern(10);
  // solidRhombus(5);
  // hallowRhombus(5);
  diamondPattern(6);
  // numberPyramid();
  // palindromicPattern();
  return 0;
}