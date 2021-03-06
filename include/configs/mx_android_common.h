/*
 * Copyright 2017 NXP
 */

#ifndef __MX_ANDROID_COMMON_H
#define __MX_ANDROID_COMMON_H

#define CONFIG_USBD_HS

#define CONFIG_BCB_SUPPORT
#define CONFIG_CMD_READ

#define CONFIG_CMD_USB_MASS_STORAGE
#define CONFIG_USB_FUNCTION_MASS_STORAGE
#define CONFIG_USB_GADGET_VBUS_DRAW     2

#define CONFIG_ANDROID_RECOVERY

#define CONFIG_CMD_BOOTA
#define CONFIG_SUPPORT_RAW_INITRD
#define CONFIG_SERIAL_TAG

#undef CONFIG_EXTRA_ENV_SETTINGS
#undef CONFIG_BOOTCOMMAND

#define CONFIG_EXTRA_ENV_SETTINGS	\
	"splashpos=m,m\0"	\
	"fdt_high=0xffffffff\0"	\
	"initrd_high=0xffffffff\0" \

#define CONFIG_APPEND_BOOTARGS

#endif /*MX_ANDROID_COMMON_H*/
