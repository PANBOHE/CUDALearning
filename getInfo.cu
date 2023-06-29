#include <cuda_runtime.h>
#include <iostream>

int main() {
    int deviceCount;
    cudaGetDeviceCount(&deviceCount);

    for (int i = 0; i < deviceCount; i++) {
        cudaDeviceProp deviceProp;
        cudaGetDeviceProperties(&deviceProp, i);

        std::cout << "Device Name: " << deviceProp.name << std::endl;
        std::cout << "Total Global Memory: " << deviceProp.totalGlobalMem << " bytes" << std::endl;
        // 打印其他设备属性...

        std::cout << std::endl;
    }

    return 0;
}
