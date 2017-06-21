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
  for (i = 0; i < 60; i += 1) {
    for (j = 0; j <= 59; j += 3) {
      tmp[i] = tmp[i] + A[i][j] * x[j];
{
        tmp[i] = tmp[i] + A[i][j + 1] * x[j + 1];
      }
{
        tmp[i] = tmp[i] + A[i][j + 2] * x[j + 2];
      }
    }
  }
  for (i = 0; i < 60; i += 1) {
    for (j = 0; j < 60; j += 1) {
      y[j] = y[j] + A[i][j] * tmp[i];
    }
  }
}
