#include <iostream>

int main(){
  int a=7;
  int fac=1;
  for(int i=1;i<=a;i++)
    {
    fac*=i;
    }
  std::cout<<"el facorial de 7 es: "<<fac<<std::endl;
  return 0;
}
