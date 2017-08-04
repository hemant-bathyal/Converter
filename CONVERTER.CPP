#include<iostream.h>
#include<conio.h>

void lengthconverter();                  //PROTOTYPE

void volumeconverter();                  //PROTOTYPE

void temperatureconverter();             //PROTOTYPE

void dataconverter();                    //PROTOTYPE

void weightconverter();                  //PROTOTYPE

void areaconverter();                    //PROTOTYPE

void timeconverter();                    //PROTOTYPE

void powerconverter();                   //PROTOTYPE

void pressureconverter();                //PROTOTYPE

void angleconverter();                   //PROTOTYPE

void energyconverter();                  //PROTOTYPE

void speedconverter();                   //PROTOTYPE

void main()
{
 int choice;
 char wish;
 do
 {
  clrscr();        //TO CLEAR THE SCREEN
  cout<<"\t\t\t\t***CONVERTER***";
  cout<<"\n\n\n\tCONVERSION MENU";
  cout<<"\n\n\t\t1- LENGTH";
  cout<<"\n\t\t2- VOLUME";
  cout<<"\n\t\t3- TEMPERATURE";
  cout<<"\n\t\t4- DATA";
  cout<<"\n\t\t5- WEIGHT";
  cout<<"\n\t\t6- AREA";
  cout<<"\n\t\t7- TIME";
  cout<<"\n\t\t8- POWER";
  cout<<"\n\t\t9- PRESSURE";
  cout<<"\n\t\t10- ANGLE";
  cout<<"\n\t\t11- ENERGY";
  cout<<"\n\t\t12- SPEED";
  cout<<"\n\n\n\tENTER YOUR CHOICE: ";
  cin>>choice;
  switch(choice)
  {
   case 1: lengthconverter();                //CALLING
	   break;

   case 2: volumeconverter();                //CALLING
	   break;

   case 3: temperatureconverter();           //CALLING
	   break;

   case 4: dataconverter();                  //CALLING
	   break;

   case 5: weightconverter();                //CALLING
	   break;

   case 6: areaconverter();                  //CALLING
	   break;

   case 7: timeconverter();                  //CALLING
	   break;

   case 8: powerconverter();                 //CALLING
	   break;

   case 9: pressureconverter();              //CALLING
	   break;

   case 10: angleconverter();                //CALLING
	    break;

   case 11: energyconverter();               //CALLING
	    break;

   case 12: speedconverter();                //CALLING
	    break;

   default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
  }
  getch();
  cout<<"\n\n\n\tDO YOU WISH TO CONTINUE?(Y/N) ";
  cin>>wish;
 }while((wish=='y')||(wish=='Y'));
 getch();
}



void lengthconverter()                        //DEFINITION
{
 int choice;
 long double length;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***LENGTH-CONVERTER***";
 cout<<"\n\n\n\tLENGTH CONVERSION MENU";
 cout<<"\n\n\t\t1- KILOMETRES TO METRES";
 cout<<"\n\t\t2- METRES TO KILOMETRES";
 cout<<"\n\t\t3- METRES TO CENTIMETRES";
 cout<<"\n\t\t4- CENTIMETRES TO METRES";
 cout<<"\n\t\t5- METRES TO INCHES";
 cout<<"\n\t\t6- INCHES TO METRES";
 cout<<"\n\t\t7- METRES TO YARDS";
 cout<<"\n\t\t8- YARDS TO METRES";
 cout<<"\n\t\t9- KILOMETRES TO MILES";
 cout<<"\n\t\t10- MILES TO KILOMETRES";
 cout<<"\n\t\t11- KILOMETRES TO NAUTICAL MILES";
 cout<<"\n\t\t12- NAUTICAL MILES TO KILOMETRES";
 cout<<"\n\t\t13- FEETS TO INCHES";
 cout<<"\n\t\t14- INCHES TO FEETS";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***KILOMETRES TO METRES CONVERSION***";
	  cout<<"\n\n\n\tLENGTH IN KILOMETRES: ";
	  cin>>length;
	  cout<<"\n\n\tLENGTH IN METRES: "<<(1000*length);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***METRES TO METRES CONVERSION***";
	  cout<<"\n\n\n\tLENGTH IN METRES: ";
	  cin>>length;
	  cout<<"\n\n\tLENGTH IN KILOMETRES: "<<(length/1000);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***METRES TO CENTIMETRES CONVERSION***";
	  cout<<"\n\n\n\tLENGTH IN METRES: ";
	  cin>>length;
	  cout<<"\n\n\tLENGTH IN CENTIMETRES: "<<(length*100);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t***CENTIMETRES TO METRES CONVERSION***";
	  cout<<"\n\n\n\tLENGTH IN CENTIMETRES: ";
	  cin>>length;
	  cout<<"\n\n\tLENGTH IN METRES: "<<(length/100);
	  break;

  case 5: clrscr();
	  cout<<"\t\t\t***METRES TO INCHES CONVERSION***";
	  cout<<"\n\n\n\tLENGTH IN METRES: ";
	  cin>>length;
	  cout<<"\n\n\tLENGTH IN INCHES: "<<(length*39.37008);
	  break;

  case 6: clrscr();
	  cout<<"\t\t\t***INCHES TO METRES CONVERSION***";
	  cout<<"\n\n\n\tLENGTH IN INCHES: ";
	  cin>>length;
	  cout<<"\n\n\tLENGTH IN METRES: "<<(length/39.37008);
	  break;

  case 7: clrscr();
	  cout<<"\t\t\t***METRES TO YARDS CONVERSION***";
	  cout<<"\n\n\n\tLENGTH IN METRES: ";
	  cin>>length;
	  cout<<"\n\n\tLENGTH IN YARDS: "<<(length*1.093613);
	  break;

  case 8: clrscr();
	  cout<<"\t\t\t***YARDS TO METRES CONVERSION***";
	  cout<<"\n\n\n\tLENGTH IN YARDS: ";
	  cin>>length;
	  cout<<"\n\n\tLENGTH IN METRES: "<<(length/1.093613);
	  break;

  case 9: clrscr();
	  cout<<"\t\t\t***KILOMETRES TO MILES CONVERSION***";
	  cout<<"\n\n\n\tLENGTH IN KILOMETRES: ";
	  cin>>length;
	  cout<<"\n\n\tLENGTH IN MILES: "<<(length*0.621371);
	  break;

  case 10: clrscr();
	   cout<<"\t\t\t***MILES TO KILOMETRES CONVERSION***";
	   cout<<"\n\n\n\tLENGTH IN MILES: ";
	   cin>>length;
	   cout<<"\n\n\tLENGTH IN KILOMETRES: "<<(length/0.621371);
	   break;

  case 11: clrscr();
	   cout<<"\t\t\t***KILOMETRES TO NAUTICAL MILES CONVERSION***";
	   cout<<"\n\n\n\tLENGTH IN KILOMETRES: ";
	   cin>>length;
	   cout<<"\n\n\tLENGTH IN NAUTICAL MILES: "<<(length*0.539957);
	   break;

  case 12: clrscr();
	   cout<<"\t\t\t***NAUTICAL MILES TO KILOMETRES CONVERSION***";
	   cout<<"\n\n\n\tLENGTH IN NAUTICAL MILES: ";
	   cin>>length;
	   cout<<"\n\n\tLENGTH IN KILOMETRES: "<<(length/0.539957);
	   break;

  case 13: clrscr();
	   cout<<"\t\t\t***FEETS TO INCHES CONVERSION***";
	   cout<<"\n\n\n\tLENGTH IN FEETS: ";
	   cin>>length;
	   cout<<"\n\n\tLENGTH IN INCHES: "<<(length*12);
	   break;

  case 14: clrscr();
	   cout<<"\t\t\t***INCHES TO FEETS CONVERSION***";
	   cout<<"\n\n\n\tLENGTH IN INCHES: ";
	   cin>>length;
	   cout<<"\n\n\tLENGTH IN FEETS: "<<(length/12);
	   break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void volumeconverter()                        //DEFINITION
{
 int choice;
 long double volume;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***VOLUME-CONVERTER***";
 cout<<"\n\n\n\tVOLUME CONVERSION MENU";
 cout<<"\n\n\t\t1- LITRES TO MILLILITRES";
 cout<<"\n\t\t2- MILLILITRES TO LITRES";
 cout<<"\n\t\t3- LITRES TO CUBIC CENTIMETRES";
 cout<<"\n\t\t4- CUBIC CENTIMETRES TO LITRES";
 cout<<"\n\t\t5- LITRES TO GALLONS";
 cout<<"\n\t\t6- GALLONS TO LITRES";
 cout<<"\n\t\t7- LITRES TO PINTS";
 cout<<"\n\t\t8- PINTS TO LITRES";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***LITRES TO MILLILITRES CONVERSION***";
	  cout<<"\n\n\n\tVOLUME IN LITRES: ";
	  cin>>volume;
	  cout<<"\n\n\tVOLUME IN MILLILITRES: "<<(volume*1000);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***MILLILITRES TO LITRES CONVERSION***";
	  cout<<"\n\n\n\tVOLUME IN MILLILITRES: ";
	  cin>>volume;
	  cout<<"\n\n\tVOLUME IN LITRES: "<<(volume/1000);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***LITRES TO CUBIC CENTIMETRES CONVERSION***";
	  cout<<"\n\n\n\tVOLUME IN LITRES: ";
	  cin>>volume;
	  cout<<"\n\n\tVOLUME IN CUBIC CENTIMETRES: "<<(volume*1000);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t***CUBIC CENTIMETRES TO LITRES CONVERSION***";
	  cout<<"\n\n\n\tVOLUME IN CUBIC CENTIMETRES: ";
	  cin>>volume;
	  cout<<"\n\n\tVOLUME IN LITRES: "<<(volume/1000);
	  break;

  case 5: clrscr();
	  cout<<"\t\t\t***LITRES TO GALLONS CONVERSION***";
	  cout<<"\n\n\n\tVOLUME IN LITRES: ";
	  cin>>volume;
	  cout<<"\n\n\tVOLUME IN GALLONS: "<<(volume*0.264172);
	  break;

  case 6: clrscr();
	  cout<<"\t\t\t***GALLONS TO LITRES CONVERSION***";
	  cout<<"\n\n\n\tVOLUME IN GALLONS: ";
	  cin>>volume;
	  cout<<"\n\n\tVOLUME IN LITRES: "<<(volume/0.264172);
	  break;

  case 7: clrscr();
	  cout<<"\t\t\t***LITRES TO PINTS CONVERSION***";
	  cout<<"\n\n\n\tVOLUME IN LITRES: ";
	  cin>>volume;
	  cout<<"\n\n\tVOLUME IN PINTS: "<<(volume*1.759754);
	  break;

  case 8: clrscr();
	  cout<<"\t\t\t***PINTS TO LITRES CONVERSION***";
	  cout<<"\n\n\n\tVOLUME IN PINTS: ";
	  cin>>volume;
	  cout<<"\n\n\tVOLUME IN LITRES: "<<(volume/1.759754);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void temperatureconverter()                        //DEFINITION
{
 int choice;
 long double temp;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***TEMPERATURE-CONVERTER***";
 cout<<"\n\n\n\tTEMPERATURE CONVERSION MENU";
 cout<<"\n\n\t\t1- CELSIUS TO FAHRENHEIT";
 cout<<"\n\t\t2- FAHRENHEIT TO CELSIUS";
 cout<<"\n\t\t3- CELSIUS TO KELVIN";
 cout<<"\n\t\t4- KELVIN TO CELSIUS";
 cout<<"\n\t\t5- FAHRENHEIT TO KELVIN";
 cout<<"\n\t\t6- KELVIN TO FAHRENHEIT";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***CELSIUS TO FAHRENHEIT CONVERSION***";
	  cout<<"\n\n\n\tTEMPERATURE IN CELSIUS: ";
	  cin>>temp;
	  cout<<"\n\n\tTEMPERATURE IN FAHRENHEIT: "<<(1.8*temp)+32;
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***FAHRENHEIT TO CELSIUS CONVERSION***";
	  cout<<"\n\n\n\tTEMPERATURE IN FAHRENHEIT: ";
	  cin>>temp;
	  cout<<"\n\n\tTEMPERATURE IN CELSIUS: "<<(temp-32)/1.8;
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***CELSIUS TO KELVIN CONVERSION***";
	  cout<<"\n\n\n\tTEMPERATURE IN CELSIUS: ";
	  cin>>temp;
	  cout<<"\n\n\tTEMPERATURE IN KELVIN: "<<(temp+273);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t***KELVIN TO CELSIUS CONVERSION***";
	  cout<<"\n\n\n\tTEMPERATURE IN KELVIN: ";
	  cin>>temp;
	  cout<<"\n\n\tTEMPERATURE IN CELSIUS: "<<(temp-273);
	  break;

  case 5: clrscr();
	  cout<<"\t\t\t***FAHRENHEIT TO KELVIN CONVERSION***";
	  cout<<"\n\n\n\tTEMPERATURE IN FAHRENHEIT: ";
	  cin>>temp;
	  cout<<"\n\n\tTEMPERATURE IN KELVIN: "<<(((temp-32)/1.8)+273);
	  break;

  case 6: clrscr();
	  cout<<"\t\t\t***KELVIN TO FAHRENHEIT CONVERSION***";
	  cout<<"\n\n\n\tTEMPERATURE IN KELVIN: ";
	  cin>>temp;
	  cout<<"\n\n\tTEMPERATURE IN FAHRENHEIT: "<<(((temp-273)*1.8)+32);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void dataconverter()                        //DEFINITION
{
 int choice;
 long double data;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***DATA-CONVERTER***";
 cout<<"\n\n\n\tDATA CONVERSION MENU";
 cout<<"\n\n\t\t1- EXABYTES TO PETABYTES";
 cout<<"\n\t\t2- PETABYTES TO TERABYTES";
 cout<<"\n\t\t3- TERABYTES TO GIGABYTES";
 cout<<"\n\t\t4- GIGABYTES TO MEGABYTES";
 cout<<"\n\t\t5- MEGABYTES TO KILOBYTES";
 cout<<"\n\t\t6- KILOBYTES TO BYTES";
 cout<<"\n\t\t7- BYTES TO BITS";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***EXABYTES TO PETABYTES CONVERSION***";
	  cout<<"\n\n\n\tDATA IN EXABYTES: ";
	  cin>>data;
	  cout<<"\n\n\tDATA IN PETABYTES: "<<(data*1024);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***PETABYTES TO TERABYTES CONVERSION***";
	  cout<<"\n\n\n\tDATA IN PETABYTES: ";
	  cin>>data;
	  cout<<"\n\n\tDATA IN TERABYTES: "<<(data*1024);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***TERABYTES TO GIGABYTES CONVERSION***";
	  cout<<"\n\n\n\tDATA IN TERABYTES: ";
	  cin>>data;
	  cout<<"\n\n\tDATA IN GIGABYTES: "<<(data*1024);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t***GIGABYTES TO MEGABYTES CONVERSION***";
	  cout<<"\n\n\n\tDATA IN EXABYTES: ";
	  cin>>data;
	  cout<<"\n\n\tDATA IN PETABYTES: "<<(data*1024);
	  break;

  case 5: clrscr();
	  cout<<"\t\t\t***MEGABYTES TO KILOBYTES CONVERSION***";
	  cout<<"\n\n\n\tDATA IN MEGABYTES: ";
	  cin>>data;
	  cout<<"\n\n\tDATA IN KILOBYTES: "<<(data*1024);
	  break;

  case 6: clrscr();
	  cout<<"\t\t\t***KILOBYTES TO BYTES CONVERSION***";
	  cout<<"\n\n\n\tDATA IN KILOBYTES: ";
	  cin>>data;
	  cout<<"\n\n\tDATA IN BYTES: "<<(data*1024);
	  break;

  case 7: clrscr();
	  cout<<"\t\t\t***BYTES TO BITS CONVERSION***";
	  cout<<"\n\n\n\tDATA IN BYTES: ";
	  cin>>data;
	  cout<<"\n\n\tDATA IN BITS: "<<(data*8);
	  break;

 default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void weightconverter()                        //DEFINITION
{
 int choice;
 long double weight;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***WEIGHT-CONVERTER***";
 cout<<"\n\n\n\tWEIGHT CONVERSION MENU";
 cout<<"\n\n\t\t1- KILOGRAMS TO POUNDS";
 cout<<"\n\t\t2- POUNDS TO KILOGRAMS";
 cout<<"\n\t\t3- KILOGRAMS TO GRAMS";
 cout<<"\n\t\t4- GRAMS TO KILOGRAMS";
 cout<<"\n\t\t5- KILOGRAMS TO STONES";
 cout<<"\n\t\t6- STONES TO KILOGRAMS";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***KILOGRAMS TO POUNDS CONVERSION***";
	  cout<<"\n\n\n\tWEIGHT IN KILOGRAMS: ";
	  cin>>weight;
	  cout<<"\n\n\tWEIGHT IN POUNDS: "<<(weight*2.204623);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***POUNDS TO KILOGRAMS CONVERSION***";
	  cout<<"\n\n\n\tWEIGHT IN POUNDS: ";
	  cin>>weight;
	  cout<<"\n\n\tWEIGHT IN KILOGRAMS: "<<(weight/2.204623);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***KILOGRAMS TO GRAMS CONVERSION***";
	  cout<<"\n\n\n\tWEIGHT IN KILOGRAMS: ";
	  cin>>weight;
	  cout<<"\n\n\tWEIGHT IN GRAMS: "<<(weight*1000);
	  break;


  case 4: clrscr();
	  cout<<"\t\t\t***GRAMS TO KILOGRAMS CONVERSION***";
	  cout<<"\n\n\n\tWEIGHT IN GRAMS: ";
	  cin>>weight;
	  cout<<"\n\n\tWEIGHT IN KILOGRAMS: "<<(weight/1000);
	  break;

  case 5: clrscr();
	  cout<<"\t\t\t***KILOGRAMS TO STONES CONVERSION***";
	  cout<<"\n\n\n\tWEIGHT IN KILOGRAMS: ";
	  cin>>weight;
	  cout<<"\n\n\tWEIGHT IN STONES: "<<(weight*0.157473);
	  break;

  case 6: clrscr();
	  cout<<"\t\t\t***STONES TO KILOGRAMS CONVERSION***";
	  cout<<"\n\n\n\tWEIGHT IN STONES: ";
	  cin>>weight;
	  cout<<"\n\n\tWEIGHT IN KILOGRAMS: "<<(weight/0.157473);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}


void areaconverter()                        //DEFINITION
{
 int choice;
 long double area;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***AREA-CONVERTER***";
 cout<<"\n\n\n\tAREA CONVERSION MENU";
 cout<<"\n\n\t\t1- SQUARE METRES TO SQUARE FEETS";
 cout<<"\n\t\t2- SQUARE FEETS TO SQUARE METRES";
 cout<<"\n\t\t3- HECTARES TO ACRES";
 cout<<"\n\t\t4- ACRES TO HECTARES";
 cout<<"\n\t\t5- ACRES TO SQUARE METRES";
 cout<<"\n\t\t6- SQUARE METRES TO ACRES";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***SQUARE METRES TO SQUARE FEETS CONVERSION***";
	  cout<<"\n\n\n\tAREA IN SQUARE METRES: ";
	  cin>>area;
	  cout<<"\n\n\tAREA IN SQUARE FEETS: "<<(area*10.76391);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***SQUARE FEETS TO SQUARE METRESS CONVERSION***";
	  cout<<"\n\n\n\tAREA IN SQUARE FEETS: ";
	  cin>>area;
	  cout<<"\n\n\tAREA IN SQUARE METRES: "<<(area/10.76391);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***HECTARES TO ACRES CONVERSION***";
	  cout<<"\n\n\n\tAREA IN HECTARES: ";
	  cin>>area;
	  cout<<"\n\n\tAREA IN ACRES: "<<(area*2.471054);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t***ACRES TO HECTARES CONVERSION***";
	  cout<<"\n\n\n\tAREA IN ACRES: ";
	  cin>>area;
	  cout<<"\n\n\tAREA IN HECTARES: "<<(area/2.471054);
	  break;

  case 5: clrscr();
	  cout<<"\t\t\t***ACRES TO SQUARE METRES CONVERSION***";
	  cout<<"\n\n\n\tAREA IN ACRES: ";
	  cin>>area;
	  cout<<"\n\n\tAREA IN SQUARE METRES: "<<(area*4046.856);
	  break;

  case 6: clrscr();
	  cout<<"\t\t\t***SQUARE MATRIX TO ACRES CONVERSION***";
	  cout<<"\n\n\n\tAREA IN SQUARE MATRIX: ";
	  cin>>area;
	  cout<<"\n\n\tAREA IN ACRES: "<<(area/4046.856);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void timeconverter()                        //DEFINITION
{
 int choice;
 long double time;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***TIME-CONVERTER***";
 cout<<"\n\n\n\tTIME CONVERSION MENU";
 cout<<"\n\n\t\t1- HOURS TO MINUTES";
 cout<<"\n\t\t2- MINUTES TO HOURS";
 cout<<"\n\t\t3- HOURS TO SECONDS";
 cout<<"\n\t\t4- SECONDS TO HOURS";
 cout<<"\n\t\t5- YEARS TO HOURS";
 cout<<"\n\t\t6- HOURS TO YEARS";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***HOURS TO MINUTES CONVERSION***";
	  cout<<"\n\n\n\tTIME IN HOURS: ";
	  cin>>time;
	  cout<<"\n\n\tTIME IN MINUTES: "<<(time*60);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***MINUTES TO HOURS CONVERSION***";
	  cout<<"\n\n\n\tTIME IN MINUTES: ";
	  cin>>time;
	  cout<<"\n\n\tTIME IN HOURS: "<<(time/60);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***HOURS TO SECONDS CONVERSION***";
	  cout<<"\n\n\n\tTIME IN HOURS: ";
	  cin>>time;
	  cout<<"\n\n\tTIME IN SECONDS: "<<(time*3600);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t***SECONDS TO HOURS CONVERSION***";
	  cout<<"\n\n\n\tTIME IN SECONDS: ";
	  cin>>time;
	  cout<<"\n\n\tTIME IN HOURS: "<<(time/3600);
	  break;

  case 5: clrscr();
	  cout<<"\t\t\t***HOURS TO YEARS CONVERSION***";
	  cout<<"\n\n\n\tTIME IN HOURS: ";
	  cin>>time;
	  cout<<"\n\n\tTIME IN YEARS: "<<(time/8760);
	  break;

  case 6: clrscr();
	  cout<<"\t\t\t***YEARS TO HOURS CONVERSION***";
	  cout<<"\n\n\n\tTIME IN YEARS: ";
	  cin>>time;
	  cout<<"\n\n\tTIME IN HOURS: "<<(time*8760);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}


void powerconverter()                        //DEFINITION
{
 int choice;
 long double power;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***POWER-CONVERTER***";
 cout<<"\n\n\n\tPOWER CONVERSION MENU";
 cout<<"\n\n\t\t1- KILOWATTS TO HORSEPOWERS";
 cout<<"\n\t\t2- HORSEPOWERS TO KILOWATTS";
 cout<<"\n\t\t3- KILOWATTS TO WATTS";
 cout<<"\n\t\t4- WATTS TO KILOWATTS";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***KILOWATTS TO HORSEPOWERS CONVERSION***";
	  cout<<"\n\n\n\tPOWER IN KILOWATTS: ";
	  cin>>power;
	  cout<<"\n\n\tPOWER IN HORSEPOWER: "<<(power*1.341022);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***HORSEPOWERS TO KILOWATTS CONVERSION***";
	  cout<<"\n\n\n\tPOWER IN HORSEPOWERS: ";
	  cin>>power;
	  cout<<"\n\n\tPOWER IN KILOWATTS: "<<(power/1.341022);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***KILOWATTS TO WATTS CONVERSION***";
	  cout<<"\n\n\n\tPOWER IN KILOWATTS: ";
	  cin>>power;
	  cout<<"\n\n\tPOWER IN WATTS: "<<(power*1000);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t***WATTS TO KILOWATTS CONVERSION***";
	  cout<<"\n\n\n\tPOWER IN WATTS: ";
	  cin>>power;
	  cout<<"\n\n\tPOWER IN KILOWATTS: "<<(power/1000);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void pressureconverter()                        //DEFINITION
{
 int choice;
 long double pressure;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***PRESSURE-CONVERTER***";
 cout<<"\n\n\n\tPRESSURE CONVERSION MENU";
 cout<<"\n\n\t\t1- ATMOSPHERES TO BARS";
 cout<<"\n\t\t2- BARS TO ATOMSPHERES";
 cout<<"\n\t\t3- ATMOSPHERES TO PASCALS";
 cout<<"\n\t\t4- PASCALS TO ATMOSPHERES";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***ATMOSPHERES TO BARS CONVERSION***";
	  cout<<"\n\n\n\tPRESSURE IN ATMOSPHERES: ";
	  cin>>pressure;
	  cout<<"\n\n\tPRESSURE IN BARS: "<<(pressure*1.01325);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***BARS TO ATMOSPHERES CONVERSION***";
	  cout<<"\n\n\n\tPRESSURE IN BARS: ";
	  cin>>pressure;
	  cout<<"\n\n\tPRESSURE IN ATMOSPHERES: "<<(pressure/1.01325);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***ATMOSPHERES TO PASCALS CONVERSION***";
	  cout<<"\n\n\n\tPRESSURE IN ATMOSPHERES: ";
	  cin>>pressure;
	  cout<<"\n\n\tPRESSURE IN PASCALS: "<<(pressure*101325);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t***PASCALS TO ATMOSPHERES CONVERSION***";
	  cout<<"\n\n\n\tPRESSURE IN PASCALS: ";
	  cin>>pressure;
	  cout<<"\n\n\tPRESSURE IN ATMOSPHERES: "<<(pressure/101325);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void angleconverter()                        //DEFINITION
{
 int choice;
 long double angle;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***ANGLE-CONVERTER***";
 cout<<"\n\n\n\tANGLE CONVERSION MENU";
 cout<<"\n\n\t\t1- RADIANS TO DEGREES";
 cout<<"\n\t\t2- DEGREES TO RADIANS";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***RADIANS TO DEGREES CONVERSION***";
	  cout<<"\n\n\n\tANGLE IN RADIANS: ";
	  cin>>angle;
	  cout<<"\n\n\tANGLE IN DEGREES: "<<(angle*57.9578);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***DEGREES TO RADIANS CONVERSION***";
	  cout<<"\n\n\n\tANGLE IN DEGREES: ";
	  cin>>angle;
	  cout<<"\n\n\tANGLE IN RADIANS: "<<(angle/57.9578);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void energyconverter()                        //DEFINITION
{
 int choice;
 long double energy;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***ENERGY-CONVERTER***";
 cout<<"\n\n\n\tENERGY CONVERSION MENU";
 cout<<"\n\n\t\t1- KILOJOULES TO JOULES";
 cout<<"\n\t\t2- JOULES TO KILOJOULES";
 cout<<"\n\t\t3- KILOJOULES TO FOOD CALORIES";
 cout<<"\n\t\t4- FOOD CALORIES TO KILOJOULES";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t***KILOJOULES TO JOULES CONVERSION***";
	  cout<<"\n\n\n\tENERGY IN KILOJOULES: ";
	  cin>>energy;
	  cout<<"\n\n\tENERGY IN JOULES: "<<(energy*1000);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t***JOULES TO KILOJOULES CONVERSION***";
	  cout<<"\n\n\n\tENERGY IN JOULES: ";
	  cin>>energy;
	  cout<<"\n\n\tENERGY IN KILOJOULES: "<<(energy/1000);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t***KILOJOULES TO FOOD CALORIES CONVERSION***";
	  cout<<"\n\n\n\tENERGY IN KILOJOULES: ";
	  cin>>energy;
	  cout<<"\n\n\tENERGY IN FOOD CALORIES: "<<(energy*0.239006);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t***FOOD CALORIES TO KILOJOULES CONVERSION***";
	  cout<<"\n\n\n\tENERGY IN FOOD CALORIES: ";
	  cin>>energy;
	  cout<<"\n\n\tENERGY IN KILOJOULES: "<<(energy/0.239006);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void speedconverter()                        //DEFINITION
{
 int choice;
 long double speed;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***SPEED-CONVERTER***";
 cout<<"\n\n\n\tSPEED CONVERSION MENU";
 cout<<"\n\n\t\t1- KILOMETRES PER HOUR TO MILES PER HOUR";
 cout<<"\n\t\t2- MILES PER HOUR TO KILOMETRES PER HOUR";
 cout<<"\n\t\t3- MACH TO KILOMETRES PER HOUR";
 cout<<"\n\t\t4- KILOMETRES PER HOUR TO MACH";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t***KILOMETRES PER HOUR TO MILES PER HOUR CONVERSION***";
	  cout<<"\n\n\n\tSPEED IN KILOMETRES PER HOUR: ";
	  cin>>speed;
	  cout<<"\n\n\tSPEED IN MILES PER HOUR: "<<(speed*0.621427);
	  break;

  case 2: clrscr();
	  cout<<"\t\t***MILES PER HOUR TO KILOMETRES PER HOUR CONVERSION***";
	  cout<<"\n\n\n\tSPEED IN KILOMETRES PER HOUR: ";
	  cin>>speed;
	  cout<<"\n\n\tSPEED IN MILES PER HOUR: "<<(speed/0.621427);
	  break;

  case 3: clrscr();
	  cout<<"\t\t***MACH TO KILOMETRES PER HOUR CONVERSION***";
	  cout<<"\n\n\n\tSPEED IN MACH: ";
	  cin>>speed;
	  cout<<"\n\n\tSPEED IN KILOMETRES PER HOUR: "<<(speed*1225.08);
	  break;

  case 4: clrscr();
	  cout<<"\t\t***KILOMETRES PER HOUR TO MACH CONVERSION***";
	  cout<<"\n\n\n\tSPEED IN KILOMETRES PER HOUR: ";
	  cin>>speed;
	  cout<<"\n\n\tSPEED IN MACH: "<<(speed/1225.08);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}