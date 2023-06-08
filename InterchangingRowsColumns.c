#include <stdio.h>

void main() {
  static int m1[10][10], m2[10][10];
  int i, j, m, n, a, b, c, p, q, r;
  printf("Enter the order of the matrix\n");
  scanf("%d %d", &m, &n);
  printf("Enter the coefficients of the matrix\n");
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j) {
      scanf("%d", &m1[i][j]);
      m2[i][j] = m1[i][j]; //copying values in matrix 2
    }
  }
  printf("Enter the numbers of two rows to be exchanged \n");
  scanf("%d %d", &a,&b);
  for (i = 0; i < m; ++i) {
    c = m1[a - 1][i]; //1 is subtracted from row num because indexing starts from 0
    m1[a - 1][i] = m1[b - 1][i];//swapping values of the rows
    m1[b - 1][i] = c;//c is temp variable
  }
  printf("Enter the numbers of two columns to be exchanged\n");
  scanf("%d %d", &p, &q);
  printf("The given matrix is \n"); //printing original matrix
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j)
      printf(" %d", m2[i][j]);
    printf("\n");
  }
  //Interchanging the columns
  for (i = 0; i < n; ++i) {
    r = m2[i][p - 1]; /* first column index is 0 */
    m2[i][p - 1] = m2[i][q - 1];
    m2[i][q - 1] = r;
  }
  printf("The matrix after interchanging the two rows(in the original matrix)\n");
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j) {
      printf(" %d", m1[i][j]);
    }
    printf("\n");
  }
  printf("The matrix after interchanging the two columns(in the original matrix)\n");
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j)
      printf(" %d", m2[i][j]);
    printf("\n");
  }
}