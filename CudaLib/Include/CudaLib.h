#pragma once
#include "ExportDef.h"
#include "ICudaLib.h"

class CUDALIB_API CudaLib : public ICudaLib
{
public:
	CudaLib();

	// ICudaLib
	~CudaLib() override;
	void PrintFromCuda(std::string toPrint) override;
};
