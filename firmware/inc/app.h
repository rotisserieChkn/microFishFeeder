
#include "fishFunctions.h"

void chase();
void myAppInit();
void myAppRun();




extern ADC_HandleTypeDef hadc;
extern RTC_HandleTypeDef hrtc;
extern TIM_HandleTypeDef htim6;
extern PCD_HandleTypeDef hpcd_USB_FS;



extern volatile int disp_ctl;
extern uint32_t adc_val;
extern int feed_counter;
extern int feed_limit;