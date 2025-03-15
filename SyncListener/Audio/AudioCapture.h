//
// Created by Administrator on 3/15/2025.
//

#ifndef AUDIOCAPTURE_H
#define AUDIOCAPTURE_H

#include <Windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

#define BUFFER_SIZE 44100  // 1秒音频缓冲区
#define NUM_BUFFERS 2      // 双缓冲



// 录音回调函数
void CALLBACK waveInProc(HWAVEIN hwi, UINT uMsg, DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2) {

}


class AudioCapture {
public:
    AudioCapture();
    ~AudioCapture();
    bool start();
    void stop();

private:
    HWAVEIN hWaveIn;
    HWAVEOUT hWaveOut;
    WAVEHDR waveHeader[NUM_BUFFERS];
    char buffer[NUM_BUFFERS][BUFFER_SIZE];
    static void CALLBACK waveInProc(HWAVEIN hwi, UINT uMsg, DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2);
};
#endif //AUDIOCAPTURE_H
