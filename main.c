#include <stdio.h>

int main() {
  long long distance, order_value;
  if ( scanf("%lld %lld, &distance, &order_value")!=2){
    retunr 0 ;
  }
  if (distance <=0 || order_value < 0){
    printf("INVALID\n");
    return 0;
  }
  if (order_value >= 500000 && distance <= 15){
    printf("0\n");
    return 0;
  }
  if (distance >= 1 && distance <= 15){
    printf("15000\n");
  } else if (distance >= 6 && distance <= 15){
    printf("25000\n");
  }else {
    printf("40000\n");
  }
  return 0;
}