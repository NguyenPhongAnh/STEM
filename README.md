# Hướng dẫn sử dụng board STEM
## Nguồn điện
- Đầu vào: 7-40VDC 
- Đầu ra: 
    + DC M1, M2: 7-36VDC (Tùy thuộc vào loại động cơ sử dụng)
    + Servor: 5VDC
    + Cảm biến siêu âm - HC-SR04 : 5VDC link mua hàng: https://www.thegioiic.com/hc-sr04-cam-bien-sieu-am
    + Cảm biến dò line - LM393: 5VDC link mua hàng: https://nshopvn.com/product/cam-bien-vat-can-hong-ngoai/
    + Cảm biến báo cháy - LM393: 5VDC link mua hàng: https://www.thegioiic.com/lm393-mach-cam-bien-hong-ngoai-phat-hien-lua-3-chan
    + Cảm biến ánh sáng - LM393: 5VDC  link mua hàng: https://www.thegioiic.com/lm393-cam-bien-anh-sang-photodiode
    + Cảm biến nhiệt độ và độ ẩm: 5V link mua hàng: https://www.thegioiic.com/dht11-mach-cam-bien-nhiet-do-va-do-am-den
## Các chân tín hiệu
|Tên thiết bị          |Nguồn dương  | Nguồn âm |  Chân trên Board  |  Chân trên ESP   |
|--------------------- |-------------|----------|-------------------|------------------|
|Động cơ Servo         |     5V      |    GND   |SV1, SV2, SV3, SV4 |D27, D14, D12, D13|       
|L293D                 |     5V      |    GND   |OUT1,OUT2,OUT3,OUT4|D25, D26, D33, D32|      
|Cảm biến ANALOG       |     5V      |    GND   |     CB1,CB2,A0    |    VP,VN,D34     |         
|Cảm biến DIGITAL      |     5V      |    GND   | CB3,D0,TRIG,ECHO  |  D15,D35,D4,D2   | 
|LED RGB               |     5V      |    GND   |         X         |       TX0        |
|Relay                 |     5V      |    GND   |      RL1,RL2      |      D19,D18     |
|Buzzer                |     5V      |    GND   |         X         |       D21        |
|Encoder               |     5V      |    GND   |      ChA,ChB      |     D23,D22      |
      