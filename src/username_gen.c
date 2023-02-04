#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void pickRandom();

void username_gen(void)
{
    puts("--- Username Generator ---");

    pickRandom();
}

void pickRandom() {
    char* verbs[3];
    verbs[0] = "cleaner";
    verbs[1] = "killer";
    verbs[2] = "eater";

    char* random;
    srand(time(NULL));
    random = verbs[rand() % 3];
    printf("%s", random);
    return;
}