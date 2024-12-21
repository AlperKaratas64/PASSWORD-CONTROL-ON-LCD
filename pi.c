#include<16F877.h>
#include<stdio.h>
#FUSES XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NOCPD
#bit led=0x05.0
#bit TRIS_led=0x85.0
#byte lcd=0x06
#byte TRIS_lcd=0x86
#bit rs=0x07.0
#bit TRIS_rs=0x87.0
#bit en=0x07.1
#bit TRIS_en=0x87.1
#bit relay=0x07.2
#bit TRIS_relay=0x87.2
#bit C1=0x08.0
#bit C2=0x08.1
#bit C3=0x08.2
#bit R1=0x08.3
#bit R2=0x08.4
#bit R3=0x08.5
#bit R4=0x08.6
#bit TRIS_C1=0x88.0
#bit TRIS_C2=0x88.1
#bit TRIS_C3=0x88.2
#bit TRIS_R1=0x88.3
#bit TRIS_R2=0x88.4
#bit TRIS_R3=0x88.5
#bit TRIS_R4=0x88.6
#use delay(clock=4000000)
void display(unsigned char a,int b);  //LCD 
char keypad();                               //Keypad 
void check();                                 //Parola kontrol rutini
char sifre[5]={"2580"};         //Önceden tanýmlanmýþ þifre
char sfr[5];
unsigned char acik_msg[15]="Sifreyi girin:";
unsigned char dogru_msg[8]="HOSGELDÝNÝZ";
unsigned char yanlis_msg[15]="YANLIS SÝFRE";
char c;
int flag,i,count,j;
void main()
{
   TRIS_lcd=TRIS_en=TRIS_rs=TRIS_led=TRIS_relay=0; //Yol tarifi ayarlandý
   TRIS_R1=TRIS_R2=TRIS_R3=TRIS_R4=count=0;
   TRIS_C1=TRIS_C2=TRIS_C3=1;
    while(TRUE)
    {
     c=keypad();
     {
     if(c=='*')                                    //Koþulu baþlat
     {
     flag=1;                                       //Diðer anahtarlarý taramak için bayrak ayarlandý
     count=0;
     display(0x01,0);
     display(0x38,0);
     display(0x0f,0);
     display(0x80,0);
     for(i=0;i<=13;i++)
     {
     display(acik_msg[i],1);
     }
     display(0xc0,0);
     }
     else if(c=='#')                         //koþul kapatýlýyor
     {
     count=0;
     relay=0;
     display(0x01,0);
     display(0x0c,0);
     }
     else
     {
     display('*',1);
     sfr[count]=c;                   //Giriþi yeni dizilerde depolamak
     count=count+1; 
     check();                             
     }
     }
   }
}
void display(unsigned char a,int b)
  {
    lcd=a;
    rs=b;
    en=1;
    delay_ms(10);
    en=0;
    delay_ms(10);
  }
char keypad()                       
 {
  if(flag==0)                            //Baþlatma Bekleniyor
  {
    while(TRUE)
    {
     R4=1; 
     R1=R2=R3=0;
     if(C1==1)
      {
        while(C1==1);
        count=0;
        return '*';
      }
     if(C3==1)
      {
        while(C3==1);
        count=0;
        return '#';
      }
   }
 }
else if(flag==1)
{
while(TRUE)                      //Keypad okuma
{
R1=1;
R2=R3=R4=0;
if(C1==1)
{
while(C1==1);
return '1';
}
if(C2==1)
{
while(C2==1);
return '2';
}
if(C3==1)
{
while(C3==1);
return '3';
}
R2=1;
R1=R3=R4=0;
if(C1==1)
{
while(C1==1);
return '4';
}
if(C2==1)
{
while(C2==1);
return '5';
}
if(C3==1)
{
while(C3==1);
return '6';
}
R3=1;
R1=R2=R4=0;
if(C1==1)
{
while(C1==1);
return '7';
}
if(C2==1)
{
while(C2==1);
return '8';
}
if(C3==1)
{
while(C3==1);
return '9';
}
R4=1;
R1=R2=R3=0;
if(C1==1)
{
while(C1==1);
return '*';
}
if(C2==1)
{
while(C2==1);
return '0';
}
if(C3==1)
{
while(C3==1);
return '#';
}
}
}
}
void check()
{
if(count>3)                 //Giriþ sayýsý 3'ü aþarsa karþýlaþtýrma yürütülür
 {
 flag=count=0;
 j=strcmp(sfr,sifre);     //Girdi ve Önceden Tanýmlanmýþ þifrenin'nin karþýlaþtýrýlmasý
 if(j==1)
   {
      relay=1;                         //relay açýlýyor
      display(0x01,0);
      display(0x80,0);
      for(i=0;i<=6;i++)
      {display(dogru_msg[i],1);}
   }
 else
   {
      relay=0;
      display(0x01,0);
      display(0x80,0);
      for(i=0;i<=13;i++)
      {display(yanlis_msg[i],1);}
   }
 }
}
