#ifndef __LINUX_VLAN_MON_H
#define __LINUX_VLAN_MON_H

#include <linux/types.h>

enum {
	VLAN_MON_CMD_NOOP,
	VLAN_MON_CMD_ADD,
	VLAN_MON_CMD_ADD_VID,
	VLAN_MON_CMD_DEL,
	VLAN_MON_NOTIFY,
	__VLAN_MON_CMD_MAX,
};

#define VLAN_MON_CMD_MAX	(__VLAN_MON_CMD_MAX - 1)

enum {
	VLAN_MON_ATTR_NONE,	   /* u32 */
	VLAN_MON_ATTR_VLAN_MASK,	   /* u32 */
	VLAN_MON_ATTR_PROTO,	   /* u32 */
	VLAN_MON_ATTR_IFINDEX,	   /* u32 */
	VLAN_MON_ATTR_VID,	   /* u32 */
	__VLAN_MON_ATTR_MAX,
};

#define VLAN_MON_ATTR_MAX	(__VLAN_MON_ATTR_MAX - 1)

/*
 * NETLINK_GENERIC related info
 */
#define VLAN_MON_GENL_NAME	"vlan-mon"
#define VLAN_MON_GENL_MCG	"notify"
#define VLAN_MON_GENL_VERSION	0x01

#endif

