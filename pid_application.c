#include  <stdio.h>
#include  <sys/types.h>

#define   MAX_COUNT  5

void  ChildProcess(void);                /* child process prototype  */
void  ParentProcess(void);               /* parent process prototype */

void  main(void)
{
     pid_t  pid;

     pid = fork();
     if (pid == 0)
          ChildProcess();
     else
          ParentProcess();
}

void  ChildProcess(void)
{
     int   i,j;

     for ( i = 1; i <= MAX_COUNT; i++)
    {
       
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void  ParentProcess(void)
{
     int   i,j;

     for (i = 1; i <= MAX_COUNT; i++)
         
   {
       
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }
}

