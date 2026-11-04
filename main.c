#include <stdio.h>

int main() {
  float dtb, drl;
  printf("Nhap dtb, drl", dtb, drl);
  scanf("%d", &dtb);
  scanf("%d", &drl);
  if(dtb>=9.0 && drl>=90){
    printf("HOC_BONG_XUAT_SAC");
  }
  return 0;
}