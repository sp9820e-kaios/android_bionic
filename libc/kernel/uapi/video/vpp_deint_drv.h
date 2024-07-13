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
#ifndef _SPRD_VPP_H
#define _SPRD_VPP_H
#include <linux/ioctl.h>
#define DEINT_CLK_LEVEL_NUM 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPRD_VPP_MAP_SIZE 0x4000
#define SPRD_VPP_IOCTL_MAGIC 'd'
#define SPRD_VPP_ALLOCATE_PHYSICAL_MEMORY _IO(SPRD_VPP_IOCTL_MAGIC, 1)
#define SPRD_VPP_FREE_PHYSICAL_MEMORY _IO(SPRD_VPP_IOCTL_MAGIC, 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPRD_VPP_DEINT_COMPLETE _IO(SPRD_VPP_IOCTL_MAGIC, 3)
#define SPRD_VPP_DEINT_ACQUIRE _IO(SPRD_VPP_IOCTL_MAGIC, 4)
#define SPRD_VPP_DEINT_RELEASE _IO(SPRD_VPP_IOCTL_MAGIC, 5)
#define SPRD_VPP_RESET _IO(SPRD_VPP_IOCTL_MAGIC, 6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPRD_VPP_GET_IOVA _IOWR(SPRD_VPP_IOCTL_MAGIC, 7, struct vsp_iommu_map_data)
#define SPRD_VPP_FREE_IOVA _IOW(SPRD_VPP_IOCTL_MAGIC, 8, struct vsp_iommu_map_data)
#define SPRD_VPP_GET_IOMMU_STATUS _IO(SPRD_VPP_IOCTL_MAGIC, 9)
struct vsp_iommu_map_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int fd;
  size_t size;
  unsigned long iova_addr;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VPP_CFG (0x0000)
#define VPP_INT_STS (0x0010)
#define VPP_INT_MSK (0x0014)
#define VPP_INT_CLR (0x0018)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VPP_INT_RAW (0x001C)
#define DEINT_PATH_CFG (0x2000)
#define DEINT_PATH_START (0x2004)
#define DEINT_IMG_SIZE (0x2008)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef enum {
  SHARK = 0,
  DOLPHIN = 1,
  TSHARK = 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SHARKL = 3,
  PIKE = 4,
  PIKEL = 5,
  SHARKL64 = 6,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SHARKLT8 = 7,
  WHALE = 8,
  WHALE2 = 9,
  IWHALE2 = 10,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MAX_VERSIONS,
} CHIP_VERSION_E;
typedef struct vpp_drv_buffer_t {
  unsigned int size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int phys_addr;
  unsigned long base;
  unsigned long virt_addr;
} VPP_DRV_BUFFER_T;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum sprd_vpp_frequency_e {
  VPP_FREQENCY_LEVEL_0 = 0,
  VPP_FREQENCY_LEVEL_1 = 1,
  VPP_FREQENCY_LEVEL_2 = 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  VPP_FREQENCY_LEVEL_3 = 3
};
#endif
