#include "mymain.h"
void print_char(char c,int chars_count)
{
  write(1, &c, 1);
  chars_count++;
}
