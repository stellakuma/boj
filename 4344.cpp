#include <iostream>

int main(){

  int bsk;
  scanf("%d", &bsk);
  int rp[1001];
  int scores[bsk][1001];
  int avg[bsk];
  int tmpsm;
  int overex[bsk];

  for ( int i = 0; i < bsk; i++ ){ overex[i] = 0; avg[i] = 0; for ( int j = 0; j < 1001; j++ ){ scores[i][j] = 0; } }
  for ( int i = 0; i < 1001; i++ ){ rp[i] = 0; }


  for ( int i = 0; i < bsk; i++ ){

    scanf("%d", &rp[i]);

      for ( int j = 0; j < rp[i]; j++ ){

        scanf("%d", &scores[i][j]);
        tmpsm = tmpsm + scores[i][j];
        if ( j == (rp[i] - 1) ){

          avg[i] = tmpsm/rp[i];
          tmpsm = 0;

        }

      }

  }
  

  for ( int i = 0; i < bsk; i++ ){

    for ( int j = 0; j < rp[i]; j++ ){

      if ( avg[i] < scores[i][j] ){

        overex[i]++; 

      }

      if ( j == rp[i]-1 ){

        double g = 100.0/rp[i];
        double h = g*overex[i];
        printf("%.3lf%%\n", h);

      }

    }

  }

  

}