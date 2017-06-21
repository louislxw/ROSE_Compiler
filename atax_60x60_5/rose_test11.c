#define NX 60
#define NY 60
int i;
int j;
int tmp[60];
int y[60];
int x[60];
int A[60][60];

int main()
{
  for (i = 0; i < 60; i += 1) {
    y[i] = 0;
  }
  for (i = 0; i < 60; i += 1) {
    tmp[i] = 0;
  }
  int ii;
  for (ii = 0; ii <= 59; ii += 60) {
    for (i = ii; i <= ((59 < ii + 12 - 1?59 : ii + 12 - 1)); i += 5) {
      for (j = 0; j <= 59; j += 3) {
        tmp[i] = tmp[i] + A[i][j] * x[j];
{
          tmp[i] = tmp[i] + A[i][j + 1] * x[j + 1];
        }
{
          tmp[i] = tmp[i] + A[i][j + 2] * x[j + 2];
        }
{
          tmp[i + 1] = tmp[i + 1] + A[i + 1][j] * x[j];
{
            tmp[i + 1] = tmp[i + 1] + A[i + 1][j + 1] * x[j + 1];
          }
{
            tmp[i + 1] = tmp[i + 1] + A[i + 1][j + 2] * x[j + 2];
          }
        }
{
          tmp[i + 2] = tmp[i + 2] + A[i + 2][j] * x[j];
{
            tmp[i + 2] = tmp[i + 2] + A[i + 2][j + 1] * x[j + 1];
          }
{
            tmp[i + 2] = tmp[i + 2] + A[i + 2][j + 2] * x[j + 2];
          }
        }
{
          tmp[i + 3] = tmp[i + 3] + A[i + 3][j] * x[j];
{
            tmp[i + 3] = tmp[i + 3] + A[i + 3][j + 1] * x[j + 1];
          }
{
            tmp[i + 3] = tmp[i + 3] + A[i + 3][j + 2] * x[j + 2];
          }
        }
{
          tmp[i + 4] = tmp[i + 4] + A[i + 4][j] * x[j];
{
            tmp[i + 4] = tmp[i + 4] + A[i + 4][j + 1] * x[j + 1];
          }
{
            tmp[i + 4] = tmp[i + 4] + A[i + 4][j + 2] * x[j + 2];
          }
        }
      }
    }
  }
  int jj;
  for (jj = 0; jj <= 59; jj += 60) {
    for (j = jj; j <= ((59 < jj + 12 - 1?59 : jj + 12 - 1)); j += 5) {
      for (i = 0; i <= 59; i += 3) {
        y[j] = y[j] + A[i][j] * tmp[i];
{
          y[j] = y[j] + A[i + 1][j] * tmp[i + 1];
        }
{
          y[j] = y[j] + A[i + 2][j] * tmp[i + 2];
        }
{
          y[j + 1] = y[j + 1] + A[i][j + 1] * tmp[i];
{
            y[j + 1] = y[j + 1] + A[i + 1][j + 1] * tmp[i + 1];
          }
{
            y[j + 1] = y[j + 1] + A[i + 2][j + 1] * tmp[i + 2];
          }
        }
{
          y[j + 2] = y[j + 2] + A[i][j + 2] * tmp[i];
{
            y[j + 2] = y[j + 2] + A[i + 1][j + 2] * tmp[i + 1];
          }
{
            y[j + 2] = y[j + 2] + A[i + 2][j + 2] * tmp[i + 2];
          }
        }
{
          y[j + 3] = y[j + 3] + A[i][j + 3] * tmp[i];
{
            y[j + 3] = y[j + 3] + A[i + 1][j + 3] * tmp[i + 1];
          }
{
            y[j + 3] = y[j + 3] + A[i + 2][j + 3] * tmp[i + 2];
          }
        }
{
          y[j + 4] = y[j + 4] + A[i][j + 4] * tmp[i];
{
            y[j + 4] = y[j + 4] + A[i + 1][j + 4] * tmp[i + 1];
          }
{
            y[j + 4] = y[j + 4] + A[i + 2][j + 4] * tmp[i + 2];
          }
        }
      }
    }
  }
}
