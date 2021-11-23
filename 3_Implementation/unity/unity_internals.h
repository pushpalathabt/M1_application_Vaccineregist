#ifndef UNITY_INTERNALS_H
#define UNITY_INTERNALS_H

#ifdef UNITY_INCLUDE_CONFIG_H
#include "unity_config.h"
#endif

#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif

#ifndef UNITY_EXCLUDE_MATH_H
#include <math.h>
#endif

#ifndef UNITY_EXCLUDE_STDDEF_H
#include <stddef.h>
#endif

#ifdef UNITY_INCLUDE_PRINT_FORMATTED
#include <stdarg.h>
#endif
