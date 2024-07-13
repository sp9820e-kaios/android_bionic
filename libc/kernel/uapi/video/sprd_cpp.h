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
#ifndef _SPRD_CPP_H_
#define _SPRD_CPP_H_
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
enum {
  SCALE_YUV420 = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_YUV420_3FRAME,
  SCALE_YUV422,
  SCALE_JPEG_LS,
  SCALE_YUV400,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_RGB565,
  SCALE_RGB888,
  SCALE_FTM_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  SCALE_ENDIAN_BIG = 0,
  SCALE_ENDIAN_LITTLE,
  SCALE_ENDIAN_HALFBIG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_ENDIAN_HALFLITTLE,
  SCALE_ENDIAN_MAX
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_MODE_NORMAL = 0,
  SCALE_MODE_SLICE,
  SCALE_MODE_SLICE_READDR,
  SCALE_MODE_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  SCALE_REGULATE_MODE_NORMAL = 0,
  SCALE_REGULATE_MODE_SHRINK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SCALE_REGULATE_MODE_CUT,
  SCALE_REGULATE_MODE_SPECIAL_EFFECT,
  SCALE_REGULATE_MODE_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  PATH2_ENDIAN_BIG = 0,
  PATH2_ENDIAN_LITTLE,
  PATH2_ENDIAN_HALFBIG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  PATH2_ENDIAN_HALFLITTLE,
  PATH2_ENDIAN_MAX
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  PATH3_ENDIAN_BIG = 0,
  PATH3_ENDIAN_LITTLE,
  PATH3_ENDIAN_HALFBIG,
  PATH3_ENDIAN_HALFLITTLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  PATH3_ENDIAN_MAX
};
struct sprd_cpp_size {
  unsigned int w;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int h;
};
struct sprd_cpp_rect {
  unsigned int x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int y;
  unsigned int w;
  unsigned int h;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sprd_cpp_addr {
  unsigned int y;
  unsigned int u;
  unsigned int v;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int mfd[3];
};
struct sprd_cpp_rot_cfg_parm {
  struct sprd_cpp_size size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int format;
  unsigned int angle;
  struct sprd_cpp_addr src_addr;
  struct sprd_cpp_addr dst_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int src_endian;
  unsigned int dst_endian;
};
struct sprd_cpp_scale_jpegls_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int y;
  unsigned int u;
  unsigned int v;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sprd_cpp_scale_deci {
  unsigned int hor;
  unsigned int ver;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sprd_cpp_scale_regulate_threshold {
  unsigned int effect_threshold_y;
  unsigned int effect_threshold_uv;
  unsigned int down_threshold_y;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int down_threshold_uv;
  unsigned int up_threshold_y;
  unsigned int up_threshold_uv;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sprd_cpp_scale_endian_sel {
  unsigned char y_endian;
  unsigned char uv_endian;
  unsigned char reserved[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct sprd_cpp_scale_slice_parm {
  unsigned int slice_height;
  struct sprd_cpp_rect input_rect;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_addr input_addr;
  struct sprd_cpp_addr output_addr;
};
struct sprd_cpp_scale_cfg_parm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_size input_size;
  struct sprd_cpp_rect input_rect;
  unsigned int input_format;
  struct sprd_cpp_addr input_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_addr input_addr_vir;
  struct sprd_cpp_scale_endian_sel input_endian;
  struct sprd_cpp_size output_size;
  unsigned int output_format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_addr output_addr;
  struct sprd_cpp_addr output_addr_vir;
  struct sprd_cpp_scale_endian_sel output_endian;
  unsigned int scale_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int slice_height;
  struct sprd_cpp_scale_jpegls_info jpegls_info;
  struct sprd_cpp_scale_regulate_threshold regulate_threshold;
  unsigned int regualte_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_scale_deci scale_deci;
  struct sprd_cpp_addr input_r_block_addr;
  unsigned int split_left_block_w;
  unsigned int regualte_mode_src;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int regualte_mode_des;
  unsigned int isDirectVirAddr;
};
struct sprd_cpp_dma_cfg_parm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_size input_size;
  struct sprd_cpp_rect input_rect;
  unsigned int input_format;
  struct sprd_cpp_addr input_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_scale_endian_sel input_endian;
  struct sprd_cpp_size output_size;
  unsigned int output_format;
  struct sprd_cpp_addr output_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_scale_endian_sel output_endian;
  unsigned int isDirectVirAddr;
};
struct sprd_cpp_path2_cfg_parm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_size input_size;
  struct sprd_cpp_rect input_rect;
  unsigned int input_format;
  struct sprd_cpp_addr input_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_scale_endian_sel input_endian;
  struct sprd_cpp_size output_size;
  unsigned int output_format;
  struct sprd_cpp_addr output_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_scale_endian_sel output_endian;
  unsigned int isDirectVirAddr;
};
struct sprd_cpp_path3_cfg_parm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_size input_size;
  struct sprd_cpp_rect input_rect;
  unsigned int input_format;
  struct sprd_cpp_addr input_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_scale_endian_sel input_endian;
  struct sprd_cpp_size output_size;
  unsigned int output_format;
  struct sprd_cpp_addr output_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_scale_endian_sel output_endian;
  unsigned int isDirectVirAddr;
};
struct sprd_cpp_path0_path3_cfg_parm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_size input_size;
  struct sprd_cpp_rect input_rect;
  struct sprd_cpp_rect path3_input_rect;
  unsigned int input_format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_addr input_addr;
  struct sprd_cpp_scale_endian_sel input_endian;
  struct sprd_cpp_size path0_output_size;
  unsigned int path0_output_format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_addr path0_output_addr;
  struct sprd_cpp_scale_endian_sel path0_output_endian;
  struct sprd_cpp_size path3_output_size;
  unsigned int path3_output_format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_addr path3_output_addr;
  struct sprd_cpp_scale_endian_sel path3_output_endian;
  unsigned int isDirectVirAddr;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sprd_cpp_path2_path3_cfg_parm {
  struct sprd_cpp_size input_size;
  struct sprd_cpp_rect input_rect;
  struct sprd_cpp_rect path3_input_rect;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int input_format;
  struct sprd_cpp_addr input_addr;
  struct sprd_cpp_scale_endian_sel input_endian;
  struct sprd_cpp_size path2_output_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int path2_output_format;
  struct sprd_cpp_addr path2_output_addr;
  struct sprd_cpp_scale_endian_sel path2_output_endian;
  struct sprd_cpp_size path3_output_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int path3_output_format;
  struct sprd_cpp_addr path3_output_addr;
  struct sprd_cpp_scale_endian_sel path3_output_endian;
  unsigned int isDirectVirAddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct sprd_cpp_scale_capability {
  struct sprd_cpp_size src_size;
  int src_format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_size dst_size;
  int dst_format;
  void __user * is_supported;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum sprd_cpp_current_senario {
  CPP_SENARIO_SCALE = (1 << 0),
  CPP_SENARIO_ROTATE = (1 << 1),
  CPP_SENARIO_PATH2 = (1 << 2),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  CPP_SENARIO_PATH3 = (1 << 3),
  CPP_SENARIO_PATH0_PATH3 = (1 << 4),
  CPP_SENARIO_PATH2_PATH3 = (1 << 5)
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sprd_dcam_img_frm {
  unsigned int fmt;
  unsigned int buf_size;
  struct sprd_cpp_rect rect;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_cpp_rect rect2;
  struct sprd_cpp_size size;
  struct sprd_cpp_addr addr_phy;
  struct sprd_cpp_addr addr_vir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int fd;
  struct sprd_cpp_scale_endian_sel data_end;
  unsigned int format_pattern;
  void * reserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SPRD_CPP_IOCTL_MAGIC 'm'
#define SPRD_CPP_IO_OPEN_ROT _IOW(SPRD_CPP_IOCTL_MAGIC, 1, unsigned int)
#define SPRD_CPP_IO_CLOSE_ROT _IOW(SPRD_CPP_IOCTL_MAGIC, 2, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPRD_CPP_IO_START_ROT _IOW(SPRD_CPP_IOCTL_MAGIC, 3, struct sprd_cpp_rot_cfg_parm)
#define SPRD_CPP_IO_OPEN_SCALE _IOW(SPRD_CPP_IOCTL_MAGIC, 4, unsigned int)
#define SPRD_CPP_IO_CLOSE_SCALE _IOW(SPRD_CPP_IOCTL_MAGIC, 5, unsigned int)
#define SPRD_CPP_IO_START_SCALE _IOW(SPRD_CPP_IOCTL_MAGIC, 6, struct sprd_cpp_scale_cfg_parm)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPRD_CPP_IO_CONTINUE_SCALE _IOW(SPRD_CPP_IOCTL_MAGIC, 7, struct sprd_cpp_scale_slice_parm)
#define SPRD_CPP_IO_STOP_SCALE _IOW(SPRD_CPP_IOCTL_MAGIC, 8, unsigned int)
#define SPRD_CPP_IO_START_PATH2 _IOW(SPRD_CPP_IOCTL_MAGIC, 11, struct sprd_cpp_path2_cfg_parm)
#define SPRD_CPP_IO_STOP_PATH2 _IOW(SPRD_CPP_IOCTL_MAGIC, 12, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPRD_CPP_IO_START_PATH3 _IOW(SPRD_CPP_IOCTL_MAGIC, 15, struct sprd_cpp_path3_cfg_parm)
#define SPRD_CPP_IO_STOP_PATH3 _IOW(SPRD_CPP_IOCTL_MAGIC, 16, unsigned int)
#define SPRD_CPP_IO_START_PATH0_PATH3 _IOW(SPRD_CPP_IOCTL_MAGIC, 19, struct sprd_cpp_path0_path3_cfg_parm)
#define SPRD_CPP_IO_STOP_PATH0_PATH3 _IOW(SPRD_CPP_IOCTL_MAGIC, 20, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPRD_CPP_IO_START_PATH2_PATH3 _IOW(SPRD_CPP_IOCTL_MAGIC, 23, struct sprd_cpp_path2_path3_cfg_parm)
#define SPRD_CPP_IO_STOP_PATH2_PATH3 _IOW(SPRD_CPP_IOCTL_MAGIC, 24, unsigned int)
#define SPRD_CPP_IO_OPEN_PATH _IOW(SPRD_CPP_IOCTL_MAGIC, 26, unsigned int)
#define SPRD_CPP_IO_CLOSE_PATH _IOW(SPRD_CPP_IOCTL_MAGIC, 27, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPRD_CPP_IO_OPEN_DMA _IOW(SPRD_CPP_IOCTL_MAGIC, 28, unsigned int)
#define SPRD_CPP_IO_START_DMA _IOW(SPRD_CPP_IOCTL_MAGIC, 29, struct sprd_cpp_dma_cfg_parm)
#define SPRD_CPP_IO_SCALE_CAPABILITY _IOW(SPRD_CPP_IOCTL_MAGIC, 30, struct sprd_cpp_scale_capability)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
