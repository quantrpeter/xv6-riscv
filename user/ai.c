#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("ai is running\n");
  int *x;
  x=0;
  *x=12;
  exit(0);
}
