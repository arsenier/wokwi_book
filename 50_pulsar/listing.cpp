#define RED_PIN 11
#define GRN_PIN 10
#define BLU_PIN 9

int brightness_R = 0;
int brightness_G = 86;
int brightness_B = 171;

void setup()
{
    pinMode(RED_PIN, OUTPUT);
    pinMode(GRN_PIN, OUTPUT);
    pinMode(BLU_PIN, OUTPUT);
}

void loop()
{
    brightness_R = (brightness_R + 1) % 256;
    brightness_G = (brightness_G + 1) % 256;
    brightness_B = (brightness_B + 1) % 256;

    analogWrite(RED_PIN, brightness_R);
    analogWrite(GRN_PIN, brightness_G);
    analogWrite(BLU_PIN, brightness_B);

    delay(10);
}