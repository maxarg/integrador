// Definir el número de pin para la entrada analógica
const int pinAnalogico = 32;

void setup() {
  // Inicializar el puerto serial
  Serial.begin(9600);
}

void loop() {
  // Leer el valor analógico del pin GPIO32
  int valorAnalogico = analogRead(pinAnalogico);

  // Imprimir el valor leído en el monitor serie
  Serial.print("Valor analógico: ");
  Serial.println(valorAnalogico);
}
