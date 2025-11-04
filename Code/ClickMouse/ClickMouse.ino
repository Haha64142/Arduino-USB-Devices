#define RX PIN0
#define TX PIN1

uint8_t RX_MASK = (1 << RX);
uint8_t TX_MASK = (1 << TX);

void setup() {
  pinMode(RX, OUTPUT);
  pinMode(TX, INPUT);
}

void loop() {
  if (PINE & TX_MASK) {
    PORTE &= ~RX_MASK;
  } else {
    PORTE |= RX_MASK;
  }
}
