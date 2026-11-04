#include <stdio.h>

int main() {
  float dtb, drl;
  printf("Nhap dtb, drl", dtb, drl);
  scanf("%d", &dtb);
  scanf("%d", &drl);
  if(dtb>=9.0 && drl>=90){
    printf("HOC_BONG_XUAT_SAC");
  }else if(8.0<=dtb<=9.0 && 80<=drl<=90 || dtb>=9.0 && 80<=drl<=90);{
    printf("HOC_BONG_GIOI");
  }else if(7.0<=dtb<=8.0 && 70<=drl<=80 || 8.0<=dtb<=9.0 && 70<=drl<80 || dtb<=9.0 && 70<=drl<=80);{
    printf("HOC_BONG_KHA");
  }
  return 0;
}