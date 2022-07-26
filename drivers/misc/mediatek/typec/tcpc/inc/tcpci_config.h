/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __LINUX_TCPC_CONFIG_H
#define __LINUX_TCPC_CONFIG_H

#if IS_ENABLED(CONFIG_TCPC_CLASS)
/* default config */

#define CONFIG_TYPEC_CAP_A2C_C2C 0
#define CONFIG_TYPEC_USE_DIS_VBUS_CTRL	0
#define CONFIG_TYPEC_POWER_CTRL_INIT	1

#define CONFIG_TYPEC_CAP_TRY_SOURCE	1
#define CONFIG_TYPEC_CAP_TRY_SINK	1

#define CONFIG_TYPEC_CAP_DBGACC		1
#define CONFIG_TYPEC_CAP_DBGACC_SNK	0
#define CONFIG_TYPEC_CAP_CUSTOM_SRC	1
#define CONFIG_TYPEC_CAP_NORP_SRC	1
#define CONFIG_COMPATIBLE_APPLE_TA	1

#define CONFIG_RECV_BAT_ABSENT_NOTIFY	0

#define CONFIG_TYPEC_ATTACHED_SRC_SAFE0V_DELAY	0
#define CONFIG_TYPEC_ATTACHED_SRC_SAFE0V_TIMEOUT	1

#define CONFIG_TYPEC_CHECK_LEGACY_CABLE		1
#define CONFIG_TYPEC_CHECK_LEGACY_CABLE2	1
#define CONFIG_TYPEC_LEGACY2_AUTO_RECYCLE	1
#define CONFIG_TYPEC_CHECK_SRC_UNATTACH_OPEN	0

#define CONFIG_TYPEC_CAP_RA_DETACH		1
#define CONFIG_TYPEC_CAP_LPM_WAKEUP_WATCHDOG	1

#define CONFIG_TYPEC_CAP_POWER_OFF_CHARGE	1

#define CONFIG_TYPEC_CAP_ROLE_SWAP		1
#define CONFIG_TYPEC_CAP_ROLE_SWAP_TOUT		1200

#define CONFIG_TYPEC_CAP_DISCHARGE_TOUT		50

#define CONFIG_TYPEC_CAP_AUTO_DISCHARGE		1
#define CONFIG_TCPC_AUTO_DISCHARGE_IC		0

#define CONFIG_TYPEC_CAP_FORCE_DISCHARGE	1
#define CONFIG_TCPC_FORCE_DISCHARGE_IC		1
#define CONFIG_TCPC_FORCE_DISCHARGE_EXT		1

#define CONFIG_TYPEC_CAP_AUDIO_ACC_SINK_VBUS	1

#define CONFIG_TYPEC_CAP_LOW_RP_DUTY		1
#define CONFIG_TYPEC_WAKEUP_ONCE_LOW_DUTY	1

#define CONFIG_TYPEC_CAP_CUSTOM_HV		0

#define CONFIG_TYPEC_NOTIFY_ATTACHWAIT_SNK	1
#define CONFIG_TYPEC_NOTIFY_ATTACHWAIT_SRC	0

#define CONFIG_TCPC_ATTACH_WAKE_LOCK_TOUT	5000

#define CONFIG_TCPC_LOG_WITH_PORT_NAME		0

#if CONFIG_TCPC_LOG_WITH_PORT_NAME
#define CONFIG_TCPC_DBG_PRESTR		"{%s}TCPC-"
#else
#define CONFIG_TCPC_DBG_PRESTR		"TCPC-"
#endif /* CONFIG_TCPC_LOG_WITH_PORT_NAME */

/*
 * USB 2.0 & 3.0 current
 * Unconfigured :	100 / 150 mA
 * Configured :		500 / 900 mA
 * http://www.testusb.com/power_issue.htm
 */

#define CONFIG_TYPEC_SNK_CURR_DFT		100
#define CONFIG_TYPEC_SRC_CURR_DFT		500
#define CONFIG_TYPEC_SNK_CURR_LIMIT		0

#define CONFIG_TCPC_SOURCE_VCONN		1
#define CONFIG_TCPC_VCONN_SUPPLY_MODE		1

#define CONFIG_TCPC_VSAFE0V_DETECT		1
#define CONFIG_TCPC_VSAFE0V_DETECT_EXT		0
#define CONFIG_TCPC_VSAFE0V_DETECT_IC		1

#define CONFIG_TCPC_LPM_CONFIRM		1
#define CONFIG_TCPC_LPM_POSTPONE	1

#define CONFIG_TCPC_LOW_POWER_MODE	1
#define CONFIG_TCPC_CLOCK_GATING	1

#define CONFIG_TCPC_WATCHDOG_EN		0
#define CONFIG_TCPC_INTRST_EN		0
#define CONFIG_TCPC_I2CRST_EN		1

#define CONFIG_TCPC_SHUTDOWN_CC_DETACH	1
#define CONFIG_TCPC_SHUTDOWN_VBUS_DISABLE	1

#define CONFIG_TCPC_NOTIFIER_LATE_SYNC	1

#define CONFIG_TCPC_NOTIFICATION_NON_BLOCKING	1

/* debug config */
#define CONFIG_PD_BEGUG_ON 0

#if IS_ENABLED(CONFIG_USB_POWER_DELIVERY)
#include "tcpci_pd_config.h"
#else /* No CONFIG_USB_POWER_DELIVERY */
/* Experimental for CodeSize */
#define CONFIG_USB_PD_DR_SWAP	0
#define CONFIG_USB_PD_PR_SWAP	0
#define CONFIG_USB_PD_VCONN_SWAP	0
#define CONFIG_USB_PD_PE_SINK	0
#define CONFIG_USB_PD_PE_SOURCE	0
#define CONFIG_USB_PD_DISABLE_PE	0

#define CONFIG_USB_PD_TCPM_CB_RETRY		0
#define CONFIG_USB_PD_TCPM_CB_2ND	0
#define CONFIG_USB_PD_BLOCK_TCPM	0

#define CONFIG_USB_PD_RICHTEK_UVDM	0

/**********************************************************
 * Mode Operation
 **********************************************************/

#define CONFIG_USB_PD_MODE_OPERATION		0
#define CONFIG_USB_PD_ATTEMPT_ENTER_MODE	0

#define CONFIG_USB_PD_ALT_MODE	0
#define CONFIG_USB_PD_ALT_MODE_DFP	0
#define CONFIG_USB_PD_ALT_MODE_RTDC	0
#define CONFIG_USB_PD_DP_CHECK_CABLE	0
#define CONFIG_USB_PD_RTDC_CHECK_CABLE	0

/**********************************************************
 * PD revision 3.0 feature
 **********************************************************/

#define CONFIG_USB_PD_REV30	0

#define CONFIG_USB_PD_REV30_SYNC_SPEC_REV	0
#define CONFIG_USB_PD_REV30_COLLISION_AVOID	0
#define CONFIG_USB_PD_REV30_SRC_FLOW_DELAY_STARTUP	0
#define CONFIG_USB_PD_REV30_SNK_FLOW_DELAY_STARTUP	0
#define CONFIG_USB_PD_REV30_DISCOVER_CABLE_WITH_VCONN	0
#define CONFIG_USB_PD_REV30_SRC_CAP_EXT_LOCAL	0
#define CONFIG_USB_PD_REV30_SRC_CAP_EXT_REMOTE	0
#define CONFIG_USB_PD_REV30_BAT_CAP_LOCAL	0
#define CONFIG_USB_PD_REV30_BAT_CAP_REMOTE	0
#define CONFIG_USB_PD_REV30_BAT_STATUS_LOCAL	0
#define CONFIG_USB_PD_REV30_BAT_STATUS_REMOTE	0
#define CONFIG_USB_PD_REV30_MFRS_INFO_LOCAL	0
#define CONFIG_USB_PD_REV30_MFRS_INFO_REMOTE	0
#define CONFIG_USB_PD_REV30_COUNTRY_CODE_LOCAL	0
#define CONFIG_USB_PD_REV30_COUNTRY_CODE_REMOTE	0
#define CONFIG_USB_PD_REV30_COUNTRY_INFO_LOCAL	0
#define CONFIG_USB_PD_REV30_COUNTRY_INFO_REMOTE	0
#define CONFIG_USB_PD_REV30_ALERT_LOCAL	0
#define CONFIG_USB_PD_REV30_ALERT_REMOTE	0
#define CONFIG_USB_PD_REV30_STATUS_LOCAL	0
#define CONFIG_USB_PD_REV30_STATUS_REMOTE	0
#define CONFIG_USB_PD_REV30_CHUNKING_BY_PE	0
#define CONFIG_USB_PD_REV30_PPS_SINK		0
#define CONFIG_USB_PD_REV30_PPS_SOURCE		0
#define CONFIG_USB_PD_REV30_STATUS_LOCAL_TEMP	0
#define CONFIG_USB_PD_REV30_BAT_INFO		0
#define CONFIG_USB_PD_REV30_COUNTRY_AUTHORITY	0
#define CONFIG_USB_PD_DPM_AUTO_SEND_ALERT	0
#define CONFIG_USB_PD_DPM_AUTO_GET_STATUS	0
#define CONFIG_MTK_HANDLE_PPS_TIMEOUT		0

/* CONFIG_USB_PD_REV30 */

/**********************************************************
 * PD direct charge support
 **********************************************************/

#define CONFIG_USB_PD_DIRECT_CHARGE	0
#define CONFIG_USB_PD_DIRECT_CHARGE	0
#define CONFIG_USB_PD_KEEP_PARTNER_ID	0
#define CONFIG_USB_PD_KEEP_SVIDS	0
#define CONFIG_USB_PD_SRC_STARTUP_DISCOVER_ID	0
#define CONFIG_USB_PD_DFP_READY_DISCOVER_ID	0
#define CONFIG_USB_PD_RESET_CABLE	0
#define CONFIG_USB_PD_RANDOM_FLOW_DELAY	0
#define CONFIG_USB_PD_DFP_FLOW_DELAY	0
#define CONFIG_USB_PD_DFP_FLOW_DELAY_STARTUP	0
#define CONFIG_USB_PD_DFP_FLOW_DELAY_DRSWAP	0
#define CONFIG_USB_PD_DFP_FLOW_DELAY_RESET	0

#define CONFIG_USB_PD_DISCARD_AND_UNEXPECT_MSG	0

/* Only in startup */
#define CONFIG_USB_PD_UFP_FLOW_DELAY		0
#define CONFIG_USB_PD_VCONN_STABLE_DELAY	0
#define CONFIG_USB_PD_VCONN_SAFE5V_ONLY		0

#define CONFIG_USB_PD_ATTEMPT_DISCOVER_ID	0
#define CONFIG_USB_PD_ATTEMPT_DISCOVER_SVID	0

#define CONFIG_USB_PD_DISCOVER_CABLE_REQUEST_VCONN	0
#define CONFIG_USB_PD_DISCOVER_CABLE_RETURN_VCONN	0

#define CONFIG_USB_PD_PR_SWAP_ERROR_RECOVERY	0

#define CONFIG_USB_PD_CUSTOM_VDM	0
#define CONFIG_USB_PD_SVDM	0
#define CONFIG_USB_PD_UVDM	0

#define CONFIG_USB_PD_CUSTOM_DBGACC	0
#define CONFIG_USB_PD_SNK_DFT_NO_GOOD_CRC	0
#define CONFIG_USB_PD_IGNORE_PS_RDY_AFTER_PR_SWAP	0
#define CONFIG_USB_PD_VBUS_DETECTION_DURING_PR_SWAP	0
#define CONFIG_USB_PD_CHECK_RX_PENDING_IF_SRTOUT	0
#define CONFIG_USB_PD_ONLY_PRINT_SYSTEM_BUSY	0
#define CONFIG_USB_PD_TRY_TIMEDELAY_IF_SRTOUT   0
#define CONFIG_USB_PD_TRY_TIMEDELAY_MAX		0
#define CONFIG_USB_PD_RENEGOTIATION_COUNTER	0
#define CONFIG_USB_PD_ERROR_RECOVERY_ONCE	0

#define CONFIG_USB_PD_IGNORE_HRESET_COMPLETE_TIMER	0
#define CONFIG_USB_PD_DROP_REPEAT_PING			0
#define CONFIG_USB_PD_CHECK_DATA_ROLE			0
#define CONFIG_USB_PD_RETRY_CRC_DISCARD			0
#define CONFIG_USB_PD_PARTNER_CTRL_MSG_FIRST		0

#define CONFIG_USB_PD_SNK_HRESET_KEEP_DRAW		0
#define CONFIG_USB_PD_SNK_IGNORE_HRESET_IF_TYPEC_ONLY	0
#define CONFIG_USB_PD_SNK_STANDBY_POWER			0
#define CONFIG_USB_PD_SNK_GOTOMIN			0

#define CONFIG_USB_PD_SRC_HIGHCAP_POWER			0
#define CONFIG_USB_PD_SRC_TRY_PR_SWAP_IF_BAD_PW		0
#define CONFIG_USB_PD_SRC_REJECT_PR_SWAP_IF_GOOD_PW	0

#define CONFIG_USB_PD_TRANSMIT_BIST2		0
#define CONFIG_USB_PD_POSTPONE_VDM		0
#define CONFIG_USB_PD_POSTPONE_RETRY_VDM	0
#define CONFIG_USB_PD_POSTPONE_FIRST_VDM	0
#define CONFIG_USB_PD_POSTPONE_OTHER_VDM	0
#define CONFIG_USB_PD_STOP_SEND_VDM_IF_RX_BUSY	0
#define CONFIG_USB_PD_STOP_REPLY_VDM_IF_RX_BUSY	0

#define CONFIG_USB_PD_SAFE0V_DELAY		0
#define CONFIG_USB_PD_SAFE0V_TIMEOUT		1

#define CONFIG_USB_PD_DPM_SVDM_RETRY		0
#define CONFIG_USB_PD_DFP_FLOW_RETRY_MAX 0
#define CONFIG_USB_PD_VBUS_STABLE_TOUT 0
#define CONFIG_USB_PD_VBUS_PRESENT_TOUT	0
#define CONFIG_USB_PD_CUSTOM_VDM_TOUT	0
#define CONFIG_USB_PD_VCONN_READY_TOUT		0
#define CONFIG_USB_PD_DFP_FLOW_DLY	0
#define CONFIG_USB_PD_UFP_FLOW_DLY			0
#define CONFIG_USB_PD_PPS_REQUEST_INTERVAL	0
#define CONFIG_USB_PD_WAIT_BC12	0

#endif /* CONFIG_USB_POWER_DELIVERY */

#define CONFIG_USB_PD_DBG_ALWAYS_LOCAL_RP 0
#define CONFIG_USB_PD_DBG_IGRONE_TIMEOUT 0
/* debug config */
#define CONFIG_USB_PD_DBG_ALERT_STATUS	0
#define CONFIG_USB_PD_DBG_SKIP_ALERT_HANDLER	0
#define CONFIG_USB_PD_DBG_DP_DFP_D_AUTO_UPDATE	1
#define CONFIG_USB_PD_DBG_DP_UFP_U_AUTO_UPDATE 0
#define CONFIG_USB_PD_DBG_DP_UFP_U_AUTO_ATTENTION 0

/**********************************************************
 * TypeC Shield Protection
 **********************************************************/

#if IS_ENABLED(CONFIG_MTK_TYPEC_WATER_DETECT)
#define CONFIG_WATER_DETECTION	1
#else
#define CONFIG_WATER_DETECTION	0
#endif /* CONFIG_MTK_TYPEC_WATER_DETECT */

#if CONFIG_WATER_DETECTION
#define CONFIG_WD_SBU_POLLING	1
#define CONFIG_WATER_CALIBRATION	0
#define CONFIG_WD_SBU_CALIB_INIT	1800 /* mV */
#define CONFIG_WD_SBU_PL_BOUND		200 /* mV */
#define CONFIG_WD_SBU_PL_LBOUND_C2C	1100 /* mV */
#define CONFIG_WD_SBU_PL_UBOUND_C2C	2600 /* mV */
#define CONFIG_WD_SBU_PL_RETRY		2
#define CONFIG_WD_SBU_PH_RETRY		2
#define CONFIG_WD_SBU_PH_AUDDEV		200 /* mV */
#define CONFIG_WD_SBU_PH_LBOUND		1180 /* mV */
#define CONFIG_WD_SBU_PH_LBOUND1_C2C	2850 /* mV */
#define CONFIG_WD_SBU_PH_UBOUND1_C2C	3150 /* mV */
#define CONFIG_WD_SBU_PH_UBOUND2_C2C	3800 /* mV */
#define CONFIG_WD_SBU_AUD_UBOUND	1600 /* mV */
#define CONFIG_WD_PROTECT_RETRY_COUNT	3
#else
#define CONFIG_WD_SBU_POLLING	0
#endif /* CONFIG_WATER_DETECTION */

#if CONFIG_WD_SBU_POLLING
#define CONFIG_WD_POLLING_ONLY	1
#else
#define CONFIG_WD_POLLING_ONLY	0
#endif /* CONFIG_WD_SBU_POLLING */

#define CONFIG_CABLE_TYPE_DETECTION	1

#endif /* CONFIG_TCPC_CLASS */
#endif /* __LINUX_TCPC_CONFIG_H */