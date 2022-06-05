int led1pin = 8;
int led2pin = 9;
int led3pin = 10;

int siviseviyepin = A0;
int siviseviyesi;

void setup() {
pinMode(led1pin , OUTPUT) ; 
pinMode(led2pin , OUTPUT) ; 
pinMode(led3pin , OUTPUT) ; 
pinMode(siviseviyepin, INPUT);
Serial.begin(9600);

}

void loop() {

siviseviyesi = analogRead(siviseviyepin);
Serial.print("Sivi Seviyesi:");
Serial.println(siviseviyesi);

if(siviseviyesi == 0)
{
  digitalWrite(led1pin, LOW);
  digitalWrite(led2pin, LOW);
  digitalWrite(led3pin, LOW);
  
  }

 if(siviseviyesi > 0 and siviseviyesi <= 250 )
{
  digitalWrite(led1pin, HIGH);
  digitalWrite(led2pin, LOW);
  digitalWrite(led3pin, LOW);
  
  }
 if(siviseviyesi > 250 and siviseviyesi <= 350 )
{
  digitalWrite(led1pin, HIGH);
  digitalWrite(led2pin, HIGH);
  digitalWrite(led3pin, LOW);
  
  }

  if(siviseviyesi > 350 )
{
  digitalWrite(led1pin, HIGH);
  digitalWrite(led2pin, HIGH);
  digitalWrite(led3pin, HIGH);
  
  }

 delay(100);

  
}
