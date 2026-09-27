#include "sdk_project_config.h"
int main(void){
	CLOCK_DRV_Init(&clockMan1_InitConfig0);
	PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0,g_pin_mux_InitConfigArr0);
	PWM_Init(&pwm_pal_1_instance,&pwm_pal_1_configs);
	PWM_Init(&pwm_pal_2_instance,&pwm_pal_2_configs);

	for (;;){
		//PWM_UpdateDuty(&pwm_pal_1_instance,0u,1000);
		OSIF_TimeDelay(100);
		PWM_UpdateDuty(&pwm_pal_1_instance,0u,0);
		PWM_UpdateDuty(&pwm_pal_1_instance,1u,1000);
		OSIF_TimeDelay(100);
		PWM_UpdateDuty(&pwm_pal_1_instance,1u,0);
		PWM_UpdateDuty(&pwm_pal_2_instance,0u,1000);
		OSIF_TimeDelay(100);
		PWM_UpdateDuty(&pwm_pal_2_instance,0u,0);


	}
}
