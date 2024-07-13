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
#ifndef _SPRD_SCALE_H_
#define _SPRD_SCALE_H_
enum scale_fmt_e {
  SCALE_YUV422 = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_YUV420,
  SCALE_YUV400,
  SCALE_YUV420_3FRAME,
  SCALE_RGB565,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_RGB888,
  SCALE_FTM_MAX
};
enum scale_data_endian_e {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_ENDIAN_BIG = 0,
  SCALE_ENDIAN_LITTLE,
  SCALE_ENDIAN_HALFBIG,
  SCALE_ENDIAN_HALFLITTLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_ENDIAN_MAX
};
enum scale_mode_e {
  SCALE_MODE_NORMAL = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_MODE_SLICE,
  SCALE_MODE_SLICE_READDR,
  SCALE_MODE_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum scale_process_e {
  SCALE_PROCESS_SUCCESS = 0,
  SCALE_PROCESS_EXIT = - 1,
  SCALE_PROCESS_SYS_BUSY = - 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_PROCESS_MAX = 0xFF
};
struct scale_size_t {
  uint32_t w;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t h;
};
struct scale_rect_t {
  uint32_t x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t y;
  uint32_t w;
  uint32_t h;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct scale_addr_t {
  uint32_t yaddr;
  uint32_t uaddr;
  uint32_t vaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int mfd[3];
};
struct scale_endian_sel_t {
  uint8_t y_endian;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint8_t uv_endian;
  uint8_t reserved0;
  uint8_t reserved1;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct scale_slice_param_t {
  uint32_t slice_height;
  struct scale_rect_t input_rect;
  struct scale_addr_t input_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct scale_addr_t output_addr;
};
struct scale_frame_param_t {
  struct scale_size_t input_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct scale_rect_t input_rect;
  enum scale_fmt_e input_format;
  struct scale_addr_t input_addr;
  struct scale_endian_sel_t input_endian;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct scale_size_t output_size;
  enum scale_fmt_e output_format;
  struct scale_addr_t output_addr;
  struct scale_endian_sel_t output_endian;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum scale_mode_e scale_mode;
  uint32_t slice_height;
  void * coeff_addr;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct scale_frame_info_t {
  uint32_t type;
  uint32_t lock;
  uint32_t flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t fid;
  uint32_t width;
  uint32_t height;
  uint32_t height_uv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t yaddr;
  uint32_t uaddr;
  uint32_t vaddr;
  struct scale_endian_sel_t endian;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum scale_process_e scale_result;
};
#define SCALE_IO_MAGIC 'S'
#define SCALE_IO_START _IOW(SCALE_IO_MAGIC, 0, struct scale_frame_param_t)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SCALE_IO_CONTINUE _IOW(SCALE_IO_MAGIC, 1, struct scale_slice_param_t)
#define SCALE_IO_DONE _IOW(SCALE_IO_MAGIC, 2, struct scale_slice_param_t)
#endif
