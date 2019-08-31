/*
 * Copyright (c) 2015 Google Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __USB_GB_H__
#define __USB_GB_H__

#include <nuttx/greybus/types.h>

/* Version of the Greybus USB protocol we support */
#define GB_USB_VERSION_MAJOR		0x00
#define GB_USB_VERSION_MINOR		0x01

/* Greybus USB request types */
#define GB_USB_TYPE_INVALID		GB_INVALID_TYPE
#define GB_USB_TYPE_PROTOCOL_VERSION	0x01
#define GB_USB_TYPE_HCD_START		0x02
#define GB_USB_TYPE_HCD_STOP		0x03
#define GB_USB_TYPE_HUB_CONTROL		0x04

struct gb_usb_proto_version_response {
	__u8	major;
	__u8	minor;
} __packed;

struct gb_usb_hub_control_request {
	__le16 typeReq;
	__le16 wValue;
	__le16 wIndex;
	__le16 wLength;
} __packed;

struct gb_usb_hub_control_response {
	__u8 buf[0];
} __packed;

#endif /* __USB_GB_H__ */

