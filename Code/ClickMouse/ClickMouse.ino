#define RX PIN0
#define RX_MASK (1 << RX)

#define TX PIN1
#define TX_MASK (1 << TX)

#if defined (__AVR_ATmega328P__) // Arduino UNO
  #define RX_PORT PORTD
  #define TX_PORT PIND

#elif defined (__AVR_ATmega2560__) // Arduino Mega 2560
  #define RX_PORT PORTE
  #define TX_PORT PINE

#else
  #error "Unsupported MCU. Add RX/TX port definition for your chip"
#endif

void setup() {
  pinMode(RX, OUTPUT);
  pinMode(TX, INPUT);
}

void loop() {
  if (TX_PORT & TX_MASK) {
    RX_PORT &= ~RX_MASK;
  } else {
    RX_PORT |= RX_MASK;
  }
}
