#include <stdio.h>

int main()
{
  int Number, Reminder, Count=0;

  printf("Enter any number:\n");
  scanf("%d", &Number);
  while(Number > 0)
  {
     Number = Number / 10;
     Count = Count + 1;  
  }

  printf(" Digit counting\n = %d", Count);
  return 0;
}
