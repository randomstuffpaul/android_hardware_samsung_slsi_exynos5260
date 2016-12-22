/*
**
** Copyright 2013, Samsung Electronics Co. LTD
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

/* #define LOG_NDEBUG 0 */
#define LOG_TAG "SecCameraSWVDIS"
#include <cutils/log.h>


#include "SecCameraSWVdis.h"

#include "ExynosCameraBufferManager.h"

namespace android {

#ifdef SUPPORT_SW_VDIS
bool m_swVDIS_Mode;
void *m_swVDIS_Handle;
ExynosCameraBufferManager *m_swVDIS_BufferMgr;
ExynosCameraBuffer *m_swVDIS_InputBuffer[SW_VDIS_BUF_NUM];
ExynosCameraBuffer *m_swVDIS_OutputBuffer[SW_VDIS_BUF_NUM];
int m_swVDIS_InputIndex[SW_VDIS_BUF_NUM];
int m_swVDIS_OutW, m_swVDIS_OutH, m_swVDIS_InW, m_swVDIS_InH;
int m_swVDIS_FrameNum, m_swVDIS_Delay;
void    *m_swVdis_Handle;

bool m_swVDIS_Mode_Status()
{
    return true;
}

int m_swVDIS_Init()
{
    return NO_ERROR;
}

int m_swVDIS_Execute(ExynosCameraBuffer *vs_InputBuffer, ExynosCameraBuffer *vs_OutputBuffer, ExynosCameraFrame *frame)
{
    return NO_ERROR;
}

int m_swVDIS_Release()
{
    return NO_ERROR;
}

#endif

}; /* namespace android */


