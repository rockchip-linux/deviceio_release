#ifndef __BT_TEST_H__
#define __BT_TEST_H__

#ifdef __cplusplus
extern "C" {
#endif

/******************************************/
/*        BT base server init             */
/******************************************/
void bt_test_init_open(void *data);

/******************************************/
/*               BLE Test                 */
/******************************************/
void bt_test_ble_start(void *data);
void bt_test_ble_write(void *data);
void bt_test_ble_get_status(void *data);
void bt_test_ble_stop(void *data);

/******************************************/
/*             A2DP SINK Test             */
/******************************************/
void bt_test_sink_open(void *data);
void bt_test_sink_visibility00(void *data);
void bt_test_sink_visibility01(void *data);
void bt_test_sink_visibility10(void *data);
void bt_test_sink_visibility11(void *data);
void bt_test_sink_music_play(void *data);
void bt_test_sink_music_pause(void *data);
void bt_test_sink_music_next(void *data);
void bt_test_sink_music_previous(void *data);
void bt_test_sink_music_stop(void *data);
void bt_test_sink_reconnect_enable(void *data);
void bt_test_sink_reconnect_disenable(void *data);
void bt_test_sink_disconnect(void *data);
void bt_test_sink_close(void *data);
void bt_test_sink_status(void *data);

/******************************************/
/*          A2DP SOURCE Test              */
/******************************************/
void bt_test_source_auto_start(void *data);
void bt_test_source_auto_stop(void *data);
void bt_test_source_connect_status(void *data);

/******************************************/
/*              SPP Test                  */
/******************************************/
void bt_test_spp_open(void *data);
void bt_test_spp_write(void *data);
void bt_test_spp_close(void *data);
void bt_test_spp_status(void *data);

#ifdef __cplusplus
}
#endif

#endif /* __BT_TEST_H__ */