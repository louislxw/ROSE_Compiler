#define NX 60
#define NY 60
int i;
int j;
int tmp[NX];
int y[NY];
int x[NY];
int A[NX][NY];

int main()
{
  for (i = 0; i < NY; i += 1) {
    y[i] = 0;
  }
  for (i = 0; i < NX; i += 1) {
    tmp[i] = 0;
  }
  for (i = 0; i < NX; i += 1) {
    for (j = 0; j < NY; j += 1) {
      tmp[i] = tmp[i] + A[i][j] * x[j];
    }
  }
  for (i = 0; i < NX; i += 1) {
    for (j = 0; j < NY; j += 1) {
      y[j] = y[j] + A[i][j] * tmp[i];
    }
  }
}

