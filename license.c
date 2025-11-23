#include <stdio.h>
#include <string.h>

int main() {
    char key[20];
    int access_code = 777; 
    
    printf("ENTER LICENSE KEY: ");
    scanf("%s", key);

    // This is a terrible way to hide a password, but it teaches the concept!
    if (strcmp(key, "MECHANIC-2025") == 0) {
        printf("ACCESS GRANTED. Welcome, Admin.\n");
        printf("Secret Code: %d\n", access_code * 2);
    } else {
        printf("ACCESS DENIED.\n");
    }

    return 0;
}
