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
#ifndef _UAPI_VIDEO_GSP_CFG_H
#define _UAPI_VIDEO_GSP_CFG_H
#include <linux/ioctl.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GSP_IO_MAGIC ('G')
#define GSP_IO_SHIFT (5)
#define GSP_GET_CAPABILITY_SHIFT (6)
#define GSP_TRIGGER_SHIFT (5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GSP_ASYNC_SHIFT (4)
#define GSP_SPLIT_SHIFT (3)
#define GSP_CNT_SHIFT (0)
#define GSP_GET_CAPABILITY (0x1 << GSP_GET_CAPABILITY_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GSP_TRIGGER (0x1 << GSP_TRIGGER_SHIFT)
#define GSP_IO_MASK (0x7 << GSP_IO_SHIFT)
#define GSP_ASYNC_MASK (0x1 << GSP_ASYNC_SHIFT)
#define GSP_SPLIT_MASK (0x1 << GSP_SPLIT_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GSP_CNT_MASK (0x7 << GSP_CNT_SHIFT)
#define GSP_IO_GET_CAPABILITY(size) _IOWR(GSP_IO_MAGIC, GSP_GET_CAPABILITY, size)
#define GSP_IO_TRIGGER(async,cnt,split,size) \
{ _IOWR(GSP_IO_MAGIC, GSP_TRIGGER | (async) << GSP_ASYNC_SHIFT | \
(split) << GSP_SPLIT_SHIFT | (cnt) << GSP_CNT_SHIFT, size) \
}
#define GSP_CAPABILITY_MAGIC 0xDEEFBEEF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum gsp_layer_type {
  GSP_IMG_LAYER,
  GSP_OSD_LAYER,
  GSP_DES_LAYER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_INVAL_LAYER
};
enum gsp_addr_type {
  GSP_ADDR_TYPE_INVALUE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_ADDR_TYPE_PHYSICAL,
  GSP_ADDR_TYPE_IOVIRTUAL,
  GSP_ADDR_TYPE_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum gsp_irq_mod {
  GSP_IRQ_MODE_PULSE = 0x00,
  GSP_IRQ_MODE_LEVEL,
  GSP_IRQ_MODE_LEVEL_INVALID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum gsp_irq_type {
  GSP_IRQ_TYPE_DISABLE = 0x00,
  GSP_IRQ_TYPE_ENABLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_IRQ_TYPE_INVALID,
};
enum gsp_rot_angle {
  GSP_ROT_ANGLE_0 = 0x00,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_ROT_ANGLE_90,
  GSP_ROT_ANGLE_180,
  GSP_ROT_ANGLE_270,
  GSP_ROT_ANGLE_0_M,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_ROT_ANGLE_90_M,
  GSP_ROT_ANGLE_180_M,
  GSP_ROT_ANGLE_270_M,
  GSP_ROT_ANGLE_MAX_NUM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gsp_rgb {
  __u8 b_val;
  __u8 g_val;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 r_val;
  __u8 a_val;
};
struct gsp_pos {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 pt_x;
  __u16 pt_y;
};
struct gsp_rect {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 st_x;
  __u16 st_y;
  __u16 rect_w;
  __u16 rect_h;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gsp_addr_data {
  __u32 addr_y;
  __u32 addr_uv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 addr_va;
};
struct gsp_offset {
  __u32 uv_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 v_offset;
};
struct gsp_yuv_adjust_para {
  __u32 y_brightness;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 y_contrast;
  __u32 u_offset;
  __u32 u_saturation;
  __u32 v_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 v_saturation;
};
struct gsp_background_para {
  __u32 bk_enable;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 bk_blend_mod;
  struct gsp_rgb background_rgb;
};
struct gsp_scale_para {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 scale_en;
  __u32 htap_mod;
  __u32 vtap_mod;
  struct gsp_rect scale_rect_in;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_rect scale_rect_out;
};
struct gsp_layer_user {
  __u32 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 enable;
  __s32 share_fd;
  __s32 wait_fd;
  __s32 sig_fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_addr_data src_addr;
  struct gsp_offset offset;
};
#define CAPABILITY_MAGIC_NUMBER 0xDEEFBEEF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gsp_capability {
  __u32 magic;
  char version[32];
  __u32 capa_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 io_cnt;
  __u32 core_cnt;
  __u32 max_layer;
  __u32 max_img_layer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_rect crop_max;
  struct gsp_rect crop_min;
  struct gsp_rect out_max;
  struct gsp_rect out_min;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 buf_type;
};
#endif
