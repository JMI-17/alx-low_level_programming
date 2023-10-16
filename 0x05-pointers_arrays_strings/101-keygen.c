#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 277
#define KEY_SUM 2772
int main(void)
{
int i;
int random;
int current_sum;
char password[PASSWORD_LENGTH + 1];
srand(time(0));
for (i = 0, current_sum = 0; i < PASSWORD_LENGTH - 1; i++)
{
random = rand() % (90 - 65) + 65;
current_sum += random;
password[i] = (char)random;
}
password[PASSWORD_LENGTH - 1] = KEY_SUM - current_sum;
password[PASSWORD_LENGTH] = '\0'; 
printf("%s", password);
return (0);
}
