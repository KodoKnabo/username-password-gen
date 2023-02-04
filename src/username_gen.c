#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

void pickRandomVerb();

void username_gen(void)
{
    puts("--- Username Generator ---");

    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
    sleep(1);
    pickRandomVerb();
}

void pickRandomVerb() {
    char* verbs[4];
    verbs[0] = "cleaner\n";
    verbs[1] = "killer\n";
    verbs[2] = "eater\n";
    verbs[3] = "stealer\n";
    verbs[4] = "builder\n";

    char* random;
    srand(time(NULL));
    random = verbs[rand() % 5];
    printf("%s", random);
    return;
}