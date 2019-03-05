/*
 * Author: Alex Hiller
 * Year: 2019
 * Program Description: 
 *   Simple program to perform `ls` shell command. 
 *   Taken from APUE.
 *
 */

#include "apue.h"
#include <dirent.h>

int 
main (int argc, char *argv[]) { 
  
  DIR *dp;
  struct dirent *dirp;

  /* They didn't pass a directory to ls */
  if (argc != 2)
    err_quit("Usage: ls directory name");

  /* If can't open the dir then send back error message */
  if ((dp = opendir(argv[1])) == NULL)
    err_sys("Can't open %s\n", argv[1]);

  /* Above, the directory has been opened. Now open we can cycle through entries */

  /* Keep reassigning directory entry to next entry. */
  /* readdir must iterate a list. */
  while ((dirp = readdir(dp)) != NULL)
      printf("%s\n", dirp->d_name);

  closedir(dp);

  exit(0);
}
