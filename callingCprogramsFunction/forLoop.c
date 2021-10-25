#include<stdio.h>

int main(){
  printf("Welcome to Amazing world of WASM\n" );
}


char * greetX(){
  return "Hello  There.";
}

int wCount(int number){
  printf("Here in wcount fuction\n" );
  int count = 0;
  for(int i = 0; i< number; i++){
    count = count + 1;
  }
  return count;
}
