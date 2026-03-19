# define BOTON 2
# define LED 13

int estadoBoton = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BOTON, INPUT);
}

void loop()
{
  estadoBoton = digitalRead (BOTON);
  
  	if (estadoBoton == HIGH)
    {
      digitalWrite (LED, HIGH);
    }
  	else
    {
      digitalWrite (LED, LOW);
    }
}
