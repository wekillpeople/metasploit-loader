/*
 * dynimp.h
 *
 *  Created on: Jun 24, 2016
 *      Author: r-21-
 */

#ifndef DYNIMP_H_
#define DYNIMP_H_

#include "prototypes.h"

ULONG_PTR dyn_call(char* dll, char* func);

#define MAKESTR(x) # x
#define FNC(func, lib) ((PROTO_##func) dyn_call(lib, MAKESTR(func)))

#endif /* DYNIMP_H_ */
