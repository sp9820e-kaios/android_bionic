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
#ifndef _UAPI_VIDEO_gsp_r1p1_CFG_H
#define _UAPI_VIDEO_gsp_r1p1_CFG_H
#include <linux/ioctl.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/video/gsp_cfg.h>
enum gsp_r1p1_word_endian {
  GSP_WORD_ENDN_0 = 0x00,
  GSP_WORD_ENDN_1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_WORD_ENDN_2,
  GSP_WORD_ENDN_3,
  GSP_WORD_ENDN_MAX_NUM,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum gsp_r1p1_rgb_swap_mod {
  GSP_RGB_SWP_RGB = 0x00,
  GSP_RGB_SWP_RBG,
  GSP_RGB_SWP_GRB,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_RGB_SWP_GBR,
  GSP_RGB_SWP_BGR,
  GSP_RGB_SWP_BRG,
  GSP_RGB_SWP_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum gsp_r1p1_a_swap_mod {
  GSP_A_SWAP_ARGB,
  GSP_A_SWAP_RGBA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_A_SWAP_MAX,
};
enum gsp_r1p1_src_layer_format {
  GSP_SRC_FMT_ARGB888 = 0x00,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_SRC_FMT_RGB888,
  GSP_SRC_FMT_ARGB565,
  GSP_SRC_FMT_RGB565,
  GSP_SRC_FMT_YUV420_2P,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_SRC_FMT_YUV420_3P,
  GSP_SRC_FMT_YUV400_1P,
  GSP_SRC_FMT_YUV422_2P,
  GSP_SRC_FMT_8BPP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_SRC_FMT_MAX_NUM,
};
enum gsp_r1p1_des_layer_format {
  GSP_DST_FMT_ARGB888 = 0x00,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_DST_FMT_RGB888,
  GSP_DST_FMT_ARGB565,
  GSP_DST_FMT_RGB565,
  GSP_DST_FMT_YUV420_2P,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_DST_FMT_YUV420_3P,
  GSP_DST_FMT_YUV422_2P,
  GSP_DST_FMT_MAX_NUM,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gsp_r1p1_endian {
  __u32 y_word_endn;
  __u32 uv_word_endn;
  __u32 va_word_endn;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 rgb_swap_mode;
  __u32 a_swap_mode;
};
struct gsp_r1p1_img_layer_params {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 pitch;
  struct gsp_rect clip_rect;
  struct gsp_rect des_rect;
  struct gsp_rgb grey;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_rgb colorkey;
  struct gsp_r1p1_endian endian;
  __u32 img_format;
  __u32 rot_angle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 row_tap_mode;
  __u8 col_tap_mode;
  __u8 alpha;
  __u8 colorkey_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 pallet_en;
  __u8 scaling_en;
  __u8 pmargb_en;
  __u8 pmargb_mod;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 y2r_opt;
  __u8 bnd_bypass;
};
struct gsp_r1p1_img_layer_user {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_layer_user common;
  struct gsp_r1p1_img_layer_params params;
};
struct gsp_r1p1_osd_layer_params {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 pitch;
  struct gsp_rect clip_rect;
  struct gsp_pos des_pos;
  struct gsp_rgb grey;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_rgb colorkey;
  struct gsp_r1p1_endian endian;
  __u32 osd_format;
  __u32 rot_angle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 row_tap_mode;
  __u8 col_tap_mode;
  __u8 alpha;
  __u8 colorkey_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 pallet_en;
  __u8 pmargb_en;
  __u8 pmargb_mod;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gsp_r1p1_osd_layer_user {
  struct gsp_layer_user common;
  struct gsp_r1p1_osd_layer_params params;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gsp_r1p1_des_layer_params {
  __u32 pitch;
  struct gsp_r1p1_endian endian;
  __u32 img_format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 compress_r8_en;
};
struct gsp_r1p1_des_layer_user {
  struct gsp_layer_user common;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_r1p1_des_layer_params params;
};
struct gsp_r1p1_misc_cfg {
  __u8 dither_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 gsp_gap;
  __u8 gsp_clock;
  __u8 ahb_clock;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gsp_r1p1_cfg_user {
  struct gsp_r1p1_img_layer_user l0;
  struct gsp_r1p1_osd_layer_user l1;
  struct gsp_r1p1_des_layer_user ld;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_r1p1_misc_cfg misc;
};
struct gsp_r1p1_capability {
  struct gsp_capability common;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 scale_range_up;
  __u16 scale_range_down;
  __u32 yuv_xywh_even;
  __u32 max_video_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
