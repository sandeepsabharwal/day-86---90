# Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    enum Role r = USER;

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Hi, Guest! Please sign up or log in.\n");
            break;
    }
    return 0;
}
