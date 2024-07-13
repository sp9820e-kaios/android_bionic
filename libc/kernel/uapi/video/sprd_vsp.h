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
#ifndef _SPRD_VSP_H
#define _SPRD_VSP_H
#include <linux/ioctl.h>
#include <linux/compat.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPRD_VSP_MAP_SIZE 0xA000
#define SPRD_VSP_CLK_LEVEL_NUM 5
#define SPRD_VSP_IOCTL_MAGIC 'm'
#define VSP_CONFIG_FREQ _IOW(SPRD_VSP_IOCTL_MAGIC, 1, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VSP_GET_FREQ _IOR(SPRD_VSP_IOCTL_MAGIC, 2, unsigned int)
#define VSP_ENABLE _IO(SPRD_VSP_IOCTL_MAGIC, 3)
#define VSP_DISABLE _IO(SPRD_VSP_IOCTL_MAGIC, 4)
#define VSP_ACQUAIRE _IO(SPRD_VSP_IOCTL_MAGIC, 5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VSP_RELEASE _IO(SPRD_VSP_IOCTL_MAGIC, 6)
#define VSP_COMPLETE _IO(SPRD_VSP_IOCTL_MAGIC, 7)
#define VSP_RESET _IO(SPRD_VSP_IOCTL_MAGIC, 8)
#define VSP_HW_INFO _IO(SPRD_VSP_IOCTL_MAGIC, 9)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VSP_VERSION _IO(SPRD_VSP_IOCTL_MAGIC, 10)
#define VSP_GET_IOVA _IOWR(SPRD_VSP_IOCTL_MAGIC, 11, struct vsp_iommu_map_data)
#define VSP_FREE_IOVA _IOW(SPRD_VSP_IOCTL_MAGIC, 12, struct vsp_iommu_map_data)
#define VSP_GET_IOMMU_STATUS _IO(SPRD_VSP_IOCTL_MAGIC, 13)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VSP_SET_CODEC_ID _IOW(SPRD_VSP_IOCTL_MAGIC, 14, unsigned int)
#define VSP_GET_CODEC_COUNTER _IOWR(SPRD_VSP_IOCTL_MAGIC, 15, unsigned int)
#define VSP_SET_SCENE _IO(SPRD_VSP_IOCTL_MAGIC, 16)
#define VSP_GET_SCENE _IO(SPRD_VSP_IOCTL_MAGIC, 17)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VSP_SYNC_GSP _IO(SPRD_VSP_IOCTL_MAGIC, 18)
enum sprd_vsp_frequency_e {
  VSP_FREQENCY_LEVEL_0 = 0,
  VSP_FREQENCY_LEVEL_1 = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  VSP_FREQENCY_LEVEL_2 = 2,
  VSP_FREQENCY_LEVEL_3 = 3
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  VSP_H264_DEC = 0,
  VSP_H264_ENC,
  VSP_MPEG4_DEC,
  VSP_MPEG4_ENC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  VSP_H265_DEC,
  VSP_H265_ENC,
  VSP_VPX_DEC,
  VSP_VPX_ENC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  VSP_ENC,
  VSP_CODEC_INSTANCE_COUNT_MAX
};
typedef enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SHARK = 0,
  DOLPHIN = 1,
  TSHARK = 2,
  SHARKL = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  PIKE = 4,
  PIKEL = 5,
  SHARKL64 = 6,
  SHARKLT8 = 7,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  WHALE = 8,
  WHALE2 = 9,
  IWHALE2 = 10,
  ISHARKL2 = 11,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SHARKL2 = 12,
  SHARKLJ1 = 13,
  SHARKLE = 14,
  PIKE2 = 15,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MAX_VERSIONS,
} VSP_VERSION_E;
struct vsp_iommu_map_data {
  int fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  size_t size;
  unsigned long iova_addr;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
