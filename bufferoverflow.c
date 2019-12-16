#include <stdio.h>
#include <string.h>

int main(void) {
    int authorized = 0;
    char sys_pass[16] = "secret!";
    char usr_pass[16];

    printf("Enter password: ");
    scanf("%s", usr_pass);

    printf("usr_pass: %s\n", usr_pass);
    printf("sys_pass: %s\n", sys_pass);
    printf("auth value: %d\n", authorized);


    if (strcmp(sys_pass, usr_pass) == 0) {
        authorized = 1;
    }

    if (authorized) {
        printf("password is correct!\n");
    }
}
