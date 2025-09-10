#include <stdio.h>

void fun(int *r, int *c, int *(m1[*r][*c]), int *(m2[*r][*c]), int (*result[*r][*c])){
  for(int i=0; i<*r; i++){
    for(int j=0; j<*c; j++){
      (*result[i][j])=(*m1[i][j])+ (*m2[i][j]);
    }
  }
}

void main(){
  int row, col;  scanf("%d%d", &row,&col);
  int m1[row][col], m2[row][col];  int result[row][col];
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        scanf("%d", &m1[i][j]);
    }
  }
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        scanf("%d", &m2[i][j]);
    }
  }
  fun(&row, &col, &m1[0][0], &m2[0][0], &result[0][0]);
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        printf("%d", result[i][j]);
    }
    printf("\n");
  }

}


