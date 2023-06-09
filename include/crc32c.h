/*
 * No copyright is claimed. This code is in the public domain; do with it what
 * you wish.
 */
#ifndef UL_CRC32C_H
#define UL_CRC32C_H

#include <sys/types.h>
#include <stdint.h>

extern uint32_t crc32c(uint32_t crc, const void *buf, size_t size);

#endif /* UL_CRC32C_H */
