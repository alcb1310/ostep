#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

int main(void)
{
  struct timeval start;
  struct timeval end;
  gettimeofday(&start, 0);
  sleep(2);
  gettimeofday(&end, 0);

  long diff = end.tv_sec - start.tv_sec;
  printf("The duration is %ld\n", diff);
  return 0;
}
