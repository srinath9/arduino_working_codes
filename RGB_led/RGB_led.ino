int redPin = 11;
int greenPin = 10;
int bluePin = 9;
void setup()
{
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}
void loop()
{
  int i=0;
  for(i=255;i>0;i--){
    setColor(255, 0,i); // red
    delay(10);
  }
  for(i=0;i<255;i++){
    setColor(255, i,0); 
    delay(10);
  }for(i=255;i>0;i--){
    setColor(i, 255,0); 
    delay(10);
  }
  for(i=0;i<255;i++){
    setColor(0,255-i,i); 
    delay(10);
  }
  for(i=255;i>0;i--){
    setColor(0,255-i ,i); 
    delay(10);
  }
  
  for(i=0;i<255;i++){
    setColor(i, 255,i); 
    delay(10);
  }
 for(i=0;i<255;i++){
    setColor(255, 255-i,255); 
    delay(10);
  }
}
void setColor(int red, int green, int blue)
{
analogWrite(redPin, red);
analogWrite(greenPin, green);
analogWrite(bluePin, blue);
}

