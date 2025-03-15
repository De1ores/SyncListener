#include <iostream>
#include <thread>
#include <boost/asio/io_service.hpp>
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

#define BUFFER_SIZE 44100  // 1秒音频缓冲区
#define NUM_BUFFERS 2      // 双缓冲



// 录音回调函数
void CALLBACK waveInProc(HWAVEIN hwi, UINT uMsg, DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2) {

}

int main() {

}
