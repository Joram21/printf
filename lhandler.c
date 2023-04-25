#include <stdio.h>
/**
 * handle_length_modifiers - fun to convert length
 * @modifier: meas
 * @num: number
 * Return: void
 */
void handle_length_modifiers(char modifier, int num)
{
  switch (modifier)
  {
    case 'l':
      printf("The number is: %ld\n", (long) num);
      break;
    case 'h':
      printf("The number is: %hd\n", (short) num);
      break;
    default:
      printf("Invalid length modifier!\n");
  }
}

