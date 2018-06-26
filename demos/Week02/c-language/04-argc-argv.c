/*
 * Copyright (C) 2016-2018 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * REV01 Mon Sep 18 09:16:59 WIB 2017
 * START Tue Sep 13 12:11:09 WIB 2016
 */

#include <stdio.h>
void main(int argc, char *argv[]) {
   int ii;
   printf("The value of argc    is %d\n", argc);
   printf("=============================================\n");
   for (ii=argc-1; ii >= 0; ii--) {
      printf("The value of argv[%d] is %s\n", ii, argv[ii]);
   }
   printf("=============================================\n");
}

/* Notes by Benedictus Alvin WK10
 * In the beginning this program defined a main method with argc and argv as parameters
 * ARGC (argument counter) is represents the number of things that you entered into the 
 * command line when running this program on a terminal
 * ARGV (argument vector) is an array that holds the string values of the things that 
 * were entered on the command line when running this program
 * When you run this program, line 14 will print the value of argument on your command
 * (integer) line to console and line 17 will print the value of variable argv (char) 
 * on your console
 * Example : type it to run this program
 * INPUT : ./04-argc-argv test
 * OUTPUT (below) :
 * The value of argc    is 2
 * =============================================
 * The value of argv[1] is test
 * The value of argv[0] is ./04-argc-argv
 * =============================================
 */
