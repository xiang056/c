# 太陽能自動澆水系統 (Solar-Powered Smart Watering System)

## 📌 專案簡介
本專案是一個以 **Arduino** 為核心，整合太陽能供電與多種感測器的智慧澆水系統。  
能根據環境狀態自動啟動澆水，並透過 OLED 螢幕即時顯示運行資訊，達成節能與自動化農業應用。  

## 🛠 使用技術與工具
- **開發板**：Arduino UNO
- **感測器**：
  - 土壤濕度感測器
  - 溫度/濕度感測器 (DHT11/DHT22)
- **輸出裝置**：
  - 繼電器控制水泵
  - 風扇降溫系統
  - OLED 顯示模組
- **能源來源**：太陽能板 + 鋰電池
- **其他技術**：
  - 任務排程 (Timer)
  - 模組化程式架構

## 📐 系統架構
太陽能板 → 電源管理模組 → Arduino → 感測器/繼電器控制 → 水泵 & 風扇 → OLED 顯示

## 🔍 功能特色
- 自動澆水：土壤濕度低於設定值時啟動
- 環境監控：顯示土壤濕度、溫濕度與系統狀態
- 節能運行：太陽能供電，夜間休眠模式
- 溫控風扇：當溫度超過設定值時自動啟動

## 📊 成果與數據
- **澆水效率**：較人工澆水節省 **90% 時間**
- **續航能力**：日照不足時可運行 **48 小時**
- **可靠性**：連續運行測試 **7 天無故障**

#include <OneWire.h> 
#include <DallasTemperature.h> 

#define ONE_WIRE_BUS 8   

OneWire oneWire(ONE_WIRE_BUS); 

DallasTemperature sensors(&oneWire); 

#include <Wire.h> 

#include <LiquidCrystal_I2C.h>  

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // 設定 LCD I2C 位址 

#include <Narcoleptic.h> 

 

const byte SEN = 5; 

const byte WAT = 6; 

const byte SETT = 9; 

const byte SETU = 3; 

const byte SETD = 4; 

const byte SSH = 2; 

const byte ENLCD = 7; 

const byte FAN = 10; 

int wtt = 0, it, ik = 0;              //變數宣告 

int timer[] = {10, 0, 0, 8, 0};            //變數宣告 

float temp1;              //變數宣告 

void setup(void)//初始化設定 

{ 

  pinMode(SEN, INPUT);      //設定腳位方向 

  pinMode(WAT, OUTPUT);     //設定腳位方向 

  pinMode(SETT, INPUT);     //設定腳位方向 

  pinMode(SETU, INPUT);     //設定腳位方向 

  pinMode(SETD, INPUT);     //設定腳位方向 

  pinMode(SSH, INPUT);      //設定腳位方向 

  pinMode(13, OUTPUT);      //設定腳位方向 

  pinMode(FAN, OUTPUT);     //設定腳位方向 

 

  digitalWrite(SEN, HIGH);      //腳位設為HIGH 

  digitalWrite(WAT, LOW);      //腳位設為LOW 

  digitalWrite(SETT, HIGH);     //腳位設為HIGH 

  digitalWrite(SETU, HIGH);     //腳位設為HIGH 

  digitalWrite(SETD, HIGH);     //腳位設為HIGH 

  digitalWrite(SSH, HIGH);      //腳位設為HIGH 

  digitalWrite(13, LOW);        //腳位設為LOW 

  pinMode(ENLCD, OUTPUT);  //設定為輸出腳 

  digitalWrite(ENLCD, HIGH); // 輸出HIGH 

  digitalWrite(FAN, LOW);      //腳位設為LOW 

  sensors.begin();          //開啟DS8B20溫度感測功能 

} 

void lcdint() //顯示LCD主畫面 

{ 

  lcd.begin(16, 2);         // 初始化 LCD 

  lcd.setCursor(0, 0);    //lcd顯示在第1行第1字 

  lcd.print("Time   :  :     "); 

  lcd.setCursor(0, 1);    //lcd顯示在第2行第1字 

  lcd.print("Alarm   :       "); 

  lcd.setCursor(6, 1);    //lcd顯示在第2行第7字 

  lcd.print(timer[3] / 10); 

  lcd.print((timer[3] % 10)); 

  lcd.setCursor(9, 1);   //lcd顯示在第2行第10字 

  lcd.print(timer[4] / 10); 

  lcd.print((timer[4] % 10)); 

} 

void showt(void)  //顯示時間 

{ 

  if (timer[0] > 23)timer[0] = 0; if (timer[1] > 59)timer[1] = 0; if (timer[2] > 59)timer[2] = 0; 

  if (timer[0] < 0)timer[0] = 23; if (timer[1] < 0)timer[1] = 59; if (timer[2] < 0)timer[2] = 59; 

  lcd.setCursor(5, 0);              //lcd顯示在第1行第6字 

  lcd.print(timer[0] / 10);  //顯示目前時間 小時 

  lcd.print((timer[0] % 10)); //顯示目前時間 小時 

  lcd.setCursor(8, 0);              //lcd顯示在第1行第9字 

  lcd.print(timer[1] / 10);  //顯示目前時間 分鐘 

  lcd.print((timer[1] % 10)); //顯示目前時間 分鐘 

  lcd.setCursor(11, 0);             //lcd顯示在第1行第12字 

  lcd.print(timer[2] / 10);  //顯示目前時間 秒數 

  lcd.print((timer[2] % 10)); //顯示目前時間 秒數 

 

  if (timer[3] > 23)timer[3] = 0; if (timer[4] > 59)timer[4] = 0; 

  if (timer[3] < 0)timer[3] = 23; if (timer[4] < 0)timer[4] = 59; 

  lcd.setCursor(6, 1);              //lcd顯示在第2行第7字 

  lcd.print(timer[3] / 10);  //顯示澆水時間 小時 

  lcd.print((timer[3] % 10)); //顯示澆水時間 小時 

  lcd.setCursor(9, 1);              //lcd顯示在第2行第10字 

  lcd.print(timer[4] / 10);  //顯示澆水時間 分鐘 

  lcd.print((timer[4] % 10)); //顯示澆水時間 分鐘 

} 

void sowcu(void)        //設定LCD游標位置 

{ 

  switch (it) 

  { 

    case 0:        // 若0 為位為第1行第6字 

      lcd.setCursor(5, 0); 

      break; 

    case 1:        // 若1 為位為第1行第9字 

      lcd.setCursor(8, 0); 

      break; 

    case 2:        // 若2 為位為第1行第12字 

      lcd.setCursor(11, 0); 

      break; 

    case 3:        // 若3 為位為第2行第7字 

      lcd.setCursor(6, 1); 

      break; 

    case 4:         // 若4 為位為第2行第10字 

      lcd.setCursor(9, 1); 

      break; 

 

  } 

} 

 

void settime(void)      //設定時間及定時功能 

{ 

  int sok = 0; 

  it = 0; 

  while (sok == 0) 

  { 

    if (digitalRead(SETU) == LOW) //按下設定+鍵時 

    { 

      timer[it] = timer[it] + 1;  //設定值加1 

      showt();                    //顯示設定值 

      while (digitalRead(SETU) == LOW); //等待放開按鍵 

      sowcu();                        //設定LCD游標位置 

      delay(100); 

    } 

    if (digitalRead(SETD) == LOW) //按下設定-鍵時 

    { 

      timer[it] = timer[it] - 1;  //設定值減1 

      showt();                   //顯示設定值 

      while (digitalRead(SETD) == LOW); //等待放開按鍵 

      sowcu();                        //設定LCD游標位置 

      delay(100); 

    } 

 

    if (digitalRead(SETT) == LOW) //按下設定鍵時 

    { 

      while (digitalRead(SETT) == LOW); //等待放開按鍵 

      it++;                 //陣列位置加1 陣列內容為時 分 秒 定時時 定時分 

      sowcu();              //設定LCD游標位置 

      delay(200); 

      if (it > 4) sok = 1;   //加到5時 設定完成 

    } 

  } 

  lcd.noCursor();     //不顯示游標 

 

} 

void loop(void) 

{ 

  Narcoleptic.delay(906); //進入省電模式 延時906mS，含以下程式碼，約1秒 

  if (wtt > 0)          //當wtt大於0時，表示正在抽水 

  { 

    wtt--;          //抽水時間減1(秒) 

    if (wtt == 0)   //抽水時間到？ 

    { 

      digitalWrite(WAT, LOW);    //抽水馬達停止 

      digitalWrite(13, LOW);    //指示燈暗 

    } 

  } 

  timer[2] = timer[2] + 1;    //時鐘進位計算  秒加1 

  if (timer[2] > 59)          //時鐘進位計算  秒>59 

  { timer[2] = 0;              //時鐘進位計算  秒=0 分加1 

    timer[1] = timer[1] + 1; 

    if (timer[1] > 59)      //時鐘進位計算  分>59 

    { timer[1] = 0;          //時鐘進位計算  分=0 時加1 

      timer[0] = timer[0] + 1; 

      if (timer[0] > 23)  //時鐘進位計算  時>23 則 時變0 

      { 

        timer[0] = 0; 

      } 

    } 

  } 

  if (digitalRead(SSH) == LOW) //按下顯示鍵時 

  { 

    if (ik == 0)  //一開始按下時，ik為0，初始化lcd 

    { 

      delay(100); 

      pinMode(ENLCD, OUTPUT);  //設定為輸出腳 

      digitalWrite(ENLCD, LOW); // 輸出LOW LCD供電 

      delay(200); 

      lcdint(); 

      ik = 1; 

    } 

 

    lcd.setCursor(5, 0);            //lcd顯示在第1行第6字 

    lcd.print(timer[0] / 10); //小時 

    lcd.print(timer[0] % 10); 

    lcd.setCursor(8, 0);            //lcd顯示在第1行第9字 

    lcd.print(timer[1] / 10); //分 

    lcd.print(timer[1] % 10); 

    lcd.setCursor(11, 0);           //lcd顯示在第1行第12字 

    lcd.print(timer[2] / 10); //秒 

    lcd.print(timer[2] % 10); 

 

    sensors.requestTemperatures(); 

    // 取得溫度讀數（攝氏）並輸出， 

    // 參數0代表匯流排上第0個1-Wire裝置 

    temp1 = sensors.getTempCByIndex(0); 

    lcd.setCursor(12, 1);        //lcd顯示在第1行第13字 

    lcd.print(temp1, 1);          //顯示溫度 

 

    if (temp1 > 30) //當溫度>30度時 

    { 

      digitalWrite(FAN, HIGH);      //腳位設為HIGH 風扇啟動 

    } 

    else 

    { 

      digitalWrite(FAN, LOW);      //腳位設為LOW 風扇停止 

    } 

    if (digitalRead(SETT) == LOW)   //按下設定鍵時 

    { 

      lcd.setCursor(5, 0); 

      lcd.cursor();                 //顯示游標 

      while (digitalRead(SETT) == LOW); //等待放開按鍵 

      delay(200); 

      settime();                    //設定時間及定時功能 

    } 

  } 

  else 

  { 

    ik = 0;     //放開顯示鍵，ik設0 

    pinMode(ENLCD, INPUT);  //準備進入省電模式前 先設定為輸入腳(不輸出 較省電) 

    digitalWrite(ENLCD, HIGH); 

  } 

  if (timer[0] == timer[3] && timer[1] == timer[4] && timer[2] == 0 && digitalRead(SEN) == HIGH) //目前時間=定時時間 且土壤溼度為乾時 

  { 

    digitalWrite(WAT, HIGH);     //開啟抽水馬達 

    digitalWrite(13, HIGH);     //指示燈亮 

    /* 

      if (digitalRead(SSH) == LOW) 

      { 

      delay(300); 

      lcdint(); 

      } 

    */ 

 

 

    wtt = 10;                    //馬達運作10秒 

  } 

} 

 
 

矩形 1, 文字方塊 

結論 



