#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)))
 
int ledPin0 = 0;
int ledPin1 = 0;
int ledPin2 = 0;
int ledPin3 = 0;

int povImage[] = {
  1,1,1,1, //H
  0,0,1,0,
  1,1,1,1,
  0,0,0,0,
  0,0,0,0,
  0,0,0,0,
  1,1,0,1, //i
  0,0,0,0,
  0,0,0,0,
  0,0,0,0,
  0,0,0,0,
  0,0,0,0
};

double delayms = 2.5; //wait 2.5ms between each column flash
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
  for(int j = 0; j < numRows; j++) {
    for(int i = 0; i<4; i++) {
    digitalWrite(i, wordVar[i+j*4]);
    }
    delay(delayms);
  }
}

void loop()
{
    printWord(povImage);
    delay(8);   
}
