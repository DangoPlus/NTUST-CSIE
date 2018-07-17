/*
 * Example with Functions
 */

// variables
var a int = 5
var c int

// function declaration
func int add(a int, b int) {
  return a+b
}

// main function
func void main( ) {
  c = add(a, 10)
  if (c > 10) {
    print -c
  }
  else {
    print c
  }
  println "Hello World"
}
