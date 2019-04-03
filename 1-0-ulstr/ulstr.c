#include <unistd.h>

int main(int argc, char **argv)
{
  int i;
  char *av;

  i = 0;
  av = argv[1];
  if (argc ==  2)
  {
    while (av[i])
    {
      if (av[i] >= 'A' && av[i] <= 'Z')
      {
        av[i] += 32;
      }
      else if (av[i] >= 'a' && av[i] <= 'z')
      {
        av[i] -= 32;
      }
      write(1, &av[i], 1);
      i++;
    }
  }
  write(1, "\0", 1);
  return (0);
}
