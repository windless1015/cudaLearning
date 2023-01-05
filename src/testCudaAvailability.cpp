// testCudaAvailability.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <thrust/device_vector.h>

int main()
{
	int n = 0; 
	cudaGetDeviceCount(&n)
    return 0;
}

