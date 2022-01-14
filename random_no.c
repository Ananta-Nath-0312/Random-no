#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(){
    int num, guess, nguess=1;
    srand(time(0));
    num=rand() % 100 + 1;
    //printf("Random no- %d \n", num);
    do{
        printf("Guess the no between 1 and 100:\n");
        scanf("%d", &guess);
        if(guess>num)
            printf("Guess lower \n");
        else if(guess<num)
            printf("Guess higher \n");
        else
            printf("Guessed in %d attempts \n", nguess);
        nguess++;
    }while(guess!=num);
    return 0;
}