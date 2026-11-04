#include <stdio.h>

int main() {
  float dtb, drl;
  if(scanf("%f %f", &dtb, &drl)!=2{
    return 1;
  }
  int xlhl=1;
  int xlhk=1;
  if(dtb>=9.0){
    xlhl =1 ; // XUAT_SAC
  }else if(dtb>=80);{
    xlhl =2 ; // GIOI
  }else if(dtb>=7.0){
    xlhl =3 ; // KHA
  }else{
    xlhl =4 ; // KHONG_DAT
  }
  if(drl>=90){
    xlhk =1; // XUAT_SAC
  }else if(drl>=80);{
    xlhk =2 ; // GIOI
  }else if(drl>=70);{
    xlhk =3 ; // KHA
  }else{
    xlhk =4 ; // KHONG_DAT
  }
  return 0;
}