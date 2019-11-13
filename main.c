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
  char *filepath = "./main.c";
  // stuff
  status = stat(filepath,&statbuf);
  if(status < 0) {
    printf("Error %d while statting file: %s",errno,strerror(errno));
    return 1;
  }
  printf("metadata for [%s]\n",filepath);
  printf("filesize: %ld\n",statbuf.st_size);
  printf("mode of file: %o\n",statbuf.st_mode);
  printf("last accessed: %lu\n",statbuf.st_atim.tv_sec);
}
