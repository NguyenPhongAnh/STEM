# STEM
# Tổng quan
Git này hướng dẫn sử dụng board STEM

## Nguồn điện
- Đầu vào: 12V DC 
- Nguồn ra: 
    + M1, M2: 12V
    + Servor x4: 5V DC
    + Cảm biến siêu âm:           5VDC  HC-SR04  link mua hàng: https://www.thegioiic.com/hc-sr04-cam-bien-sieu-am
    + Cảm biến dò line:           5VDC  LM393    link mua hàng: https://nshopvn.com/product/cam-bien-vat-can-hong-ngoai/
    + Cảm biến báo cháy:          5VDC  LM393    link mua hàng: https://www.thegioiic.com/lm393-mach-cam-bien-hong-ngoai-phat-hien-lua-3-chan
    + Cảm biến ánh sáng:          5VDC  LM393    link mua hàng: https://www.thegioiic.com/lm393-cam-bien-anh-sang-photodiode
    + Cảm biến nhiệt độ và độ ẩm: 5V    DHT11    link mua hàng: https://www.thegioiic.com/dht11-mach-cam-bien-nhiet-do-va-do-am-den
## Chân tín hiệu điều khiển của thiết bị tích hợp trên board.

|Tên thiết bị          |Nguồn dương  | Nguồn âm |  Chân 1 |  Chân 2 |  Chân 3 |  Chân 4  |  Chân 5 |  Chân 6 |  
|-----------           |-------------|----------|---------|---------|---------|----------|---------|---------| 
|Led RGB               |     5V      |    GND   |   D25   |         |         |          |         |         |                      
|Buzzer                |     5V      |    GND   |   D26   |         |         |          |         |         |         
|Button                |     5V      |    GND   |   D19   |
|MPU                   |     5V      |    GND   |   SDA   |   SCL   |    D32  |          |         |         |       
|Cảm biến siêu âm      |     5V      |    GND   |   D25   |   D13   |   D16   |   D17    |         |         |         
|Cảm biến dò line      |     5V      |    GND   |   D36   |   D39   |   D34   |   D35    |         |         |        
|L293D                 |     5V      |    GND   | IN1_D2  |  IN2_D5 | IN3_D27 |  IN4_D4  | EN1_D23 | EN2_D15 | 

## Các chân tín hiệu của cổng Servo_X
|Tên cổng   |Nguồn dương|Nguồn âm |Chân tín hiệu Servo |Chân tích hợp 1|Chân tích hợp 2|
|-----------|-----------|----------|-------------------|---------------|---------------|
|Servo 1    |5V         |GND       |SV1                |D14            |D33            |
|Servo 2    |5V         |GND       |SV2                |D17            |D36            |
|Servo 3    |5V         |GND       |SV3                |D16            |D39            |
|Servo 4    |5V         |GND       |SV4                |D12            |D32            |
|Servo 5    |5V         |GND       |SV5                |D25            |D35            |
|Servo 6    |5V         |GND       |SV6                |D13            |D34            |

## Các chân tín hiệu của I2C
|I2C     |5V      |GND    |SCL_D22     |SDA_D21    |
|--------|--------|-------|------------|-----------|