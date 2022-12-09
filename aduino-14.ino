// C++ code
//
void setup()
{
  pinMode(10, INPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{ if (digitalRead(10)==LOW); 
//ao premer o boton o noso sistema funciona e ao deixar de premer para
{
    digitalWrite(13, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(1000);
  //en esta etapa el led pin 13,11,12 se enciende durante 10 seg
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(1000);
  //ahora el led pin 13 se apaga y retrasa 4 seg el otro led
}
 else
{
  //ahora usamos o comando else para cando non se cumple o if de arriba se apague todo
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
}
}
