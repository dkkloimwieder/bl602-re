#ifndef __TD_H__
#define __TD_H__

#include <stdbool.h>
#include <stdint.h>

#include <mm/mm_timer.h>


enum td_status_bit {
    TD_STATUS_TX = 0,
    TD_STATUS_RX = 1,
    TD_STATUS_TX_PS = 2,
    TD_STATUS_RX_PS = 3,
};

struct td_env_tag {
    struct mm_timer_tag td_timer; // +0
    uint32_t pck_cnt_tx; // +16
    uint32_t pck_cnt_rx; // +20
    uint32_t pck_cnt_tx_ps; // +24
    uint32_t pck_cnt_rx_ps; // +28
    uint8_t vif_index; // +32
    uint8_t status; // +33
    bool is_on; // +34
    bool has_active_chan; // +35
};

extern struct td_env_tag td_env[2];

void td_init(void);
void td_reset(uint8_t vif_index);
void td_start(uint8_t vif_index);
void td_pck_ind(uint8_t vif_index, uint8_t sta_index, bool rx);
void td_pck_ps_ind(uint8_t vif_index, bool rx);
uint8_t td_get_status(uint8_t vif_index);
uint8_t td_get_ps_status(uint8_t vif_index);

#endif // __TD_H__
