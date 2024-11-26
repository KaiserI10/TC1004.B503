#include <stdio.h>

int main(int argc, char **argr){
    for(int i=1;i<argc; i++){
        printf("Hola %s\n",argr[i]);
    }
    return 0;
}