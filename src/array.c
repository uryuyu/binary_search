#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = n;
    while (ub - lb > 1) {
        if(A[(lb + ub)/2] > k){
            ub = (lb + ub)/2;
        }
        else{
            lb = (lb + ub)/2;
        }
    }
    printf("%d\n",ub);

  return 0;
}
