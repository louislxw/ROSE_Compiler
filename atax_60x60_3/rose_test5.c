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
  int _lt_var_i;
  for (_lt_var_i = 0; _lt_var_i <= 59; _lt_var_i += 60) {
    for (i = _lt_var_i; i <= (((59 < (_lt_var_i + 20 - 1))?59 : (_lt_var_i + 20 - 1))); i += 3) {
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
      }
    }
  }
  for (i = 0; i < 60; i += 1) {
    for (j = 0; j < 60; j += 1) {
      y[j] = y[j] + A[i][j] * tmp[i];
    }
  }
}
