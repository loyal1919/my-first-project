

#include "main.h"


//1.打开某个灯的函数
//位操作函数
//字节操作   
//低电平点亮 
//命名，规则： 设备_操作 设备大写 操作第一个字母大写
// 八个灯对应8个位
// P0口 = 0000 0000 = 0x00；

void LED_TurnOn(unsigned char lednum)
{
	switch(lednum)
	{				//不缺分大小写
		case LED1:	P1 = 0XFE;	break;
		//1111 1101 = 0XFD
		//1111 1110
		//1111 1101 
		//1010 1010
		case LED2:	P1 &= 0XFD;	break;
		case LED3:	P1 &= 0XFE;	break;
		case LED4:	P1 &= 0XFE;	break;
		case LED5:	P1 &= 0XFE;	break;
		case LED6:	P1 &= 0XFE;	break;
		case LED7:	P1 &= 0XFE;	break;
		case LED8:	P1 &= 0XFE;	break;
		// 1 3 5 7 亮 ； 
		case LEDFOUR: P1 = 0Xaa;break;
		// 2 4 6 8 
		// 0101 0101 
		case LEDFOUR1: P1 = 0X55;break;
	
		default:break;
	}


}

//2.关闭某个灯的函数
void LED_TurnOff(unsigned char lednum)
{
	switch(lednum)
	{				//不缺分大小写
	    //0101 0100
		//0000 0001 
		case LED1:	P1 |= 0X01;	break;
		//1111 1101 = 0XFD
		//1111 1110
		//1111 1101 
		//1010 1010
		case LED2:	P1 &= 0XFD;	break;
		case LED3:	P1 &= 0XFE;	break;
		//0000 1000
		case LED4:	P1 |= 0X08;	break;
		case LED5:	P1 &= 0XFE;	break;
		case LED6:	P1 &= 0XFE;	break;
		case LED7:	P1 &= 0XFE;	break;
		//1000 0000 
		case LED8:	P1 |= 0X80;	break;
		// 1 3 5 7 亮 ；
		// 0101 0101 
		case NLEDFOUR: P1 |= 0X55;break;
		// 2 4 6 8 
		// 0101 0101 
		case NLEDFOUR1: P1 = 0X55;break;
	
		default:break;
	}


}

//3.闪烁灯函数


void LED_Shine()
{

	 LED_TurnOn(LEDFOUR);
	 delay_ms(100);
	 LED_TurnOff(NLEDFOUR);
	 delay_ms(100);
}




//4.流水灯函数  



