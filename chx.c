#include <stdio.h>
#include <sys/stat.h>

int main(int argc,char *argv[])
{
  if (argc <2)
  {
        printf("Usage: chx <filename>\n");
        return 1;
  }
  
  //Set the execute permission for the file
  if(chmod(argv[1], S_IXUSR | S_IXGRP | S_IXOTH) == 0)
  {
         printf("Execute permission set.\n");
  }
  else
  {
         printf("Error setting execute permission.\n");
  }
  
  return 0;

}
