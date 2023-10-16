#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 15
int main(void)
{
char password[PASSWORD_LENGTH + 1];
srand(time(0));
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
char random = (char)(rand() % 26 + 'A');
password[i] = random;
}
password[PASSWORD_LENGTH] = '\0';
printf("Tada! Congrats\n");
printf("(%d chars long)\n", PASSWORD_LENGTH);
printf("%s\n", password);
return 0;
}
