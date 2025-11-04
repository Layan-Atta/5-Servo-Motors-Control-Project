#include <Servo.h> // استدعاء مكتبة السيرفو

// 1. إنشاء 5 كائنات (Objects) للسيرفو
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
  // 2. توصيل كل سيرفو بالمنفذ (PIN) الخاص به
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(6);
  servo5.attach(3);

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  // الانتظار لحظة للتأكد من أن كل شيء جاهز
  delay(500);

  // --- بدء المهمة المطلوبة ---

  // 3. الجزء الأول: حركة "Sweep" (مسح)
  // (هذه الحركة ستستغرق حوالي ثانيتين مع هذا التأخير)

  // حركة من 0 إلى 180 درجة
  for (int pos = 0; pos <= 180; pos += 1) { 
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    delay(5); // تأخير بسيط لجعل الحركة مرئية (تقريباً 1 ثانية)
  }

  // حركة العودة من 180 إلى 0 درجة
  for (int pos = 180; pos >= 0; pos -= 1) { 
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    delay(5); // تأخير بسيط (تقريباً 1 ثانية)
  }

  // 4. الجزء الثاني: التوقف عند 90 درجة
  // بعد انتهاء الـ "Sweep"، اجعلها كلها تقف عند 90
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
}

void loop() {
  // لا نضع أي كود هنا، لأننا نريد تنفيذ المهمة مرة واحدة فقط.
}