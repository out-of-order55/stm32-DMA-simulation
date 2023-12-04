#include "sys.h"
#include "usart.h"
#include "delay.h"
int main(void)
{
u8 t=0;
Stm32_Clock_Init(9); //系统时钟设置
delay_init(72); //延时初始化
uart_init(72,115200); //串口初始化为 115200
while(1)
{
printf("t:%d\r\n",t);
delay_ms(500);
t++;
}
}