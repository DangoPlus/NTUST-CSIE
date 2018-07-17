/* fib.sc
 *
 * This test program computes the Nth Fibonacci number
 * using recursion and iteration.
 */

    // global variables
const int n = 8;

    // recursive function
int recFibonacc(int n)
{
  if ((n == 1) || (n == 2))
    return 1;

  return recFibonacc(n-1)+recFibonacc(n-2);
}

// iterative function
int itFibonacci(int n)
{
  int Fn, FNminus1, temp;

  Fn = 1;
  FNminus1 = 1;
  while (n > 2)
  {
    temp = Fn;
    Fn = Fn + FNminus1;
    FNminus1 = temp;
    n = n - 1;
  }
  return Fn;
}

/* main program */
void main()
{
  int resultof;
  print "N: ";
  println n;
  print "Result of recursive computation:";
  resultof = recFibonacc(n);
  println resultof;
  print "Result of iterative computation:";
  resultof = itFibonacci(n);
  println resultof;
}
