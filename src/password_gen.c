#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char pickRandomLower();
char pickRandomUpper();

void password_gen(void)
{
    puts("--- Password Generator ---");

    pickRandomLower();
    pickRandomUpper();
}

char pickRandomLower()
{
    char lowers[25];
    lowers[0] = 'a';
    lowers[1] = 'b';
    lowers[2] = 'c';
    lowers[3] = 'd';
    lowers[4] = 'e';
    lowers[5] = 'f';
    lowers[6] = 'g';
    lowers[7] = 'h';
    lowers[8] = 'i';
    lowers[9] = 'j';
    lowers[10] = 'k';
    lowers[11] = 'l';
    lowers[12] = 'm';
    lowers[13] = 'n';
    lowers[14] = 'o';
    lowers[15] = 'p';
    lowers[16] = 'q';
    lowers[17] = 'r';
    lowers[18] = 's';
    lowers[19] = 't';
    lowers[20] = 'u';
    lowers[21] = 'v';
    lowers[22] = 'w';
    lowers[23] = 'x';
    lowers[24] = 'y';
    lowers[25] = 'z';

    char random;
    srand(time(NULL));
    random = lowers[rand() % 26];

    printf("%c", random);

    return random;
}

char pickRandomUpper()
{
    char uppers[25];
    uppers[0] = 'A';
    uppers[1] = 'B';
    uppers[2] = 'C';
    uppers[3] = 'D';
    uppers[4] = 'E';
    uppers[5] = 'F';
    uppers[6] = 'G';
    uppers[7] = 'H';
    uppers[8] = 'I';
    uppers[9] = 'J';
    uppers[10] = 'K';
    uppers[11] = 'L';
    uppers[12] = 'M';
    uppers[13] = 'N';
    uppers[14] = 'O';
    uppers[15] = 'P';
    uppers[16] = 'Q';
    uppers[17] = 'R';
    uppers[18] = 'S';
    uppers[19] = 'T';
    uppers[20] = 'U';
    uppers[21] = 'V';
    uppers[22] = 'W';
    uppers[23] = 'X';
    uppers[24] = 'Y';
    uppers[25] = 'Z';

    char random;
    srand(time(NULL));
    random = uppers[rand() % 26];

    printf("%c", random);

    return random;
}