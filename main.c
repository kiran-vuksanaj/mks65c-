#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<time.h>
#include<string.h>
#include<errno.h>

int main() {
  printf("Kiran Vuksanaj - Work 05 || \"I need information, STAT!\"\n");
  struct stat statbuf;
  int status;
  char *filepath = "makefile";
  
  status = stat(filepath,&statbuf);
  if(status < 0) {
    printf("Error %d while statting file: %s",errno,strerror(errno));
    return 1;
  }
  printf("Successful stat of file!\n");
  printf("Mode of file: %o\n",statbuf.st_mode);
}
