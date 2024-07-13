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
enum {
  VSP_PW_DOMAIN_VSP = 0,
  VSP_PW_DOMAIN_VPP,
  VSP_PW_DOMAIN_VSP_ENC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  VSP_PW_DOMAIN_VSP_GSP,
  VSP_PW_DOMAIN_COUNT_MAX
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  VSP_PW_DOMAIN_OFF = 0,
  VSP_PW_DOMAIN_ON,
};
struct client_info_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  u8 pw_state;
  u8 pw_count;
};
struct vsp_pw_domain_info_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct client_info_t pw_vsp_info[VSP_PW_DOMAIN_COUNT_MAX];
  struct mutex client_lock;
  u8 vsp_pw_state;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
