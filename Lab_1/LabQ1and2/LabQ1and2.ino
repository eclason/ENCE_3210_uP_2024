#define ARRAY_SIZE 512

const unsigned long result[ARRAY_SIZE] PROGMEM = {700000};


unsigned long twice(int value)
{
return 2*value*value;
}

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

unsigned int answer = {0};

for(int i=0; i<512; i++)
{
  result[i] = twice(i);

  Serial.print(i);
  Serial.print(" : ");
  Serial.println(pgm_read_dword_near(&result[i]));
}

}

void loop() {
  // put your main code here, to run repeatedly:
}
