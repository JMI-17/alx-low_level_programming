#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 8
int main()
{
char password[PASSWORD_LENGTH + 1];
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
srand(time(NULL));
int i;
for (i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}
password[PASSWORD_LENGTH] = '\0';
printf("Generated Password: %s\n", password);
return (0);
}
