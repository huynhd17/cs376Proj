/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  // Check the command line arguments.
  if(argc == 2) {

    robPrintAscii();
    robPrintMessage(atoi(argv[1]));
    

    return -1;

  }
  else{
  // Convert the command-line argument to a number.
    /* int num = atoi(argv[1]); */
    
    robPrintAscii();

    printf ("usage: %s <number> \n", argv[0]);


  return 0;

  }
}
