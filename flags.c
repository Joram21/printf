#include <stdio.h>
/**
 * handle_flags - flags
 * @flag: flag
 * @num: num
 * Return: void
 */
void handle_flags(char flag, int num)
{
  switch (flag)
  {
    case '+':
      printf("The number is: +%d\n", num);
      break;
    case ' ':
      printf("The number is: % d\n", num);
      break;
    case '#':
      printf("The number is: %#x\n", num);
      break;
    case '-':
      printf("The number is: -%d\n", num);
      break;
    case '0':
      printf("The number is: %02d\n", num);
      break;
    default:
      printf("Invalid flag character!\n");
  }
}
