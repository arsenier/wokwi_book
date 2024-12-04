#define BUTTON_EXT_PULLDOWN_PIN 5
#define BUTTON_EXT_PULLUP_PIN 6
#define BUTTON_INP_PULLUP_PIN 7

#define LED_R_PIN 4
#define LED_G_PIN 3
#define LED_B_PIN 2

void setup()
{
  pinMode(BUTTON_EXT_PULLDOWN_PIN, INPUT);
  pinMode(BUTTON_EXT_PULLUP_PIN, INPUT);
  pinMode(BUTTON_INP_PULLUP_PIN, INPUT_PULLUP);

  pinMode(LED_R_PIN, OUTPUT);
  pinMode(LED_G_PIN, OUTPUT);
  pinMode(LED_B_PIN, OUTPUT);
}

void loop()
{
  bool button_ext_pulldown = digitalRead(BUTTON_EXT_PULLDOWN_PIN);
  bool button_ext_pullup = digitalRead(BUTTON_EXT_PULLUP_PIN);
  bool button_inp_pullup = digitalRead(BUTTON_INP_PULLUP_PIN);

  digitalWrite(LED_R_PIN, button_ext_pulldown);
  digitalWrite(LED_G_PIN, button_ext_pullup);
  digitalWrite(LED_B_PIN, button_inp_pullup);

  delay(10);
}
