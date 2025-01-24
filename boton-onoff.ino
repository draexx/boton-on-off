//
int led = 2;// Pin digital para el LED
int boton1 = 13;// Pin digital para el boton 1
int boton2 = 12;// Pin digital para el boton 2
void setup()
{
  pinMode(led, OUTPUT);// Configura el pin como salida
  pinMode(boton1, INPUT_PULLUP);// Configura el pin como entrada Pullup
  pinMode(boton2, INPUT_PULLUP);// Configura el pin como entrada Pullup
  digitalWrite(led,LOW);// Inicialmente apagado
}

void loop()
{
  int dato1 = digitalRead(boton1);// Verifica si el botón 1 ha cambiado de estado
  int dato2 = digitalRead(boton2);// Verifica si el botón 2 ha cambiado de estado
  if (dato1 == LOW){// verifica que el boton 1 este presionado
    delay(20);
    digitalWrite(led,HIGH);// enciende el LED 
  }
  if (dato2 == LOW){// verifica que el boton 2 este presionado
    delay(20);
    digitalWrite(led,LOW);// apaga el LED
  }
}
