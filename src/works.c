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
    ub = 0;
    for(i = 0;i < n; i++){
        ub += A[i];
    }

    while (ub - lb > 1) {
        int m = (ub + lb)/2;
        int z = 0;
        for(i = 0; i < n; i++){
            if(A[i] > m){
                z ++;
            }
        }
        if(z==0){
        int x = 0;
        i = 1;
        while (i < n) {
            int y = 0;
            i -= 1;
        while ( y <= m && i < n) {
            y += A[i];
            i ++;
        }
            x ++;
        }
        if(x<k)
        {
            ub = m;
        }
        else {
            lb = m;
        }
        }
        else{lb = m;}
    }
    printf("%d\n",ub);
  return 0;
}
