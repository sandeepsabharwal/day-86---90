# Print all enum names and integer values using a loop.

#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    const char* names[] = { "ADMIN", "USER", "GUEST" };
    enum Role values[] = { ADMIN, USER, GUEST };

    for (int i = 0; i < 3; i++) {
        printf("%s = %d\n", names[i], values[i]);
    }
    return 0;
}
