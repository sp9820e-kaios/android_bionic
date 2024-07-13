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
#ifndef _IMS_BRIDGE_H
#define _IMS_BRIDGE_H
#include <linux/in.h>
#include <linux/in6.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum imsbr_call_state {
  IMSBR_CALLS_UNSPEC,
  IMSBR_CALLS_END,
  IMSBR_CALLS_VOWIFI,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IMSBR_CALLS_VOLTE,
  __IMSBR_CALLS_MAX
};
#define IMSBR_GENL_NAME "imsbr"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IMSBR_GENL_VERSION 0x1
union imsbr_inet_addr {
  __u32 all[4];
  __be32 ip;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __be32 ip6[4];
  struct in_addr in;
  struct in6_addr in6;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum imsbr_media_types {
  IMSBR_MEDIA_UNSPEC,
  IMSBR_MEDIA_SIP,
  IMSBR_MEDIA_RTP_AUDIO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IMSBR_MEDIA_RTP_VIDEO,
  IMSBR_MEDIA_RTCP_AUDIO,
  IMSBR_MEDIA_RTCP_VIDEO,
  __IMSBR_MEDIA_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum imsbr_link_types {
  IMSBR_LINK_UNSPEC,
  IMSBR_LINK_AP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IMSBR_LINK_CP,
  __IMSBR_LINK_MAX
};
enum imsbr_socket_types {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IMSBR_SOCKET_UNSPEC,
  IMSBR_SOCKET_AP,
  IMSBR_SOCKET_CP,
  __IMSBR_SOCKET_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct imsbr_tuple {
  union imsbr_inet_addr local_addr;
  union imsbr_inet_addr peer_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __be16 local_port;
  __be16 peer_port;
  __u16 l3proto;
  __u8 l4proto;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 media_type;
  __u16 link_type;
  __u16 socket_type;
  __u32 sim_card;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum imsbr_attrs {
  IMSBR_A_UNSPEC,
  IMSBR_A_CALL_STATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IMSBR_A_TUPLE,
  IMSBR_A_SIMCARD,
  __IMSBR_A_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IMSBR_A_MAX (__IMSBR_A_MAX - 1)
enum imsbr_commands {
  IMSBR_C_UNSPEC,
  IMSBR_C_CALL_STATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IMSBR_C_ADD_TUPLE,
  IMSBR_C_DEL_TUPLE,
  IMSBR_C_RESET_TUPLE,
  __IMSBR_C_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IMSBR_C_MAX (__IMSBR_C_MAX - 1)
#endif
