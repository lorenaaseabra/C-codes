#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
        srand(time(NULL));
        int brancas = rand()%13;
        int pretas = rand()%13;

        if( brancas > pretas){
                printf("brancas estao ganhando");
        }else if (pretas > brancas){
                printf("pretas estao ganhando");
        }else{
                printf("empate");
        }
        return 0;
}