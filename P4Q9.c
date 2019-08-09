#include <stdio.h>
#include <stdlib.h>
#include "P4Q9.h"
#pragma warning (disable: 4996)
#define TAX 0.0825
#define KEYBOARD 35.50
#define MOUSE	12.90
#define MONITOR	600.00
#define PRINTER	168.00
#define SPEAKER	120.00


void main()
{
	int		keybQTY, mouQTY, monQTY, priQTY, speQTY ;
	float	totalprice,subtotal, keybTTLPrice, mouTTLPrice, monTTLPrice, priTTLPrice, speTTLPrice,taxTotal,finalTotal;
	char	QTY[] = "QTY", Desc[] = "DESCRIPTION", unitPrice[] = "UNIT PRICE",ttlPrice[]="TOTAL PRICE",filler1[]="---",filler2[]="----------",
		filler3[] = "----------", filler4[] = "-----------", keyboard[] = "KEYBOARD", SUBTOTAL[] = "SUBTOTAL", tax[]="TAX", TOTAL[] = "TOTAL", mouse[]="Mouse",
				monitor[]="MONITOR",printer[]="PRINTER",speaker[]="SPEAKER",finntotal[]="TOTAL";

	printf("Enter number of item sold \n");
	printf("keyboard ->");
	scanf("%d", &keybQTY);
	printf("Mouse ->");
	scanf("%d", &mouQTY);
	printf("Monitor ->");
	scanf("%d", &monQTY);
	printf("Printer ->");
	scanf("%d", &priQTY);
	printf("speaker ->");
	scanf("%d", &speQTY);

	keybTTLPrice = keybQTY * KEYBOARD;
	mouTTLPrice = mouQTY * MOUSE;
	monTTLPrice = monQTY * MONITOR;
	priTTLPrice = priQTY * PRINTER;
	speTTLPrice = speQTY * SPEAKER;
	subtotal = keybTTLPrice + mouTTLPrice + monTTLPrice + priTTLPrice + speTTLPrice;
	taxTotal = TAX * subtotal;
	finalTotal = subtotal + taxTotal;

	







	printf("%-6s%-21s%22s%33s \n",QTY,Desc,unitPrice,ttlPrice);
	printf("%-6s%-21s%22s%33s \n",filler1,filler2,filler3,filler4);
	printf("%-6d%-21s%22f%33f \n",keybQTY,keyboard,35.50,keybTTLPrice); //prob starts here ,solve it ,ltr jut CNP //solved allightment problem
	printf("%-6d%-21s%22f%33f \n", mouQTY, mouse, 12.90, mouTTLPrice);
	printf("%-6d%-21s%22f%33f \n", monQTY, monitor, 600.00, monTTLPrice);
	printf("%-6d%-21s%22f%33f \n", priQTY, printer, 128.00, priTTLPrice);
	printf("%-6d%-21s%22f%33f \n", speQTY, speaker, 120.00, speTTLPrice);



	printf("%22s%33f \n",SUBTOTAL,subtotal);
	printf("%22s%33f \n",tax, taxTotal);
	printf("%22s%33f \n",finntotal ,finalTotal);


	
	
	



	system("pause");



}
