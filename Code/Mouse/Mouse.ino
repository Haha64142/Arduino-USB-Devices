uint8_t data[3] = {0, 0, 0};

void setup() {
  Serial.begin(1000000);
}

void loop() {
  data[0] = 0x1;
  Serial.write(data, 3);
  Serial.flush();
  delay(5);

  data[0] = 0;
  Serial.write(data, 3);
  Serial.flush();
  delay(5);
}
