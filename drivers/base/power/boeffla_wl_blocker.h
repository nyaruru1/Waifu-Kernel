/*
 * Author: andip71, 01.09.2017
 *
 * Version 1.1.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"1.1.0"

#define LIST_WL_DEFAULT			"19f00000.decon_0;wlan_wake;wlan_ctrl_wake;wlan_txfl_wake;wlan_rx_wake;;wlan_scan_wake;wlan_pm_wake;nfc_wake_lock;bluetooth_timer;BT_bt_wake;BT_host_wake;bbd_wake_lock;ssp_sensorhub_wake_lock;ssp_wake_lock;ssp_comm_wake_lock;abox;mmc0_detect;IPA_WS;wlan_ipa;wlan_pno_wl;wcnss_filter_lock;tftp_server_wakelock;otg_default;fp_ws;IPA_CLIENT_APPS_LAN_CONS;IPA_CLIENT_APPS_WAN_CONS;rmnet_ipa%d;NETLINK;alarmtimer;qcom_rx_wakelock"

#define LENGTH_LIST_WL			1024
#define LENGTH_LIST_WL_DEFAULT		(sizeof(LIST_WL_DEFAULT))
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5
