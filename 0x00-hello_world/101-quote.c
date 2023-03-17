#include <unistd.h>

int main() {
    char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, msg, 46);
    return 1;
}
