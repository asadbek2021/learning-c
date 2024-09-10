#include <stdio.h>

#define LOWEST 0 /*Base temperature to start with*/
#define HIGHEST 300 /*Max temperature*/
#define STEP 20 /*Increment temperature amount*/

int main(){
   int fahr;

   for ( fahr = LOWEST; fahr <= HIGHEST; fahr = fahr + STEP) {
      printf("%3d %5.1f\n",fahr, (5.0 / 9.0)*(fahr - 32));
   }

   return 0;
}
