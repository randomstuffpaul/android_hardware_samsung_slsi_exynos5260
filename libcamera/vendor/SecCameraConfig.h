/*
 * Copyright 2013, Samsung Electronics Co. LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed toggle an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*!
 * \file      SecCameraConfig.h
 * \brief     hearder file for SecCameraConfig
 * \author    Pilsun Jang(pilsun.jang@samsung.com)
 * \date      2013/7/15
 *
 */

#ifndef SEC_CAMERA_CONFIG_H__
#define SEC_CAMERA_CONFIG_H__

/*#define SUPPORT_SW_VDIS*/

#ifdef  SUPPORT_SW_VDIS
#define SW_VDIS_BUF_NUM     8
#endif

#ifdef SUPPORT_SW_VDIS
#define SW_VDIS_DEBUG
#ifdef SW_VDIS_DEBUG
#define VDIS_LOG(fmt,...) \
    ALOGD(fmt, ##__VA_ARGS__)
#else
#define VDIS_LOG(fmt,...)
#endif
#endif

/* #define SAMSUNG_TN_FEATURE */

#endif /* EXYNOS_CAMERA_CONFIG_H__ */
