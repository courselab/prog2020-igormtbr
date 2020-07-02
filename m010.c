/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)

{
  
  int y;
  int i;
  if (month == 1)
  
  {
    i = day % 7;
    y = i + 2;}
  
  else
  if (month == 2)
  {
    i = 31 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 3)
  {
    i= 60 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 4)
  {
    i = 91 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 5)
  {
    i = 121 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 6)
  {
    i = 152 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 7)
  {
    i = 182 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 8)
  {
    i = 213 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 9)
  {
    i = 244 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 10)
  {
    i = 274 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 11)
  {
    i = 305 + day;
    y = 2 + i % 7;}
  
  else 
  if (month == 12)
  {
    i = 335 + day;
    y = 2 + i % 7;}
  if (y==7)
  {
    y=0;}
  
  if (y==8)
  {
    y =1;}
  return y;
}
/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
