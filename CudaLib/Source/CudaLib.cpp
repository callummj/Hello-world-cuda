#include "../Include/CudaLib.h"
#include "../Include/MiscCuda.cuh"

CudaLib::CudaLib()
{
}

CudaLib::~CudaLib()
{
}

void CudaLib::PrintFromCuda(std::string toPrint)
{
	MiscCuda::PrintToCuda(toPrint.c_str());
}
