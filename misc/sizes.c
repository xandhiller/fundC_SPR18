/*
 * Author: Alex Hiller
 * Year: 2019
 * Program Description: Output the sizes of all data types
 *
 */

#include <stdio.h>
#include <stdlib.h>

int 
main (int argc, char *argv[]) {
  /* data-type      variable name */
  int               i;
  char              c;
  float             f;
  double            d;

  /* signed and unsigned variants */
  unsigned int      ui;
  unsigned char     uc;
/*unsigned float    uf;   INVALID */
/*unsigned double   ud;   INVALID */
  signed int        sgi;
  signed char       sgc;
/*signed float      sgf;  INVALID */
/*signed double     sgd;  INVALID */

  /* short and long variants */
  short int         si;
/*short char        sc;   INVALID */
/*short float       sf;   INVALID */
/*short double      sd;   INVALID */
  long int          li;
/*long char         lc;   INVALID */
/*long float        lf;   INVALID */
  long double       ld;
  long long int     lli;
/*long long char    llc;  INVALID */
/*long long float   llf;  INVALID */
/*long long double  lld;  INVALID */

  /* signed, unsigned mixed with short & long variants */
  unsigned short int         usi;
  unsigned long int          uli;
  unsigned long long int     ulli;
  signed   short int           sgsi;
  signed   long int            sgli;
  signed   long long int       sglli;

  /*      name,                            bytes,  */
  printf("int                              %lu\n", sizeof(i));
  printf("char                             %lu\n", sizeof(c));
  printf("float                            %lu\n", sizeof(f));
  printf("double                           %lu\n", sizeof(d));
  printf("unsigned int                     %lu\n", sizeof(ui));
  printf("unsigned char                    %lu\n", sizeof(uc));
  printf("signed int                       %lu\n", sizeof(sgi));
  printf("signed char                      %lu\n", sizeof(sgc));
  printf("short int                        %lu\n", sizeof(si));
  printf("long int                         %lu\n", sizeof(li));
  printf("long double                      %lu\n", sizeof(ld));
  printf("long long int                    %lu\n", sizeof(lli));
  printf("unsigned short int               %lu\n", sizeof(usi));
  printf("unsigned long int                %lu\n", sizeof(uli));
  printf("unsigned long long int           %lu\n", sizeof(ulli));
  printf("signed short int                 %lu\n", sizeof(sgsi));
  printf("signed long int                  %lu\n", sizeof(sgli));
  printf("signed long long int             %lu\n", sizeof(sglli));

  return 0;
}
