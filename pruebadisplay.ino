#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inicializa el objeto LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Dirección I2C del LCD: 0x27, 16 columnas y 2 filas

void setup() {
  // Inicializa la comunicación I2C
  Wire.begin();

  // Inicializa el LCD
  lcd.begin(16, 2);
  
  // Muestra un mensaje de bienvenida
  lcd.print("Hola, ESP32!");
}

void loop() {
  // No se requiere ninguna acción adicional en el bucle principal
}
