#include<stdio.h>

int main(){
  printf("hello Ajay\n" );
}


int wCount(int number){
  printf("Here in wcount fuction\n" );
  int count = 0;
  for(int i = 0; i< number; i++){
    count = count + 1;
  }
  return count;
}
