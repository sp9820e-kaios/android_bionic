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
#ifndef _SPRD_DMA_COPY_K_H_
#define _SPRD_DMA_COPY_K_H_
typedef enum {
  DMA_COPY_YUV422 = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  DMA_COPY_YUV420,
  DMA_COPY_YUV400,
  DMA_COPY_RGB888,
  DMA_COPY_RGB666,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  DMA_COPY_RGB565,
  DMA_COPY_RGB555,
  DMA_COPY_FMT_MAX
} DMA_COPY_DATA_FORMAT_E;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct _dma_copy_size_tag {
  uint32_t w;
  uint32_t h;
} DMA_COPY_SIZE_T;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct _dma_copy_rect_tag {
  uint32_t x;
  uint32_t y;
  uint32_t w;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t h;
} DMA_COPY_RECT_T;
typedef struct _dma_copy_addr_tag {
  uintptr_t y_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uintptr_t uv_addr;
} DMA_COPY_ADDR_T;
typedef struct _dma_copy_cfg_tag {
  DMA_COPY_DATA_FORMAT_E format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  DMA_COPY_SIZE_T src_size;
  DMA_COPY_RECT_T src_rec;
  DMA_COPY_ADDR_T src_addr;
  DMA_COPY_ADDR_T dst_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} DMA_COPY_CFG_T, * DMA_COPY_CFG_T_PTR;
#endif
