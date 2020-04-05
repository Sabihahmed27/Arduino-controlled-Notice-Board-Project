#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
byte u[8]={0x02,0x04,0x04,0x04,0x04,0x04,0x04,0x08};
byte u1[8]={0x00,0x00,0x00,0x11,0x0E,0X00,0X04};
byte u2[8]={0x00,0x00,0x00,0X11,0X0E,0x00,0X04,0X0A};
byte u3[8]={0x00,0x0A,0x00,0x11,0x0E,0x00,0x00};
byte u4[8]={0x04,0x06,0x06,0x00,0x11,0x0E,0x00,0x00};
byte u5[8]={0x00,0x0A,0x04,0x11,0x0E,0x00,0x00};
byte u6[8]={0x1F,0x12,0x14,0x08,0x14,0x11,0x0A,0x04};
byte u7[8]={0x1F,0x12,0x14,0x08,0x16,0x15,0x0A,0x04};
byte u_[8]={0x1F,0x12,0x14,0x08,0x10,0x11,0x0A,0x04};
byte u9[8]={0x04,0x1F,0x12,0x08,0x10,0x11,0x0A,0x04};
byte u10[8]={0x00,0x06,0x09,0x11,0x01,0x01,0x12,0x0c};
byte u11[8]={0x08,0x06,0x09,0x11,0x01,0x01,0x12,0x0c};
byte u12[8]={0x00,0x08,0x04,0x02,0x02,0x04,0x08};
byte u13[8]={0x04,0x08,0x04,0x02,0x02,0x04,0x08};
byte u14[8]={0x00,0x00,0x15,0x1F,0x08,0x07,0x11,0x0E};
byte u15[8]={0x04,0x0A,0x15,0x1F,0x08,0x07,0x11,0x0E};
byte u16_[8]={0x00,0x07,0x05,0x17,0x14,0x14,0x14,0x08};
byte u17[8]={0x02,0x07,0x05,0x17,0x14,0x14,0x14,0x08};
byte u18[8]={0x10,0x10,0x11,0x13,0x15,0x19,0x1E};
byte u19[8]={0x10,0x10,0x15,0x13,0x15,0x19,0x1E};
byte u20[8]={0x00,0x04,0x08,0x04,0x08,0x10,0x11,0x0E};
byte u21[8]={0x08,0x04,0x08,0x04,0x08,0x10,0x11,0x0E};
byte u22[8]={0x00,0x02,0x05,0x0A,0x04,0x11,0x0E};
byte u23[8]={0x00,0x00,0x01,0x02,0x04,0x11,0x0E};
byte u24[8]={0x01,0x01,0x01,0x01,0x11,0x11,0x0E};
byte u25[8]={0x1F,0x15,0x17,0x10,0x10,0x10,0x10};
byte u26[6]={0x11,0x11,0x15,0x11,0x0A,0x04};
byte u27[6]={0x04,0x0A,0x15,0x15,0x08,0x10};
byte u28[8]={0x02,0x05,0x04,0x03,0x11,0x11,0x11,0x0E};
byte u29[6]={0x00,0x00,0x01,0x1F,0x10,0x1F};



//byte u30[8]={0x01,0x01,0x01,0x01,0x01,0x15,0x15,0x1D};
byte urdu1[8]={0x01,0x01,0x01,0x01,0x01,0x15,0x15,0x1D};
byte urdu2[8]={0x08,0x08,0x08,0x08,0x08,0x0A,0x0A,0x1F};
byte urdu3[8]={0x00,0x10,0x08,0x04,0x03,0x01,0x00,0x1F};
byte urdu4[8]={0x03,0x05,0x1F,0x10,0x10,0x10,0x10,0x10};
byte urdu5[8]={0x00,0x00,0x1C,0x10,0x1C,0x00,0x00,0x00};
byte urdu6[8]={0x02,0x02,0x0A,0x0A,0x1F,0x00,0x00,0x10};
byte urdu7[8]={0x01,0x02,0x04,0x02,0x1F,0x00,0x00,0x01};
byte urdu8[8]={0x03,0x05,0x1F,0x14,0x17,0x10,0x10,0x10};
byte urdu9[8]={0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x10};
byte urdu10[8]={0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x10};
byte urdu11[8]={0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x10};

void setup()
{
lcd.begin(16, 2);
lcd.clear();
}
void loop()
{
  int i;
//  lcd.createChar(1,u30);
    lcd.createChar(1,urdu11);
      lcd.createChar(2,urdu10);
        lcd.createChar(3,urdu9);
  
  lcd.createChar(11,urdu1);
  lcd.createChar(10,urdu2);
  lcd.createChar(9,urdu3);
  lcd.createChar(8,urdu4);
  lcd.createChar(7,urdu5);
  lcd.createChar(6,urdu6);
  lcd.createChar(5,urdu7);
  lcd.createChar(4,urdu8);
//  lcd.createChar(1, u);
//  lcd.createChar(2, u1);
//  lcd.createChar(3, u2);
//  lcd.createChar(4, u3);
//  lcd.createChar(5, u4);
//  lcd.createChar(6, u5);
//  lcd.createChar(7, u6);
//  lcd.createChar(8, u7);    

//        lcd.setCursor(3,1);
 //       lcd.write(11);
  //      lcd.print("       ");
  //      delay(1000);
       
 for(i=11;i>3;i--){
        lcd.setCursor(i+5,0);
        lcd.write(i);
        delay(100);
     }  
    //for(i=0;i<3;i++){
      //  lcd.setCursor(i+,0);
       // lcd.write(i);
       // delay(100);
    // }   
//         lcd.clear();
//         lcd.print("URDU ALPHABETS!!");
//         lcd.createChar(1, u_);
//         lcd.createChar(2, u9);
//         lcd.createChar(3, u10);
//         lcd.createChar(4, u11);
//         lcd.createChar(5, u12);
//         lcd.createChar(6, u13);
//         lcd.createChar(7, u14);
//         lcd.createChar(8, u15);        
//  for(i=0;i<8;i++){
//        lcd.setCursor(i,1);
//        lcd.write(i+1);
//        delay(1000);
//  }  
//         lcd.clear();
//         lcd.print("URDU ALPHABETS!!");
//         lcd.createChar(1, u16_);
//         lcd.createChar(2, u17);
//         lcd.createChar(3, u18);
//         lcd.createChar(4, u19);
//         lcd.createChar(5, u20);
//         lcd.createChar(6, u21);
//         lcd.createChar(7, u22);
//         lcd.createChar(8, u23);  
//  for(i=0;i<8;i++){
//        lcd.setCursor(i,1);
//        lcd.write(i+1);
//        delay(1000);
//  } 
//         lcd.clear();
//         lcd.print("URDU ALPHABETS!!");
//         lcd.createChar(1, u24);
//         lcd.createChar(2, u25);
//         lcd.createChar(3, u26);
//         lcd.createChar(4, u27);
//         lcd.createChar(5, u28);
//         lcd.createChar(6, u29);
//         lcd.createChar(7, u30);
//for(i=0;i<7;i++){
//        lcd.setCursor(i,1);
//        lcd.write(i+1);
//        delay(1000);
//         }
//         lcd.clear();


              
}
