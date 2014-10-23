/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
<<<<<<< HEAD
 * @author Derek Kellams & David Huynh
=======
 * @author Derek Kellams & Mr. Huynh
>>>>>>> 049550e0cedb39d932c417cd4111754c3b64c324
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
  printf("    i_i    \n"
	 "   [G_G]   \n"
	 "  /|___|\\  \n"
         "   d   b   "); 

}
