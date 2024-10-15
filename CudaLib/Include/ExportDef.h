#pragma once

// By default this library is compiled with CUDALIB defined

#ifdef CUDALIB_EXPORTS
#define CUDALIB_API __declspec(dllexport)
#else
#define CUDALIB_API __declspec(dllimport)
#endif