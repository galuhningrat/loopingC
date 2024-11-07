#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

login:
    printf("\nMasukkan password: ");
    scanf("%s", password);

    if(strcmp(password, "#admin123") != 0) {
        printf("Password salah!\n");
        goto login;
    }

    printf("Login berhasil!\n");
    return 0;
}
