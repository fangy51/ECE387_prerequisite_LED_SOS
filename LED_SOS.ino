int led1 = 13;
int led2 = 10;
int led3 = 7;
// LED connected to digital pin 13
void setup()
{
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT); 
pinMode(led3, OUTPUT); 
}
void flash1(int duration)
{
digitalWrite(led1, HIGH);
delay(duration);
digitalWrite(led1, LOW);
delay(duration);

}
void flash2(int duration)
{
digitalWrite(led2, HIGH);
delay(duration);
digitalWrite(led2, LOW);
delay(duration);

}
void flash3(int duration)
{
digitalWrite(led3, HIGH);
delay(duration);
digitalWrite(led3, LOW);
delay(duration);

}
void loop()
{
flash1(200); flash1(200); flash1(200);
// S
delay(300);

flash2(500); flash2(500); flash2(500);
// O
flash3(200); flash3(200); flash3(200);
// S
delay(1234);

}
