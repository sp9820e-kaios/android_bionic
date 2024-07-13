/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _SPRD_JPG_H
#define _SPRD_JPG_H
#include <linux/ioctl.h>
#define SPRD_JPG_IOCTL_MAGIC 'm'
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define JPG_CONFIG_FREQ _IOW(SPRD_JPG_IOCTL_MAGIC, 1, unsigned int)
#define JPG_GET_FREQ _IOR(SPRD_JPG_IOCTL_MAGIC, 2, unsigned int)
#define JPG_ENABLE _IO(SPRD_JPG_IOCTL_MAGIC, 3)
#define JPG_DISABLE _IO(SPRD_JPG_IOCTL_MAGIC, 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define JPG_ACQUAIRE _IO(SPRD_JPG_IOCTL_MAGIC, 5)
#define JPG_RELEASE _IO(SPRD_JPG_IOCTL_MAGIC, 6)
#define JPG_START _IO(SPRD_JPG_IOCTL_MAGIC, 7)
#define JPG_RESET _IO(SPRD_JPG_IOCTL_MAGIC, 8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define JPG_ACQUAIRE_MBIO_VLC_DONE _IOR(SPRD_JPG_IOCTL_MAGIC, 9, unsigned int)
#define JPG_GET_IOVA _IOWR(SPRD_JPG_IOCTL_MAGIC, 11, struct jpg_iommu_map_data)
#define JPG_FREE_IOVA _IOW(SPRD_JPG_IOCTL_MAGIC, 12, struct jpg_iommu_map_data)
#define JPG_GET_IOMMU_STATUS _IO(SPRD_JPG_IOCTL_MAGIC, 13)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define JPG_VERSION _IO(SPRD_JPG_IOCTL_MAGIC, 14)
struct jpg_iommu_map_data {
  int fd;
  size_t size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long iova_addr;
};
enum jpg_version_e {
  SHARK = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  DOLPHIN = 1,
  TSHARK = 2,
  SHARKL = 3,
  PIKE = 4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  PIKEL = 5,
  SHARKL64 = 6,
  SHARKLT8 = 7,
  WHALE = 8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  WHALE2 = 9,
  IWHALE2 = 10,
  ISHARKL2 = 11,
  SHARKL2 = 12,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SHARKLE = 13,
  MAX_VERSIONS,
};
enum sprd_jpg_frequency_e {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  JPG_FREQENCY_LEVEL_0 = 0,
  JPG_FREQENCY_LEVEL_1 = 1,
  JPG_FREQENCY_LEVEL_2 = 2,
  JPG_FREQENCY_LEVEL_3 = 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define INTS_MBIO 3
#define INTS_VLD 2
#define INTS_VLC 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INTS_BSM 0
#endif
