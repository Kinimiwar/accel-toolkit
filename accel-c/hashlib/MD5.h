/*********************************************************************
* Filename:   MD5.h
* Author:     Aiyu Xiao (xiao_ai_yu@live.cn)
*********************************************************************/
#pragma once
#include <stdint.h>
#include <stddef.h>

#if defined(__cplusplus)
extern "C" {
#endif

    void HASH_MD5_Initialize(uint32_t HashBuffer[4]);

    void HASH_MD5_MainCycle(const void* srcBytes, size_t srcBytesLength,
                            uint32_t HashBuffer[4]);

    void HASH_MD5_Final(const void* LeftBytes, size_t LeftBytesLength, uint64_t TotalBytesLength,
                        uint32_t HashBuffer[4]);

#if defined(__cplusplus)
}
#endif
