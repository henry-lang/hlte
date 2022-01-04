#include "buffer.h"

int main() {
    buffer buf;
    buffer_init(&buf, 1024);
    buffer_into(&buf, "Hello hlte rewrite!");
}
