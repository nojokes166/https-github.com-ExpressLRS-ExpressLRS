#ifndef DEVICE_NAME
#define DEVICE_NAME "ELRS 900RX"
#endif

#define TARGET_DIY_900_RX_STM32

// GPIO pin definitions
#define GPIO_PIN_NSS         PA4
#define GPIO_PIN_MOSI        PA7
#define GPIO_PIN_MISO        PA6
#define GPIO_PIN_SCK         PA5

#define GPIO_PIN_DIO0        PA0
#define GPIO_PIN_DIO1        PA1
#define GPIO_PIN_RST         PA2
#define GPIO_PIN_BUSY        PA3

#define GPIO_PIN_RCSIGNAL_RX PB7  // USART1
#define GPIO_PIN_RCSIGNAL_TX PB6  // USART1

#define GPIO_PIN_DEBUG_RX    PB11 // USART3
#define GPIO_PIN_DEBUG_TX    PB10 // USART3

#define GPIO_PIN_LED_GREEN   PC13
#define GPIO_LED_GREEN_INVERTED 1

// Output Power - default for SX127x
#define POWER_OUTPUT_FIXED 15 //MAX power for 900 RXes
