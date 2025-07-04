typedef struct {
    int32_t length;
    int32_t padding;
    uint16_t buttons_high; 
    uint16_t buttons_low;

    uint16_t right_analog_x;
    uint16_t right_analog_y;
    uint16_t left_analog_x;
    uint16_t left_analog_y;
} cellPadData;

typedef struct __attribute__((packed)) {
    uint8_t buttons_high; 
    uint8_t buttons_low;

    uint8_t right_analog_x;
    uint8_t right_analog_y;
    uint8_t left_analog_x;
    uint8_t left_analog_y;
    uint8_t load_pos_flag;
    uint8_t breakp; 
    uint8_t render;
    uint8_t length;
    uint32_t rng;
    uint16_t padding;
} tasInputs;

// buttons
#define BTN_L2          0x0001
#define BTN_R2          0x0002
#define BTN_L1          0x0004
#define BTN_R1          0x0008
#define BTN_TRIANGLE    0x0010
#define BTN_CIRCLE      0x0020
#define BTN_CROSS       0x0040
#define BTN_SQUARE      0x0080
#define BTN_SELECT      0x0100
#define BTN_L3          0x0200
#define BTN_R3          0x0400
#define BTN_START       0x0800
#define BTN_UP          0x1000
#define BTN_RIGHT       0x2000
#define BTN_DOWN        0x4000
#define BTN_LEFT        0x8000

