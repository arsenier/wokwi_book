/*
    LED bar graph
    https://wokwi.com/arduino/projects /309829489359061570
    Turns on a series of LEDs based on the value of an analog sensor.
    This is a simple way to make a bar graph display. Though this graph uses
        10
    LEDs, you can use any number by changing the LED count and the pins in the
    array.
    This method can be used to control any series of digital outputs that
        depends
    on an analog input.
    The circuit:
    - LEDs from pins 2 through 11 to ground
    created 4 Sep 2010
    by Tom Igoe
    This example code is in the public domain.
    https://www.arduino.cc/en/Tutorial/BuiltInExamples/BarGraph
*/
// these constants won't change:
#define ANALOG_PIN AO // the pin that the potentiometer is attached to
#define LED_COUNT 10 // the number of LEDs in the bar graph
int ledPins [] = {
    2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // an array of pin numbers to which LEDs are attached
    
void setup()
{
    // loop over the pin array and set them all to output:
    for (int thisLed = 0; thisLed < LED_COUNT; thisLed++)
    {
        pinMode(ledPins[thisLed], OUTPUT);
    }
}
void loop()
{
    // read the potentiometer:
    int sensorReading = analogRead(ANALOG_PIN);
    // map the result to a range from O to the number of LEDs:
    int ledLevel = map(sensorReading, 0, 1023, 0, LED_COUNT);
    // loop over the LED array:
    for (int thisLed = 0; thisLed < LED_COUNT; thisLed++)
    {
        // if the array element's index is less than ledLevel,
        // turn the pin for this element on:
        if (thisLed < ledLevel)
        {
            digitalWrite(ledPins[thisLed], HIGH);
        }
        // turn off all pins higher than the ledLevel:
        else
        {
            digitalWrite(ledPins[thisLed], LOW);
        }
    }
}