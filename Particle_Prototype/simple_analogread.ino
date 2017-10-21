

int led = D0; 			//Our display, for now

int input_resistor = A0;	//Resistor=photo, pot, or linear

int r_power = A5;		//Powers the Resistor

int analogvalue;		//Read value off the input_resistor pin

void setup() {

    pinMode(led,OUTPUT); 
    pinMode(input_resistor,INPUT);  
    pinMode(r_power,OUTPUT); 

   
    digitalWrite(r_power,HIGH);


    Particle.variable("analogvalue", &analogvalue, INT);



}


void loop()
{
	analogvalue = analogRead(input_resistor);
	analogWrite(led, analogvalue/16);
	delay(10);

}
