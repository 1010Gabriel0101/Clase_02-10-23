#include <stdio.h>
void main(){
  int n = 0;
  int suma = 0;
printf("Suma desde cero hasta n numero\n");
printf("Introduce un número: ");
scanf("%d",&n);
for(int i = 0; i<=n ; i++)

  suma = suma + i;
  printf("Suma desde cero hasta %d = %d\n",n,suma);
  }
