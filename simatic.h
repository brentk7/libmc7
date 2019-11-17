/* libmc7 - LGPL - Copyright 2019 - deroad */

#ifndef R_SIMATIC_H
#define R_SIMATIC_H

#include <r_util.h>

#ifdef __cplusplus
extern "C" {
#endif

R_API int simatic_s7_dec_instr(const ut8* buffer, const ut64 size, const ut64 addr, char* str_buf, int str_len);

#ifdef __cplusplus
}
#endif

#endif /* R_SIMATIC_H */