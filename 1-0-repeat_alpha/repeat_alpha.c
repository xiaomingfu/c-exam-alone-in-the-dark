#include <unistd.h>

int main(int argc, char **argv)
{
  int i;
  int t;

  if (argc == 2)
  {
    i = 0;
    t = 0;
    while (argv[1][i])
    {
      if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
      {
        t = argv[1][i] - 'a' + 1;
      }
      else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
      {
        t = argv[1][i] - 'A' + 1;
      }
      while (t > 0)
      {
        write(1, &argv[1][i], 1);
       t--;
      }
      t = 1;
      i++;
    }
  }
  write (1, "\n", 1);
  return (0);
}
