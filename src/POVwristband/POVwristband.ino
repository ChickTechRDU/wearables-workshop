#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)))
 
int ledPin0 = 0;
int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;

int povImage[] = {
  1,1,1,1, //H
  0,0,1,0,
  1,1,1,1,
  0,0,0,0,
  0,0,0,0,
  0,0,0,0,
  1,1,0,1,
  0,0,0,0,
  0,0,0,0,
  0,0,0,0,
  0,0,0,0,
  0,0,0,0,

};

double columnDelay = 3; //wait 2.5ms between each column flash
int sizeWord = NUM_ELEM(povImage);

  
void setup()
{
  
   pinMode(ledPin0, OUTPUT);
   pinMode(ledPin1, OUTPUT);
   pinMode(ledPin2, OUTPUT);
   pinMode(ledPin3, OUTPUT);
   
}

void printWord(int wordVar[]) {

  int numRows = sizeWord/4;
  for(int j=numRows-1; j >=0; j--) {
    for(int i=0; i<4; i++) {
    digitalWrite(i, wordVar[i+j*4]);
    }
    delay(columnDelay);
  }
}

void loop()
{
     printWord(povImage);
     //digitalWrite(0,1);
     //digitalWrite(1,1);
     //digitalWrite(2,1);
     //digitalWrite(3,1);

}
