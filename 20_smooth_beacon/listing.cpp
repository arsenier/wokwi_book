#define LED_PIN 9
void setup()
{
    pinMode(LED_PIN, OUTPUT);
}
void loop()
{
    analogWrite(LED_PIN, 0);
    delay(250);
    analogWrite(LED_PIN, 30);
    delay(250);
    analogWrite(LED_PIN, 100);
    delay(250);
    analogWrite(LED_PIN, 255);
    delay(250);
}