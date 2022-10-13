/****************************************************************
* Dateiname: QuelleUebung2.c
* Beschreibung: IT1 Übungsblatt 2 Aufgabe 1
* Autor: Igor Jovicic
* Datum: 06.10.2022
* Version: 1.0
*****************************************************************/


#include <stdio.h>	// Standard Eingabe/Ausgabe Funktionen

int zeichen;
int einruecken;

int main(void)
{
	

	for (zeichen = 0; zeichen <= 8; zeichen++)
	{
		

		printf(" *  \n");

		if (zeichen > 2)
		{
			printf(" ");
		}

		
		for (einruecken = 0; einruecken < zeichen; einruecken++)
		{
			printf("  ");
		}
		
	}

	return 0;
}
