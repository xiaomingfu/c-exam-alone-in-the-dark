#include <unistd.h>

int main(int argc, char **argv)
{
  int len;

  if (argc >= 2)
  {
    len = 0;
    while (argv[1][len] != '\0')
    {
      len++;
    }
    write(1, argv[1], len);
  }
  write(1, "\n", 1);
  return (0);
}
