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
#ifndef _SPRD_ROT_K_H_
#define _SPRD_ROT_K_H_
enum {
  ROT_YUV422 = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ROT_YUV420,
  ROT_YUV400,
  ROT_RGB888,
  ROT_RGB666,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ROT_RGB565,
  ROT_RGB555,
  ROT_FMT_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  ROT_90 = 0,
  ROT_270,
  ROT_180,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ROT_MIRROR,
  ROT_ANGLE_MAX
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ROT_ENDIAN_BIG = 0,
  ROT_ENDIAN_LITTLE,
  ROT_ENDIAN_HALFBIG,
  ROT_ENDIAN_HALFLITTLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ROT_ENDIAN_MAX
};
struct rot_size_tag {
  uint16_t w;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint16_t h;
};
struct rot_addr_tag {
  uint32_t y_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t u_addr;
  uint32_t v_addr;
  unsigned int mfd[3];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rot_cfg_tag {
  struct rot_size_tag img_size;
  uint32_t format;
  uint32_t angle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct rot_addr_tag src_addr;
  struct rot_addr_tag dst_addr;
  uint32_t src_endian;
  uint32_t dst_endian;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SPRD_ROT_IOCTL_MAGIC 'm'
#define ROT_IO_START _IOW(SPRD_ROT_IOCTL_MAGIC, 1, struct rot_cfg_tag)
#define ROT_IO_DATA_COPY _IOW(SPRD_ROT_IOCTL_MAGIC, 2, struct rot_cfg_tag)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROT_IO_DATA_COPY_TO_VIRTUAL _IOW(SPRD_ROT_IOCTL_MAGIC, 3, struct rot_cfg_tag)
#define ROT_IO_DATA_COPY_FROM_VIRTUAL _IOW(SPRD_ROT_IOCTL_MAGIC, 4, struct rot_cfg_tag)
#endif
