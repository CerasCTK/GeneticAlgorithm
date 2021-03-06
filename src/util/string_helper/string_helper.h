#pragma once

#ifndef GENETICALGORITHM_STRING_HELPER_H
#define GENETICALGORITHM_STRING_HELPER_H

#include <cstdint>

namespace string_helper {
    uint8_t *strcpy(uint8_t *destination, const uint8_t *source);

    uint8_t *strcat(uint8_t *destination, const uint8_t *source);

    int32_t strcmp(const uint8_t *first, const uint8_t *sec);

    int32_t strlen(const uint8_t *text);

    void get_text(uint8_t *container, const int32_t number_of_chars, uint8_t stop_char = '\n');

    int32_t count_char(const uint8_t *text, uint8_t character);

    int32_t pos(const uint8_t *text, uint8_t character);

    uint8_t *num_to_text(int32_t number);

    uint8_t *num_to_text(double number);
}

#endif
