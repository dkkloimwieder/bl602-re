#define BLE_BASE 0x28000000

#define BLE_REG_GET_ADDR(reg) (BLE_BASE + reg)

#define BLE_REG_74_OFFSET 0x74
#define BLE_REG_74_ADDR BLE_REG_GET_ADDR(BLE_REG_74_OFFSET)
#define BLE_REG_74 *((uint32_t*) BLE_REG_74_ADDR)

#define BLE_REG_100_OFFSET 0x100
#define BLE_REG_100_ADDR BLE_REG_GET_ADDR(BLE_REG_100_OFFSET)
#define BLE_REG_100 *((uint32_t*) BLE_REG_100_ADDR)
