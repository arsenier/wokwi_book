void setup()
{
  Serial.begin(115200);
  Serial.setTimeout(100000); // 100 sec
}

void loop()
{
  Serial.print("Введите первое число: ");

  float a = Serial.parseFloat();

  Serial.println(a);

  Serial.print("Введите второе число: ");

  float b = Serial.parseFloat();

  Serial.println(b);

  float sum = a + b;

  Serial.println("Сумма равна: " + String(sum));
  Serial.println("Спасибо за использование калькулятора!");
  Serial.println();
  delay(2000);
}
