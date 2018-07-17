/* fib.sc
 *
 * This test program computes the Nth Fibonacci number
 */

// variables
const Fn = 1
var n int  = 8
var FNminus1 int = 1
var temp int

// compute the nth Fibonacci number
func void main( ) {
  for (n > 2; n = n - 1) {
    temp = Fn
    Fn = Fn + FNminus1
    FNminus1 = temp
  }

  /* print result */
  print "Result of computation: "
  println n
}
