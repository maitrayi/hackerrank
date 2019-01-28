/*QUESTION :There is a series,S , where the next term is the sum of pervious three terms. Given the first three terms 
of the series,a b and c
respectively, you have to output the nth term of the series using recursion.

Recursive method for calculating nth term is given below.  */

#include <stdio.h>
int find_nth_term(int n, int a, int b, int c) {
  int ans, t = a + b + c;
  if (n == 1) {
    ans = a;
  } else if (n == 2) {
    ans = b;
  } else if (n == 3) {
    ans = c;
  } else if (n >= 4) {
    while (n > 4) {
      t = find_nth_term(--n, b, c, a + b + c);
      ans = t;
    }
  }
  return ans;
}
int main() {
  int a, b, c, n;
  scanf("%d", &n);
  scanf("%d %d %d", &a, &b, &c);
  int ans = find_nth_term(n, a, b, c); 
  printf("%d", ans);
}
