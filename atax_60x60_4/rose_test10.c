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
  for (ii = 0; ii <= 59; ii += 8) {
    for (i = ii; i <= ((59 < ii + 2 - 1?59 : ii + 2 - 1)); i += 4) {
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
      }
    }
  }
  int _lt_var_j;
  for (_lt_var_j = 0; _lt_var_j <= 59; _lt_var_j += 8) {
    for (i = 0; i <= 59; i += 3) {
      for (j = _lt_var_j; j <= (((59 < (_lt_var_j + 2 - 1))?59 : (_lt_var_j + 2 - 1))); j += 4) {
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
      }
    }
  }
}
