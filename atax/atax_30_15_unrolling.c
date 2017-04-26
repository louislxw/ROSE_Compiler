#define NX 30
#define NY 15
int i;
int j;
int tmp[30];
int y[15];
int x[15];
int A[30][15];

int main()
{
  for (i = 0; i < 15; i += 1) {
    y[i] = 0;
  }
  for (i = 0; i < 30; i += 1) {
    tmp[i] = 0;
  }
  int ii;
  for (ii = 0; ii <= 29; ii += 15) {
    for (i = ii; i <= ((29 < ii + 5*3 - 1?29 : ii + 5*3 - 1)); i += 3) {
      for (j = 0; j <= 14; j += 3) {
          tmp[i] = tmp[i] + A[i][j] * x[j] + A[i][j + 1] * x[j + 1] + A[i][j + 2] * x[j + 2];
          tmp[i + 1] = tmp[i + 1] + A[i + 1][j] * x[j] + A[i + 1][j + 1] * x[j + 1] + A[i + 1][j + 2] * x[j + 2];
          tmp[i + 2] = tmp[i + 2] + A[i + 2][j] * x[j] + A[i + 2][j + 1] * x[j + 1] + A[i + 2][j + 2] * x[j + 2];
        }
      }
    }
  for (i = 0; i <= 29; i += 3) {
    for (j = 0; j <= 14; j += 3) {
        y[j] = y[j] + A[i][j] * tmp[i] + A[i + 1][j] * tmp[i + 1] + A[i + 2][j] * tmp[i + 2];
        y[j + 1] = y[j + 1] + A[i][j + 1] * tmp[i] + A[i + 1][j + 1] * tmp[i + 1] + A[i + 2][j + 1] * tmp[i + 2];
        y[j + 2] = y[j + 2] + A[i][j + 2] * tmp[i] + A[i + 1][j + 2] * tmp[i + 1] + A[i + 2][j + 2] * tmp[i + 2];
      }
    }
}