#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    //vetores
    int disp[3], req[3];
    //índice
    int i;
    //total
    int total=0;

    for(i=0; i<3; i++){
        scanf("%d", &disp[i]);
    }
    for(i=0; i<3; i++){
        scanf("%d", &req[i]);
    }

    while(i!=0){
      if(disp[i-1] < req[i-1])
          total += req[i-1] - disp[i-1];
      i--;
    }

    printf("%d\n", total);
    return 0;
}
