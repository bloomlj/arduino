// На большинстве Arduino-контроллеров есть встроенный светодиод, подключенный к
// цифровому выводу 13 (пин 13).
// Дадим этому пину имя LED:
const int LED = 13;

// Функция setup() вызывается автоматически после включения или перезапуска контроллера:
void setup() {                
  // Инициализация цифрового пина для вывода:
  pinMode(LED, OUTPUT);     
}

// Функция loop() вызывается автоматически снова и снова в бесконечном цикле:
void loop() {
  // Подать уровень логической единицы на пин 13 (зажечь светодиод):
  digitalWrite(LED, HIGH);
  // Приостановить выполнение скетча на секунду:
  delay(1000);
  // Подать уровень логического нуля на пин 13 (потушить светодиод):
  digitalWrite(LED, LOW);
  // Снова приостановить выполнение скетча на секунду:
  delay(1000);
}