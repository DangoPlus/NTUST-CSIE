/* Recursive factorial example */
class factorial {

  public static void main(String args[]) {
    java.lang.System.out.println(fac(5));
  }

  public static int fac (int value) {
    java.lang.System.out.println(5);
    if (value == 1) return 1;
    return value * fac(value-1);
  }
}
