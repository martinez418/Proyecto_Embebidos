/**
 * Ejemplo contador arduino
 * Raúl Federico Martinez
 */


//Definición de pines

int Led = 13;
int Boton = 8;

//Definición de variables Globales

int contador = 0; //defino y asigo valor al contador
int t0;

void setup() {
 
  //Configuración de pines
  pinMode(Led,OUTPUT);
  pinMode(Boton,INPUT);
  t0 = 0;             //Esta variable definida arriba de setup hace que no funcione
  
  //Configurar monitor serie
  Serial.begin(9603);

  //Mensaje de inicio
  Serial.println("Inicio de programa");
}

void loop() {
  //Mostrar contador
  
  Serial.println(contador);
 
  if(botonPresionado() && (millis() > t0 + 200))
  {
    
    Serial.println("Boton Presionado");
    
    contador++;   
    Serial.println(contador);
    t0 = millis(); 
    }
  if(contador > 10)
  {
    Serial.println("Led Encendido");
    encenderLed;
  }

else
{
  Serial.println("Led Apagado");
    apagarLed;
}

}

bool botonPresionado(){
  if(digitalRead(Boton)==1)
  {
     return true;
  }}

void encenderLed(){
   
    return digitalWrite(Led,true);
}
void apagarLed(){
    return digitalWrite(Led,false);
}
