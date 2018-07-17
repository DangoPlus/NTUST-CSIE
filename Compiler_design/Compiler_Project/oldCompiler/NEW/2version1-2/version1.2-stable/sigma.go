/* Sigma.go
 *
 * Compute sum = 1 + 2 + ... + n
 */

// variables
const n = 10
var sum int = 0
var index int
  
// main function
func void main ( ) {
  for (index = 0; index <= n ) {
    sum = sum + index
    index = index + 1
  } 
  print "The sum is "
  println sum
}
