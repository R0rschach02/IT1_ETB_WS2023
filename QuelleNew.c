/****************************************************************
* Dateiname: QuelleUebung2.c
* Beschreibung: IT1 Übungsblatt 2 Aufgabe 1
* Autor: Igor Jovicic
* Datum: 06.10.2022
* Version: 1.0
*****************************************************************/


#include <stdio.h>	// Standard Eingabe/Ausgabe Funktionen

int main(void)
{
	int zeichen;
	int einruecken;

	for (zeichen = 0; zeichen <= 2; zeichen++)
	{
		printf(" test \t \n");

		if ( zeichen > 1 )
			{
				printf(" \t");
			}

		for (einruecken = zeichen += einruecken; einruecken < zeichen; einruecken++)
		{
			printf(" \t");
		}
		
	}

	return 0;
}

