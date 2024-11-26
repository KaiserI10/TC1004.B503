#include <unistd.h>
#include <stdio.h>

int main(){
    int a = 20;
    int pid = fork();

    if (pid == 0){
        printf("Soy el Proceso Hijo a=%d\n",a);
        return 0;
    }

    printf("Soy el Proceso Padre a=%d\n",a);
    printf("Mi Hijo es pid=%d\n",pid);
    return 0;
}