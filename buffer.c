#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "buffer.h"

void buffer_init(buffer *this, size_t capacity) {
    this->length = 0;
    this->capacity = 0;
    this->data = NULL;
    buffer_reserve(this, capacity);
}

void buffer_into(buffer *this, char *data) {
    if(this->data != NULL) {
        free(this->data);
    }

    size_t capacity = strlen(data) + 1;
    printf("%lu\n", capacity);
}

void buffer_reserve(buffer *this, size_t capacity) {
    if(this->capacity >= capacity) return;
    
    this->data = realloc(this->data, capacity);
    if(this->data == NULL && capacity != 0) {
        puts("Failed to allocate buffer data.");
        exit(1);
    }
    this->capacity = capacity;
}

void buffer_free(buffer *this) {
    free(this->data);
}
