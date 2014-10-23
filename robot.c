/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Derek Kellams & David Huynh
 * @since October 2014
 *
 */

#include "robot.h"

/**
 * robPrintMessage
 *
 * This function prints the message, "David and Derek really* loves robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;

  printf("Derek ");

  printf("David Huynh ");


  for(i; i < num; i++)
    {
      printf("really ");
    }

  printf("loves robots!\n");

  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{

  char * spaces[3] = {"", "      ", "                   "};

  int i = 0;
  for(i; i < 3; i++) {
      printf("%s    i_i    \n", spaces[i]);
      printf("%s   [b_b]   \n", spaces[i]);
      printf("%s  /|___|\  \n", spaces[i]);
      printf("%s   d   b   \n", spaces[i]); 
 
}
}
