#include <stdio.h>
int main(){
 double sum = 0;
 for (int i=0; i<100; i++){
 sum += 0.1;
 }
 if (sum == 10.0){
 printf("Yes!\n");
 }else{
 printf("No!\n");
 }
 return 0;
}