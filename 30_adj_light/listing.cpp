#define LED_PIN 9
#define POT_PIN AO
void setup()
{
    pinMode(LED_PIN, OUTPUT);
    pinMode(POT_PIN, INPUT); // 0бъявляем наш потенщиометр как вход
}
void loop()
{
    int rotation, brightness;
    rotation = analogRead(POT_PIN);
    brightness = rotation / 4;
    analogWrite(LED_PIN, brightness);
}