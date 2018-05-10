//**************************************************************
//Programa Ejemplo: Se envía el ancho de pulso que se necesita.
//                  Frecuencia de trabajo: 490Hz

//Arduino UNO
//***************************************************************

int ledPin = 9;      // Motor conectado al pin 9

int val = 0;         // Valor entre 0 y 255

void setup()
{
  pinMode(ledPin, OUTPUT);   // inicializa al pin 9 como salida
  Serial.begin(9600);
}

void loop()
{

  val = 55;
   
  analogWrite(ledPin, val);  // Se escribe un número entre 0 y 255
                             // para variar el ancho del pulso.
  
  Serial.print("Valor actual:");
  Serial.println(val);
  
}

