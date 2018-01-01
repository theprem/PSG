#include <stdio.h>
#include <stdlib.h>

int get_prime(int n)
{
  int num = 2, ct = 0;
  while(1)
  {
    int div;
    for(div = 2; div<num; div++)
    {
      if(num%div == 0)
        break;
    }
    if(div==num)
      count++;
    if(n==count)
      break;
    number++;
  }
  return num;
}

int main(int argc, char *argv[])
{
  int nth_prime=atoi(argv[1]);
  int val;
  val = get_prime(nth_prime);
  printf("The %d prime = %d \n", nth_prime, val);
  return n;
}
