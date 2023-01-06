#include <thrust/device_vector.h>

int main()
{
	cudaError_t errCode;
	//int n = 0; 
	//errCode = cudaGetDeviceCount(&n);
	int device;
	errCode = cudaGetDevice(&device);

	cudaDeviceProp deviceProp;
	errCode = cudaGetDeviceProperties(&deviceProp, device);
	char deviceName[256];
	memcpy(deviceName, deviceProp.name, sizeof(deviceProp.name));

	printf("  Device Number: %d\n", device);
	printf("  Device name: %s\n", deviceName);
	printf("  Memory Clock Rate (MHz): %d\n",
		deviceProp.memoryClockRate / 1024);
	printf("  Memory Bus Width (bits): %d\n",
		deviceProp.memoryBusWidth);
	printf("  Peak Memory Bandwidth (GB/s): %.1f\n",
		2.0*deviceProp.memoryClockRate*(deviceProp.memoryBusWidth / 8) / 1.0e6);
	printf("  Total global memory (Gbytes) %.1f\n", (float)(deviceProp.totalGlobalMem) / 1024.0 / 1024.0 / 1024.0);
	printf("  Shared memory per block (Kbytes) %.1f\n", (float)(deviceProp.sharedMemPerBlock) / 1024.0);
	printf("  minor-major: %d-%d\n", deviceProp.minor, deviceProp.major);
	printf("  Warp-size: %d\n", deviceProp.warpSize);
	printf("  Concurrent kernels: %s\n", deviceProp.concurrentKernels ? "yes" : "no");
	printf("  Concurrent computation/communication: %s\n\n", deviceProp.deviceOverlap ? "yes" : "no");

    return 0;
}

