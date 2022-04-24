# IOT Basic
ค่ายอบรมการพัฒนาระบบ IOT BootCamp UP.

## สรุปประเด็นสำคัญ
- IOT ไม่ได้ยาก แค่จำเป็นต้องรู้ว่าในแต่ละ ขาและพอร์ต นั้นมีความหมายว่าอะไร
- บอร์ด Arduino เป็นบอร์ดที่เป็น open source ที่มักจะมีตัวอย่าง code ให้ศึกษาเบื้องต้น ทำให้พัฒนาต่อได้ง่าย 
- ต้องเข้าใจเรื่อง Analog และ Digital ซึ่งเป็นหัวใจหลักในการใช้ IOT เลยก็ว่าได้
- การอัพตัว code ลงในบอร์ดจะเป็นแบบ อัพแทนที่ code ของเดิม
- บอร์ด IOT มีหลายชนิดมากซึ่ง ในแต่ละบอร์ดจะมีองค์ประกอบไม่ต่างกันมากนัก ต่างแค่จำนวน ขา, พอร์ต, bit, เป็นต้น
- ที่เราเห็นหลอดไฟ มีความสว่างที่อ่อนลง ที่จริงเกิดจากหลอดไฟมันกระพิบที่เร็วมากๆ จนตามนุษย์มองไม่ทัน 
- หลอดไฟ LED สีแดงจะใช้ 1.0 V แล้วไฟออก แต่หลอดไฟสีเขียว จะใช้ 2.0 V ไฟถึงออก

## อุปกรณ์ที่ใช้
- โปรแกรม Arduino [[download]](https://www.arduino.cc/en/software) 
- บอร์ด arduino uno [[show example]](https://user-images.githubusercontent.com/58208814/164977312-63938ac6-bb9c-4710-a4c6-2e94ded350ef.png) 
- บอร์ด ESP32 [[show example]](https://user-images.githubusercontent.com/58208814/164979447-5da10150-103c-4de3-8dbe-bd00b9d95967.png) 
- Breadboard [[show example]](https://user-images.githubusercontent.com/58208814/164979847-82511e74-0b7c-43b6-b35a-346aaf3dc863.png) 
- Ralay [[show example]](https://user-images.githubusercontent.com/58208814/164980045-389486ee-161b-46f3-b577-ef237362961e.png) 
- สาย USB Type B For Arduino Uno [[show example]](https://user-images.githubusercontent.com/58208814/164977485-0f2dd35e-7eda-425e-a67d-d2e68dd1b850.png)
- สายไฟ Jumper [[show example]](https://user-images.githubusercontent.com/58208814/164979220-e6783db4-bf3f-4d6b-b4e9-04cb1026f978.png)
- R Fuse ตัวต้านท้านไฟฟ้า [[show example]](https://user-images.githubusercontent.com/58208814/164979912-561d1662-f821-4c30-81fa-f6ae7c794730.png)
- หลอดไฟ LED
- sensor รับแสง
- sensor รับปุ่มกดคลิก
- sensor ตรวจอุณภูมิ และความชื่น
- ตัวหมุนปรับ volume ไฟฟ้า

## เนื้อหาโดยรวม
- บอร์ด Arduino
  - Blink LED
  - Analog and Digital
  - เขียนกับตัวรับ sensor ปุ่มกด
  - เขียนกับตัวรับ sensor แสง
  - เขียนกับตัวปรับ volume ไฟฟ้า
  - เขียนกับตัวรับ sensor ตรวจสอบอุณหภูมิ
  - การต่อแผงวงจรกับ Breadboard
  - การควบคุมตัว Ralay ในการเปิด-ปิด ระบบน้ำ
- บอร์ด ESP32
  - เชื่อมต่อ wifi
  - เขียนทดสอบตัวรับอุณหภูมิ
  - เขียน IOT ติดต่อกับ Line
  - เขียน IOT ติดต่อกับ Google sheet


## 1. Intro IOT
### 1.1 ประวัติความเป็นมา
