// ตั้งค่าพารามิเตอร์
float amplitude = 1.0;   // ความสูงของคลื่น (A)
float angularFrequency = 0.5 / PI;  // ความถี่มุม (w) = 0.5 / PI
float x =0.0;

int t = 0;  // เวลา (t)

void setup() {
  Serial.begin(9600); // เริ่มต้น Serial communication ที่ baud rate 9600
}

void loop() {
  // คำนวณค่า y โดยใช้สมการ y(t) = A * sin(wt + p)
  float y_sin = amplitude * sin(angularFrequency * t + 1.0);
  float y_cos = amplitude * cos(angularFrequency * t + 0.0);

  // ส่งค่า y ไปที่ Serial Plotter
  Serial.printf("%f %f %f \n",y_sin,y_cos,x);

  t++;  // เพิ่มค่าเวลาทุกครั้งที่ loop ทำงาน
  delay(10); // รอ 10 milliseconds ระหว่างการส่งค่า
}
