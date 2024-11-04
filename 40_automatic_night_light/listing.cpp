#define LED_PIN 9
#define LIGHT_PIN A2

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    pinMode(LIGHT_PIN, INPUT);
}

void loop()
{
    int light;
    bool is_night;

    light = analogRead(LIGHT_PIN);

    is_night = light > 500;
    
    analogWrite(LED_PIN, is_night);
}