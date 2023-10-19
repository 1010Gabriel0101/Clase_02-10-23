#include <stdio.h>
int main(){
  int dígito = 0, vueltas = 0;
  for(;dígito<= 9;)
  {
    printf("%d",dígito++);
    vueltas++;
  }
  printf(" número de ciclos %d ",vueltas);
  vueltas++;
  return 0;
}
