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
#ifndef _UAPI_SPRD_ION_H
#define _UAPI_SPRD_ION_H
enum sprd_ion_heap_ids {
  ION_HEAP_ID_SYSTEM = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ION_HEAP_ID_MM,
  ION_HEAP_ID_OVERLAY,
  ION_HEAP_ID_FB,
  ION_HEAP_ID_CAM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define ION_HEAP_ID_MASK_SYSTEM (1 << ION_HEAP_ID_SYSTEM)
#define ION_HEAP_ID_MASK_MM (1 << ION_HEAP_ID_MM)
#define ION_HEAP_ID_MASK_OVERLAY (1 << ION_HEAP_ID_OVERLAY)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ION_HEAP_ID_MASK_FB (1 << ION_HEAP_ID_FB)
#define ION_HEAP_ID_MASK_CAM (1 << ION_HEAP_ID_CAM)
#define ION_FLAG_SECURE (1 << 31)
#define ION_FLAG_NO_CLEAR (1 << 16)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum ION_SPRD_CUSTOM_CMD {
  ION_SPRD_CUSTOM_PHYS = 0,
  ION_SPRD_CUSTOM_MSYNC,
  ION_SPRD_CUSTOM_FENCE_CREATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ION_SPRD_CUSTOM_FENCE_SIGNAL,
  ION_SPRD_CUSTOM_FENCE_DUP,
  ION_SPRD_CUSTOM_MAP_KERNEL,
  ION_SPRD_CUSTOM_UNMAP_KERNEL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ION_SPRD_CUSTOM_INVALIDATE,
};
enum SPRD_DEVICE_SYNC_TYPE {
  SPRD_DEVICE_PRIMARY_SYNC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SPRD_DEVICE_VIRTUAL_SYNC,
};
struct ion_phys_data {
  int fd_buffer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long phys;
  size_t size;
};
struct ion_msync_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int fd_buffer;
  unsigned long vaddr;
  unsigned long paddr;
  size_t size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ion_fence_data {
  uint32_t device_type;
  int life_value;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int release_fence_fd;
  int retired_fence_fd;
};
struct ion_kmap_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int fd_buffer;
  uint64_t kaddr;
  size_t size;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ion_kunmap_data {
  int fd_buffer;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
