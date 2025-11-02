uint8_t data[8] = {0x02, 0, 0, 0, 0, 0, 0, 0};

void setup() {
  Serial.begin(9600);
}

void loop() {
  data[1] = 0x01;
  Serial.write(data, 8);
  delay(250);

  data[1] = 0;
  Serial.write(data, 8);
  delay(250);
}
