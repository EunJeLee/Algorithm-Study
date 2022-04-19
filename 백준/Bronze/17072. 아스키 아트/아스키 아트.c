#include <stdio.h>

int main(){
  int N, M;
  scanf("%d %d", &N, &M);

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      int r, g, b;
      int check;
      scanf("%d %d %d", &r, &g, &b);
      check = 2126 * r + 7152 * g + 722 * b;
      if(check >= 0 && check <510000) printf("#");
      else if(check < 1020000) printf("o");
      else if(check < 1530000) printf("+");
      else if(check < 2040000) printf("-");
      else if(check >= 2040000) printf(".");
    }
    printf("\n");
  }

  return 0;
}
