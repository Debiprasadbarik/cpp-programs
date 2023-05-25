#include <stdio.h>
#include <string.h>
int main()
{
	char para[2000]="SMD stand for surface mount device, SMD can be used to implement digital and analog circuits. Perhaps its only drawback is that the power handling capacity of the devices tends to be low, since the parts are physically small. For digital and many analog circuits, that restriction is not a problem. In fact, traditional capacities such as the classic 1/2 watt resistor are far more than needed for low power circuitry. Surface mount resistors can have a rating of 1/16 watt. Because the traditional wire leads are no longer used, the parts lose their convenient handles. Stripped of wire leads, and reduced in size and power capacity, the physical dimensions of the board can shrink dramatically. All of these trends are good news for considerations such as cost, packaging, portability, high frequency operation, and power supplies.";
	printf("%-15s",para);
	return 0;
}
