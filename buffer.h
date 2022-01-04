#include <stdlib.h>

#ifndef BUFFER_H
#define BUFFER_H

typedef struct buffer {
    size_t length;
    size_t capacity;
    char* data;
} buffer;

#define BUFFER_COPY 0
#define BUFFER_MOVE 1

void buffer_init(buffer *, size_t);
void buffer_into(buffer *, char *);
void buffer_reserve(buffer *, size_t);
void buffer_free(buffer *);

#endif
