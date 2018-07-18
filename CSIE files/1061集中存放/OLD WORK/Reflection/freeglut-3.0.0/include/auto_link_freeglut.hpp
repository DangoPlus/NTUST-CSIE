#pragma once
#define FREEGLUT_LIB_NAME "freeglut"

#if defined(FREEGLUT_LIB_DYNAMIC) || defined(FREEGLUT_DYNAMIC)
#  define FREEGLUT_LIB_PREFIX
#elif defined(_WIN32)
#  define FREEGLUT_LIB_PREFIX "lib"
#define FREEGLUT_STATIC
#endif

#if defined(_M_IX86)
#  define FREEGLUT_LIB_PLATFORM "-x86"
#else
#  define FREEGLUT_LIB_PLATFORM "-x64"
#endif

#ifdef _DLL
#  if defined(_DEBUG)
// MDd
#    define FREEGLUT_LIB_RT_OPT "-gd"
#  else
// MD
#    define FREEGLUT_LIB_RT_OPT
#  endif
#else
#  if defined(_DEBUG)
// MTd
#    define FREEGLUT_LIB_RT_OPT "-sgd"
#  else
// MT
#    define FREEGLUT_LIB_RT_OPT "-s"
#  endif
#endif

#  pragma comment(lib, FREEGLUT_LIB_PREFIX FREEGLUT_LIB_NAME  FREEGLUT_LIB_RT_OPT FREEGLUT_LIB_PLATFORM ".lib")
// static MDd x86 : libfreeglut-gd-x86.lib
// static MD x86 :  libfreeglut-x86.lib
// static MTd x86 : libfreeglut-sgd-x86.lib
// static MT x86 :  libfreeglut-s-x86.lib

// dynamic MDd x86 : freeglut-gd-x86.lib
// dynamic MD x86 :  freeglut-x86.lib
// dynamic MTd x86 : freeglut-sgd-x86.lib
// dynamic MT x86 :  freeglut-s-x86.lib
