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
#ifndef _ISP_DRV_KERNEL_H_
#define _ISP_DRV_KERNEL_H_
#include <linux/time.h>
#define ISP_FW_BUF_SIZE 0x500000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_SHARE_BUFF_SIZE 0x100000
#define ISP_WORKING_BUF_SIZE 0xE00000
#define ISP_STATISTICS_BUF_SIZE (230 * 1024)
#define ISP_AF_STATISTICS_BUF_SIZE (20 * 1024)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IRP_BIN_BUF_SIZE 0x100000
#define ISP_SHADING_BIN_BUF_SIZE 0x4b000
#define ISP_CBC_BIN_BUF_SIZE 0x80000
#define ISP_WORKING_BUF_BASE (ISP_FW_BUF_SIZE + ISP_SHARE_BUFF_SIZE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_STATISTICS_BUF_BASE (ISP_WORKING_BUF_BASE + ISP_WORKING_BUF_SIZE)
#define ISP_AF_STATISTICS_BUF_BASE (ISP_STATISTICS_BUF_BASE + (ISP_STATISTICS_BUF_SIZE * 5 * 3))
#define ISP_IRP_BIN_BASE (ISP_AF_STATISTICS_BUF_BASE + (ISP_AF_STATISTICS_BUF_SIZE * 5 * 3))
#define ISP_SHADING_BIN_BASE (ISP_IRP_BIN_BASE + ISP_IRP_BIN_BUF_SIZE * 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_CBC_BIN_BASE (ISP_SHADING_BIN_BASE + ISP_SHADING_BIN_BUF_SIZE * 3)
#define ISP_BUF_SIZE (ISP_CBC_BIN_BASE + ISP_CBC_BIN_BUF_SIZE * 3)
#define IMG_BUF_NUM_MAX 4
#define MAXSEQLEN 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BRIGHTNESS_SIZE 7
#define IQ_CCM_INFO 9
#define ISP_LSC_MAX_LENGTH 1800
#define ISP_RAWBUF_NUM 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_AE_IQ_INFO_SIZE (16)
#define IRP_TUNING_DEBUG_IDX (3)
#define IRP_TUNING_DEBUG_INFO (6)
#define IRP_TUNING_DEBUG_BYPASS (5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IRP_TUNING_DEBUG_CCM (9)
#define IRP_TUNING_DEBUG_PARA_ADDR (56)
#define IRP_TUNING_DEBUG_RESERVED (5)
#define IRP_TUNING_DEBUG_BVTH (4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum isp_img_output_id {
  ISP_IMG_PREVIEW = 0,
  ISP_IMG_VIDEO,
  ISP_IMG_STILL_CAPTURE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_IMG_STATISTICS,
  ISP_IMG_AF_STATISTICS,
  ISP_IMG_RAW,
  ISP_OUTPUT_IMG_TOTAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum isp_rtn {
  ISP_IMG_TX_DONE = 0x20,
  ISP_IMG_NO_MEM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_IMG_TX_ERR,
  ISP_IMG_SYS_BUSY,
  ISP_IMG_TIMEOUT,
  ISP_IMG_TX_STOP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum isp_irq_type {
  ISP_IRQ_3A_SOF = 0x20,
  ISP_IRQ_STATIS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_IRQ_AF_STATIS,
  ISP_IRQ_IMG,
  ISP_IRQ_CFG_BUF,
  ISP_IRQ_ALTEK_RAW,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum isp_output_img_format {
  ISP_OUT_IMG_RAW10 = 0,
  ISP_OUT_IMG_NV12,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_OUT_IMG_YUY2,
  ISP_OUT_IMG_FORMAT_TOTAL,
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SHARPNESS_LV0 = 0,
  ISP_SHARPNESS_LV1,
  ISP_SHARPNESS_LV2,
  ISP_SHARPNESS_LV3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SHARPNESS_LV4,
  ISP_SHARPNESS_LV5,
  ISP_SHARPNESS_LV6,
  ISP_SHARPNESS_LV7,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SHARPNESS_LV8,
  ISP_SHARPNESS_TOTAL
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SATURATION_LV0,
  ISP_SATURATION_LV1,
  ISP_SATURATION_LV2,
  ISP_SATURATION_LV3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SATURATION_LV4,
  ISP_SATURATION_LV5,
  ISP_SATURATION_LV6,
  ISP_SATURATION_LV7,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SATURATION_LV8,
  ISP_SATURATION_TOTAL
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SPECIAL_EFFECT_OFF,
  ISP_SPECIAL_EFFECT_NEGATIVE,
  ISP_SPECIAL_EFFECT_SOLARIZE,
  ISP_SPECIAL_EFFECT_GRAYSCALE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SPECIAL_EFFECT_SEPIA,
  ISP_SPECIAL_EFFECT_REDPOINTS,
  ISP_SPECIAL_EFFECT_GREENPOINTS,
  ISP_SPECIAL_EFFECT_BLUEPOINTS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SPECIAL_EFFECT_REDYELLOWPOINTS,
  ISP_SPECIAL_EFFECT_WARMVINTAGE,
  ISP_SPECIAL_EFFECT_COLDVINTAGE,
  ISP_SPECIAL_EFFECT_WASHOUT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_SPECIAL_EFFECT_POSTERISE,
  ISP_SPECIAL_EFFECT_USERDEFINED,
  ISP_SPECIAL_EFFECT_TOTAL
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  ISP_CONTRAST_LV0,
  ISP_CONTRAST_LV1,
  ISP_CONTRAST_LV2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CONTRAST_LV3,
  ISP_CONTRAST_LV4,
  ISP_CONTRAST_LV5,
  ISP_CONTRAST_LV6,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CONTRAST_LV7,
  ISP_CONTRAST_LV8,
  ISP_CONTRAST_TOTAL
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum isp_cfg_param {
  ISP_CFG_SET_ISO_SPEED,
  ISP_CFG_SET_AWB_GAIN,
  ISP_CFG_SET_DLD_SEQUENCE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CFG_SET_3A_CFG,
  ISP_CFG_SET_AE_CFG,
  ISP_CFG_SET_AF_CFG,
  ISP_CFG_SET_AWB_CFG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CFG_SET_YHIS_CFG,
  ISP_CFG_SET_SUB_SAMP_CFG,
  ISP_CFG_SET_AFL_CFG,
  ISP_CFG_SET_DLD_SEQ_BASIC_PREV,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CFG_SET_DLD_SEQ_ADV_PREV,
  ISP_CFG_SET_DLD_SEQ_BASIC_FAST_CONV,
  ISP_CFG_SET_SCENARIO_INFO,
  ISP_CFG_SET_SHARPNESS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CFG_SET_SATURATION,
  ISP_CFG_SET_CONTRAST,
  ISP_CFG_SET_SPECIAL_EFFECT,
  ISP_CFG_SET_AWB_GAIN_BALANCED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CFG_SET_BRIGHTNESS_GAIN,
  ISP_CFG_SET_BRIGHTNESS_MODE,
  ISP_CFG_SET_COLOR_TEMPERATURE,
  ISP_CFG_SET_CCM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CFG_SET_VALID_ADGAIN,
  ISP_CFG_SET_VALID_EXP_TIME,
  ISP_CFG_SET_IQ_OTP_INFO,
  ISP_CFG_SET_SOF_PARAM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CFG_SET_D_GAIN,
  ISP_CFG_SET_Y_OFFSET,
  ISP_CFG_SET_TOTAL
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum isp_dev_capability {
  ISP_GET_FW_BUF_SIZE,
  ISP_GET_STATIS_BUF_SIZE,
  ISP_GET_DRAM_BUF_SIZE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_GET_HIGH_ISO_BUF_SIZE,
  ISP_GET_CONTINUE_SIZE,
  ISP_GET_SINGLE_SIZE,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum isp_dev_read_id {
  ISP_IMG_GET_STATISTICS_FRAME = 0,
  ISP_IMG_GET_FRAME,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum isp_dev_write_id {
  ISP_IMG_STOP_ISP = 0,
};
enum scinfo_sensor_mod_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SENSOR_MODULE_TYPE_IMX214 = 0,
};
enum scinfo_color_order {
  COLOR_ORDER_RG = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  COLOR_ORDER_GR,
  COLOR_ORDER_GB,
  COLOR_ORDER_BG
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  ISP_OUTPUT_RAW10,
  ISP_OUTPUT_NV12,
  ISP_OUTPUT_YUY2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_OUTPUT_ALTEK_RAW10,
  ISP_OUTPUT_TYPE_TOTAL
};
enum isp_tuning_index {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_INDEX_PREVIEW_FULL = 0,
  ISP_INDEX_PREVIEW_BINING,
  ISP_INDEX_STILL_FULL,
  ISP_INDEX_STILL_BINING,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_INDEX_VIDEO_SLOW_MOTION,
  ISP_INDEX_MAX
};
typedef uint16_t u16;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int16_t s16;
typedef uint32_t u32;
typedef uint8_t u8;
typedef int8_t s8;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isp_awb_gain_info {
  uint16_t r;
  uint16_t g;
  uint16_t b;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_brightness_gain {
  uint16_t uw_gain[BRIGHTNESS_SIZE];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isp_iq_ccm_info {
  int32_t ad_ccm[IQ_CCM_INFO];
};
struct isp_iq_otp_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint8_t cali_status;
  uint16_t iso;
  uint16_t r_gain;
  uint16_t g_gain;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint16_t b_gain;
  uint8_t lsc[ISP_LSC_MAX_LENGTH];
  uint16_t lsc_length;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isp_func_ae_info {
  uint32_t update_iso;
  uint32_t update_mean;
  int32_t update_bv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int32_t update_bgbv;
  uint8_t valid_flg;
  uint8_t reserved[ISP_AE_IQ_INFO_SIZE];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isp_sof_cfg_info {
  struct isp_awb_gain_info awb_gain;
  struct isp_awb_gain_info awb_b_gain;
  struct isp_func_ae_info iq_ae_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t color_temp;
  uint32_t iso_val;
  uint32_t is_update;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum mid_mode {
  MF_51_MODE,
  MF_31_MODE,
  MF_DISABLE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#pragma pack(push)
#pragma pack(4)
struct statistics_dld_region {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 border_ratio_x;
  u16 border_ratio_y;
  u16 blk_num_x;
  u16 blk_num_y;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 offset_ratio_x;
  u16 offset_ratio_y;
};
#pragma pack(pop)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(push)
#pragma pack(4)
struct ae_cfg_info {
  u16 token_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct statistics_dld_region ae_region;
};
#pragma pack(pop)
#pragma pack(push)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(4)
struct awbhis {
  u16 enable;
  s8 cr_start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  s8 cr_end;
  s8 offset_up;
  s8 offset_down;
  s8 cr_purple;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 offset_purple;
  s8 grass_offset;
  s8 grass_start;
  s8 grass_end;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 damp_grass;
  s8 offset_bbr_w_start;
  s8 offset_bbr_w_end;
  u8 yfac_w;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u32 his_interp;
};
#pragma pack(pop)
#pragma pack(push)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(4)
struct awb_cfg_info {
  u16 token_id;
  struct statistics_dld_region awb_region;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 y_factor[16];
  s8 bbr_factor[33];
  u16 r_gain;
  u16 g_gain;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 b_gain;
  u8 cr_shift;
  u8 offset_shift;
  u8 quantize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 damp;
  u8 sum_shift;
  struct awbhis t_his;
  u16 r_linear_gain;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 b_linear_gain;
};
#pragma pack(pop)
#pragma pack(push)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(4)
struct af_statistics_dld_region {
  u16 size_ratio_x;
  u16 size_ratio_y;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 blk_num_x;
  u16 blk_num_y;
  u16 offset_ratio_x;
  u16 offset_ratio_y;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#pragma pack(pop)
#pragma pack(push)
#pragma pack(4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct af_cfg_info {
  u16 token_id;
  struct af_statistics_dld_region af_region;
  u16 enable_af_lut;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 lut[259];
  u16 af_lut[259];
  u8 weight[6];
  u16 sh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 th_mode;
  u8 index[82];
  u16 th[4];
  u16 tv[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u32 af_offset;
  u16 af_py_enable;
  u16 af_lpf_enable;
  enum mid_mode filter_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 filter_id;
  u16 line_cnt;
};
#pragma pack(pop)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(push)
#pragma pack(4)
struct yhis_cfg_info {
  u16 token_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct statistics_dld_region yhis_region;
};
#pragma pack(pop)
#pragma pack(push)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(4)
struct antiflicker_cfg_info {
  u16 token_id;
  u16 offset_ratio_x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 offset_ratio_y;
};
#pragma pack(pop)
#pragma pack(push)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(4)
struct subsample_cfg_info {
  u16 token_id;
  u32 buffer_image_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 offset_ratio_x;
  u16 offset_ratio_y;
};
#pragma pack(pop)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(push)
#pragma pack(4)
struct dld_sequence {
  u8 preview_baisc_dld_seq_length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 preview_adv_dld_seq_length;
  u8 fast_converge_baisc_dld_seq_length;
  u8 preview_baisc_dld_seq[MAXSEQLEN];
  u8 preview_adv_dld_seq[MAXSEQLEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 fast_converge_baisc_dld_seq[MAXSEQLEN];
};
#pragma pack(pop)
#pragma pack(push)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(4)
struct cfg_3a_info {
  u32 magic_num;
  struct ae_cfg_info ae_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct awb_cfg_info awb_info;
  struct af_cfg_info af_info;
  struct yhis_cfg_info yhis_info;
  struct antiflicker_cfg_info antiflicker_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct subsample_cfg_info subsample_info;
};
#pragma pack(pop)
struct scinfo_mode_info_isp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 ucSensorMode;
  enum scinfo_sensor_mod_type ucSensorMouduleType;
  u16 uwOriginalWidth;
  u16 uwOriginalHeight;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 uwCropStartX;
  u16 uwCropStartY;
  u16 uwCropEndX;
  u16 uwCropEndY;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 uwWidth;
  u16 uwHeight;
  u16 uwFrameRate;
  u32 udLineTime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  enum scinfo_color_order nColorOrder;
  u16 uwClampLevel;
  u8 ucFormat;
  u8 ucBitNumber;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 ucMirrorFlip;
  u8 cbc_enabled;
};
struct scinfo_out_bypassflg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 bBypassLV;
  u8 bBypassVideo;
  u8 bBypassStill;
  u8 bBypassMetaData;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct scinfo_bayerscl_out_info {
  u16 uwBayerSCLOutWidth;
  u16 uwBayerSCLOutHeight;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct scinfo_iq_param_idx_info {
  u8 iq_param_idx_lv;
  u8 iq_param_idx_video;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 iq_param_idx_still;
};
struct scenario_info_ap {
  struct scinfo_mode_info_isp tSensorInfo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct scinfo_out_bypassflg tScenarioOutBypassFlag;
  struct scinfo_bayerscl_out_info tBayerSCLOutInfo;
  struct scinfo_iq_param_idx_info tIqParamIdxInfo;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum e_alek_scinfo_color_order {
  E_ALEK_SCINFO_COLOR_ORDER_RG = 0,
  E_ALEK_SCINFO_COLOR_ORDER_GR,
  E_ALEK_SCINFO_COLOR_ORDER_GB,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  E_ALEK_SCINFO_COLOR_ORDER_BG
};
#pragma pack(push)
#pragma pack(4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct altek_raw_info {
  u16 width;
  u16 height;
  u8 format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 bit_number;
  u8 mirror_flip;
  enum e_alek_scinfo_color_order n_color_order;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack()
#pragma pack(push)
#pragma pack(4)
struct altek_shading_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 balanced_awb_gain_r;
  u16 balanced_awb_gain_g;
  u16 balanced_awb_gain_b;
  u8 orientation;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 sensorid;
  u8 otpstatus;
  u8 otp_version;
  u16 shading_w;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 shading_h;
  u16 h_r_gain;
  u16 m_r_gain;
  u16 l_r_gain;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 cur_r_gain;
  u16 cur_b_gain;
  u16 cur_proj_x;
  u16 cur_proj_y;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 r_p_run;
  u8 b_p_run;
  u8 ext_orientation;
  u8 ext_sensorid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 ext_h_r_gain;
  u16 ext_m_r_gain;
  u16 ext_l_r_gain;
  u16 ext_cur_proj_x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 ext_cur_proj_y;
  u8 ext_otpstatus;
  u8 ext_r_p_run;
  u8 ext_b_p_run;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 shadtableflag;
  u8 ver_number[12];
  u32 tuning_version;
  u16 iso_step;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 reserved[18];
};
#pragma pack()
#pragma pack(push)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(4)
struct altek_irp_info {
  u32 qmerge_ver;
  u32 tool_ver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u32 tuning_ver;
  u8 idx[IRP_TUNING_DEBUG_IDX];
  u8 sensor_id;
  u16 sensor_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 sensor_mode;
  u8 quality_path;
  u16 bayer_scalar_w;
  u16 bayer_scalar_h;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 isp_output_w;
  u16 isp_output_h;
  u8 verify_debug[IRP_TUNING_DEBUG_INFO];
  u8 func_bypass[IRP_TUNING_DEBUG_BYPASS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 awb_gain_r;
  u16 awb_gain_g;
  u16 awb_gain_b;
  u16 black_offset_r;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 black_offset_g;
  u16 black_offset_b;
  u16 iso_speed;
  u32 color_tempature;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  s16 ae_bv;
  s16 bv_th_tone[IRP_TUNING_DEBUG_BVTH];
  s16 db_th_ccm[IRP_TUNING_DEBUG_BVTH];
  s16 bv_th_3dlut[IRP_TUNING_DEBUG_BVTH];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  s16 ccm[IRP_TUNING_DEBUG_CCM];
  u32 para_addr[IRP_TUNING_DEBUG_PARA_ADDR];
  u32 reserved[IRP_TUNING_DEBUG_RESERVED];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack()
#pragma pack(push)
#pragma pack(4)
struct altek_irp_gamma_tone {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u16 auwGamaTone[1027];
};
#pragma pack()
#pragma pack(push)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(4)
struct altek_sw_info {
  u8 sharpness_level;
  u8 saturation_level;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 contrast_level;
  u8 brightness_value;
  u8 special_effect;
  u8 reserver[59];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#pragma pack()
#pragma pack(push)
#pragma pack(4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct altek_iq_info_1 {
  struct altek_raw_info raw_info;
  struct altek_shading_info shading_info;
  struct altek_irp_info irp_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct altek_sw_info sw_info;
};
#pragma pack()
#pragma pack(push)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(4)
struct altek_iq_info_2 {
  struct altek_irp_gamma_tone tGammaTone;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack()
#pragma pack(push)
#pragma pack(4)
struct altek_iq_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct altek_iq_info_1 iq_info_1;
  struct altek_iq_info_2 iq_info_2;
};
#pragma pack()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack(push)
#pragma pack(4)
struct altek_d_gain_info {
  u32 isp_d_gain_r;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u32 isp_d_gain_gr;
  u32 isp_d_gain_gb;
  u32 isp_d_gain_b;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#pragma pack()
struct sprd_isp_time {
  uint32_t sec;
  uint32_t usec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_statis_buf {
  uint32_t buf_size;
  unsigned long phy_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long vir_addr;
};
struct isp_cfg_img_buf {
  uint32_t format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t img_id;
  uint32_t width;
  uint32_t height;
  unsigned long yaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long uaddr;
  unsigned long vaddr;
  unsigned long yaddr_vir;
  unsigned long uaddr_vir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long vaddr_vir;
};
struct isp_statis_frame_output {
  uint32_t format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t buf_size;
  unsigned long phy_addr;
  unsigned long vir_addr;
  struct sprd_isp_time time_stamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_statis_frame {
  uint32_t format;
  uint32_t evt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t buf_size;
  unsigned long phy_addr;
  unsigned long vir_addr;
  struct sprd_isp_time time_stamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_addr {
  unsigned long chn0;
  unsigned long chn1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long chn2;
};
struct isp_cfg_img_param {
  uint32_t img_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t dram_eb;
  uint32_t format;
  uint32_t width;
  uint32_t height;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t buf_num;
  struct isp_addr addr[IMG_BUF_NUM_MAX];
  struct isp_addr addr_vir[IMG_BUF_NUM_MAX];
  int32_t addr_mfd[IMG_BUF_NUM_MAX];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t line_offset;
};
struct isp_img_frame_output {
  uint32_t format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t fid;
  uint32_t channel_id;
  uint32_t base_id;
  uint32_t img_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t irq_id;
  uint32_t width;
  uint32_t height;
  uint32_t yaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t uaddr;
  uint32_t vaddr;
  uint32_t yaddr_vir;
  uint32_t uaddr_vir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t vaddr_vir;
  uint32_t img_y_fd;
  uint32_t img_u_fd;
  uint32_t img_v_fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct sprd_isp_time time_stamp;
};
struct isp_img_size {
  uint32_t width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t height;
};
struct isp_irq_info {
  uint32_t irq_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t irq_flag;
  uint32_t format;
  uint32_t channel_id;
  uint32_t base_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t img_id;
  uint32_t irq_id;
  uint32_t sensor_id;
  uint32_t statis_cnt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long yaddr;
  unsigned long uaddr;
  unsigned long vaddr;
  unsigned long yaddr_vir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long uaddr_vir;
  unsigned long vaddr_vir;
  uint32_t img_y_fd;
  uint32_t img_u_fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t img_v_fd;
  unsigned long length;
  struct isp_img_size buf_size;
  struct sprd_isp_time time_stamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t frm_index;
};
struct isp_awb_match_gain_info {
  uint16_t r;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint16_t g;
  uint16_t b;
};
struct isp_awb_match_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct isp_awb_match_gain_info gain;
  struct isp_awb_match_gain_info gain_balanced;
  struct isp_awb_match_gain_info gain_flash_off;
  struct isp_awb_match_gain_info gain_capture;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t ct;
  uint32_t ct_flash_off;
  uint32_t ct_capture;
  uint32_t is_update;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint16_t light_source;
  uint32_t awb_states;
  uint16_t awb_decision;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isp_ae_match_data {
  uint32_t iso;
  uint32_t exif_iso;
  uint32_t exposure_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t exposure_line;
  uint32_t sensor_ad_gain;
  uint32_t isp_d_gain;
  uint16_t uw_cur_fps;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int32_t bv_val;
  uint8_t uc_sensor_mode;
};
enum isp_match_data_op {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_GET_MATCH_AE_DATA,
  ISP_SET_MATCH_AE_DATA,
  ISP_GET_MATCH_AWB_DATA,
  ISP_SET_MATCH_AWB_DATA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_match_data_param {
  enum isp_match_data_op op;
  union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    struct isp_awb_match_data awb_data;
    struct isp_ae_match_data ae_data;
  };
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isp_img_read_op {
  uint32_t cmd;
  uint32_t evt;
  union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    struct isp_statis_frame_output statis_frame;
    struct isp_img_frame_output img_frame;
    struct isp_irq_info irq_info;
  } param;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_img_write_op {
  uint32_t cmd;
  uint32_t reserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_init_mem_param {
  uint32_t fw_buf_size;
  signed int fw_buf_mfd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  signed int fw_buf_dev_fd;
  unsigned long fw_buf_vir_addr;
  unsigned long long fw_buf_phy_addr;
  uint32_t shading_bin_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long dram_buf_vir_addr;
  unsigned long dram_buf_phy_addr;
  uint32_t irp_bin_offset;
  uint32_t cbc_bin_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t pdaf_supported;
  unsigned long high_iso_buf_vir_addr;
  unsigned long high_iso_phy_addr;
  uint32_t af_stats_independence;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_dev_init_param {
  uint32_t camera_id;
  uint32_t width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t height;
  uint32_t raw_mode;
};
struct isp_io_param {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t sub_id;
  void __user * property_param;
  uint32_t reserved;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isp_capability {
  uint32_t index;
  void __user * property_param;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isp_raw_data {
  int32_t fd[ISP_RAWBUF_NUM];
  uint32_t phy_addr[ISP_RAWBUF_NUM];
  uint64_t virt_addr[ISP_RAWBUF_NUM];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t size;
  uint32_t width;
  uint32_t height;
  uint32_t fmt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t cnt;
};
struct isp_hiso_data {
  int32_t fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int phy_addr;
  unsigned int virt_addr;
  uint32_t size;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isp_img_mem {
  uint32_t img_fmt;
  uint32_t channel_id;
  uint32_t base_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t width;
  uint32_t height;
  uint32_t is_reserved_buf;
  uint32_t img_y_fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t img_u_fd;
  uint32_t img_v_fd;
  unsigned long yaddr;
  unsigned long uaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long vaddr;
  unsigned long yaddr_vir;
  unsigned long uaddr_vir;
  unsigned long vaddr_vir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_frm_info {
  uint32_t channel_id;
  uint32_t frame_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t frame_real_id;
  uint32_t height;
  uint32_t sec;
  uint32_t usec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t length;
  uint32_t base;
  uint32_t fmt;
  unsigned long yaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long uaddr;
  unsigned long vaddr;
  unsigned long yaddr_vir;
  unsigned long uaddr_vir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long vaddr_vir;
  uint32_t zsl_private;
  uint32_t fd;
  uint32_t monoboottime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define ISP_IO_MAGIC 'R'
#define ISP_IO_LOAD_FW _IOW(ISP_IO_MAGIC, 0, struct isp_init_mem_param)
#define ISP_IO_IRQ _IOR(ISP_IO_MAGIC, 1, struct isp_irq_info)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_SET_STATIS_BUF _IOW(ISP_IO_MAGIC, 2, struct isp_statis_buf)
#define ISP_IO_SET_IMG_BUF _IOW(ISP_IO_MAGIC, 3, struct isp_cfg_img_buf)
#define ISP_IO_SET_IMG_PARAM _IOW(ISP_IO_MAGIC, 4, struct isp_cfg_img_param)
#define ISP_IO_STREAM_ON _IOW(ISP_IO_MAGIC, 5, uint32_t)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_STREAM_OFF _IOW(ISP_IO_MAGIC, 6, uint32_t)
#define ISP_IO_SET_INIT_PARAM _IOW(ISP_IO_MAGIC, 7, struct isp_dev_init_param)
#define ISP_IO_STOP _IOW(ISP_IO_MAGIC, 8, uint32_t)
#define ISP_IO_CAPABILITY _IOR(ISP_IO_MAGIC, 9, struct isp_capability)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_CFG_PARAM _IOWR(ISP_IO_MAGIC, 10, struct isp_io_param)
#define ISP_IO_GET_TIME _IOR(ISP_IO_MAGIC, 11, struct sprd_isp_time)
#define ISP_IO_GET_STATIS_BUF _IOR(ISP_IO_MAGIC, 12, struct isp_irq_info)
#define ISP_IO_GET_ISP_ID _IOR(ISP_IO_MAGIC, 13, uint32_t)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_GET_IQ_PARAM _IOR(ISP_IO_MAGIC, 14, struct altek_iq_info)
#define ISP_IO_SET_RAW10 _IOW(ISP_IO_MAGIC, 15, struct isp_raw_data)
#define ISP_IO_SET_POST_PROC_YUV _IOW(ISP_IO_MAGIC, 16, struct isp_img_mem)
#define ISP_IO_SET_FETCH_SRC_BUF _IOW(ISP_IO_MAGIC, 17, struct isp_img_mem)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_SET_CAP_MODE _IOW(ISP_IO_MAGIC, 18, uint32_t)
#define ISP_IO_SET_SKIP_NUM _IOW(ISP_IO_MAGIC, 19, uint32_t)
#define ISP_IO_SET_HISO _IOW(ISP_IO_MAGIC, 20, struct isp_hiso_data)
#define ISP_IO_CFG_CAP_BUF _IOW(ISP_IO_MAGIC, 21, struct isp_img_mem)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_GET_USER_CNT _IOR(ISP_IO_MAGIC, 22, int32_t)
#define ISP_IO_MATCH_DATA_CTRL _IOW(ISP_IO_MAGIC, 23, struct isp_match_data_param)
#define ISP_IO_PROC_STILL _IOW(ISP_IO_MAGIC, 24, uint32_t)
#define ISP_IO_SET_DECI_NUM _IOW(ISP_IO_MAGIC, 25, uint32_t)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_SEL_TUNING_IQ _IOW(ISP_IO_MAGIC, 26, uint32_t)
#define ISP_IO_GET_IMG_IQ_PARAM _IOR(ISP_IO_MAGIC, 27, struct altek_iq_info)
#endif
