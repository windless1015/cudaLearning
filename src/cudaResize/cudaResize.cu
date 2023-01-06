//#include <thrust/device_vector.h>
//
//int main()
//{
//	thrust::device_vector<int> vec_d;
//	//running the next line of code, it will display 
//	/*
//Exception thrown at 0x00007FFD8642CD29 in cudaResize.exe: Microsoft C++ exception: thrust::system::system_error at memory location 0x00000001000FF350.
//Exception thrown at 0x00007FFD8642CD29 in cudaResize.exe: Microsoft C++ exception: [rethrow] at memory location 0x0000000000000000.
//Exception thrown at 0x00007FFD8642CD29 in cudaResize.exe: Microsoft C++ exception: thrust::system::system_error at memory location 0x00000001000FF350.
//Unhandled exception at 0x00007FFD8642CD29 in cudaResize.exe: Microsoft C++ exception: thrust::system::system_error at memory location 0x00000001000FF350.
//	*/
//	int size = vec_d.size();
//	vec_d.reserve(6);
//    return 0;
//}


#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/copy.h>
#include <thrust/fill.h>
#include <thrust/sequence.h>
#include <iostream>

int main(void)
{
	try
	{
		thrust::device_vector<float> vec;
		vec.resize(6);
	}
	catch (thrust::system_error e)
	{
		std::cerr << "device_vector resize error: " << e.what() << std::endl;
		return -1;
	}

	return 0;
}

