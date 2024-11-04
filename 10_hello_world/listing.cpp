void setup()
{
    pinMode(13, OUTPUT); // Настраиваем 13 выход Ардуино на выход
} // Команды в void setup() выполнятся один раз при включении микроконтроллера
void loop()
{
    digitalWrite(13, HIGH); // Подаем высокое напряжение на пине 13
    delay(1000); // Ждем 1 секунду (1000 миллисекунд)
    digitalWrite(13, LOW); // Подаем низкое напряжение на пин 13
    delay(1000); // Снова ждем секунду
} // Эта последовательность действий будет повторятся бесконечно,
    // поскольку написана в void loop()