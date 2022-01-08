#ifndef UTF8_H_
#define UTF8_H_

#include <stdint.h>
#include <stdlib.h>

extern size_t utf8_encode(uint32_t codepoint, uint8_t seq[4]);

#endif //UTF8_H_
