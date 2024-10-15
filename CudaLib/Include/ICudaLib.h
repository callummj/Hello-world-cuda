#pragma once
#include "ExportDef.h"
#include <string>


class CUDALIB_API ICudaLib
{
public:
	virtual ~ICudaLib() = default;
	virtual void PrintFromCuda(std::string toPrint) = 0;
};
