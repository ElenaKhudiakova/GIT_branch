#ifdef _WIN32
#include <tchar.h>
#endif
#pragma once
#include <string>

//Экспорт функций в заголовочном файле
extern "C" __declspec(dllexport) int printGroup();
extern "C" __declspec(dllexport) void printFIO();
