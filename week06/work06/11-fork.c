/* (c) 2005-2015 Rahmat M. Samik-Ibrahim, This is Free Software *
 * $Revsion$
 * $Date: 2011-02-27 08:31:46 +0700 (Sun, 27 Feb 2011) $
 * svn propset svn:keywords "Date Revision HeadURL Id Author"
 * JANGAN MENGHAPUS/MENGGANTI NOTA DI ATAS INI                  *
 * HARAP MENGGANTI/SESUAIKAN YANG BERIKUT INI!                  *
 ZCZC B000 Rahmat M. Samik-Ibrahim                              *
 * ************************************************************ */
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#define NN 3

/*void procStatus (int level) {
    for (int level=0; level<=NN; level++) {
	fork();
	wait(NULL);
	printf("Loop [%d] - rPID[%d] - rPPID[%4.4d]\n", ii, rPID, rPPID);
	fflush(NULL);
	}
}
*/

void procStatus(int level) {
    printf("L%d: PID[%d] (PPID[%d])\n", level, getpid(), getppid());
    fflush(NULL);
}

void levelFork(int *level) {
   if (fork() == 0)
      ( *level)++;
   wait(NULL);
}

void main() {
   int level= 0;
   procStatus(level);
   levelFork(&level);
   procStatus(level);
}
