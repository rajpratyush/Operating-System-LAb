#include<stdio.h>
#include<unistd.h>

int main() {
   int pipefds[2];
   int returnstatus;
   char writemessages[2][20]={"krishnakant", "singh"};
   char readmessage[20];
   returnstatus = pipe(pipefds);
   
   if (returnstatus == -1) {
      printf("Unable to create pipe\n");
      return 1;
   }
   
   printf("Writing to pipe: %s\n", writemessages[0]);
   write(pipefds[1], writemessages[0], sizeof(writemessages[0]));
   read(pipefds[0], readmessage, sizeof(readmessage));
   printf("Reading from pipe: %s\n", readmessage);
   printf("Writing to pipe2: %s\n", writemessages[0]);
   write(pipefds[1], writemessages[1], sizeof(writemessages[0]));
   read(pipefds[0], readmessage, sizeof(readmessage));
   printf("Reading from pipe2: %s\n", readmessage);
   return 0;
}
