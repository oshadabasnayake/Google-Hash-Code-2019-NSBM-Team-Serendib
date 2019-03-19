#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if( argc == 2 ){
        printf("The argument supplied is %s\n",argv[1]);
    }

    else if(argc > 2){
        printf("Too many arguents supplied. \n");
    }
    else
            return 0;
}
