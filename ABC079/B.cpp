#include <stdio.h>
#include <string.h>

char str[19];

int lucas(int l)
{
	switch (l)
	{
	case 0:
		strcpy(str, "2");
		break;
	case 1:
		strcpy(str, "1");
		break;
	case 2:
		strcpy(str, "3");
		break;
	case 3:
		strcpy(str, "4");
		break;
	case 4:
		strcpy(str, "7");
		break;
	case 5:
		strcpy(str, "11");
		break;
	case 6:
		strcpy(str, "18");
		break;
	case 7:
		strcpy(str, "29");
		break;
	case 8:
		strcpy(str, "47");
		break;
	case 9:
		strcpy(str, "76");
		break;
	case 10:
		strcpy(str, "123");
		break;
	case 11:
		strcpy(str, "199");
		break;
	case 12:
		strcpy(str, "322");
		break;
	case 13:
		strcpy(str, "521");
		break;
	case 14:
		strcpy(str, "843");
		break;
	case 15:
		strcpy(str, "1364");
		break;
	case 16:
		strcpy(str, "2207");
		break;
	case 17:
		strcpy(str, "3571");
		break;
	case 18:
		strcpy(str, "5778");
		break;
	case 19:
		strcpy(str, "9349");
		break;
	case 20:
		strcpy(str, "15127");
		break;
	case 21:
		strcpy(str, "24476");
		break;
	case 22:
		strcpy(str, "39603");
		break;
	case 23:
		strcpy(str, "64079");
		break;
	case 24:
		strcpy(str, "103682");
		break;
	case 25:
		strcpy(str, "167761");
		break;
	case 26:
		strcpy(str, "271443");
		break;
	case 27:
		strcpy(str, "439204");
		break;
	case 28:
		strcpy(str, "710647");
		break;
	case 29:
		strcpy(str, "1149851");
		break;
	case 30:
		strcpy(str, "1860498");
		break;
	case 31:
		strcpy(str, "3010349");
		break;
	case 32:
		strcpy(str, "4870847");
		break;
	case 33:
		strcpy(str, "7881196");
		break;
	case 34:
		strcpy(str, "12752043");
		break;
	case 35:
		strcpy(str, "20633239");
		break;
	case 36:
		strcpy(str, "33385282");
		break;
	case 37:
		strcpy(str, "54018521");
		break;
	case 38:
		strcpy(str, "87403803");
		break;
	case 39:
		strcpy(str, "141422324");
		break;
	case 40:
		strcpy(str, "228826127");
		break;
	case 41:
		strcpy(str, "370248451");
		break;
	case 42:
		strcpy(str, "599074578");
		break;
	case 43:
		strcpy(str, "969323029");
		break;
	case 44:
		strcpy(str, "1568397607");
		break;
	case 45:
		strcpy(str, "2537720636");
		break;
	case 46:
		strcpy(str, "4106118243");
		break;
	case 47:
		strcpy(str, "6643838879");
		break;
	case 48:
		strcpy(str, "10749957122");
		break;
	case 49:
		strcpy(str, "17393796001");
		break;
	case 50:
		strcpy(str, "28143753123");
		break;
	case 51:
		strcpy(str, "45537549124");
		break;
	case 52:
		strcpy(str, "73681302247");
		break;
	case 53:
		strcpy(str, "119218851371");
		break;
	case 54:
		strcpy(str, "192900153618");
		break;
	case 55:
		strcpy(str, "312119004989");
		break;
	case 56:
		strcpy(str, "505019158607");
		break;
	case 57:
		strcpy(str, "817138163596");
		break;
	case 58:
		strcpy(str, "1322157322203");
		break;
	case 59:
		strcpy(str, "2139295485799");
		break;
	case 60:
		strcpy(str, "3461452808002");
		break;
	case 61:
		strcpy(str, "5600748293801");
		break;
	case 62:
		strcpy(str, "9062201101803");
		break;
	case 63:
		strcpy(str, "14662949395604");
		break;
	case 64:
		strcpy(str, "23725150497407");
		break;
	case 65:
		strcpy(str, "38388099893011");
		break;
	case 66:
		strcpy(str, "62113250390418");
		break;
	case 67:
		strcpy(str, "100501350283429");
		break;
	case 68:
		strcpy(str, "162614600673847");
		break;
	case 69:
		strcpy(str, "263115950957276");
		break;
	case 70:
		strcpy(str, "425730551631123");
		break;
	case 71:
		strcpy(str, "688846502588399");
		break;
	case 72:
		strcpy(str, "1114577054219522");
		break;
	case 73:
		strcpy(str, "1803423556807921");
		break;
	case 74:
		strcpy(str, "2918000611027443");
		break;
	case 75:
		strcpy(str, "4721424167835364");
		break;
	case 76:
		strcpy(str, "7639424778862807");
		break;
	case 77:
		strcpy(str, "12360848946698171");
		break;
	case 78:
		strcpy(str, "20000273725560978");
		break;
	case 79:
		strcpy(str, "32361122672259149");
		break;
	case 80:
		strcpy(str, "52361396397820127");
		break;
	case 81:
		strcpy(str, "84722519070079276");
		break;
	case 82:
		strcpy(str, "137083915467899403");
		break;
	case 83:
		strcpy(str, "221806434537978679");
		break;
	case 84:
		strcpy(str, "358890350005878082");
		break;
	case 85:
		strcpy(str, "580696784543856761");
		break;
	case 86:
		strcpy(str, "939587134549734843");
		break;
	}
	return 0;
}

int main()
{
	int l;
	scanf("%d", &l);
	lucas(l);
	printf("%s\n", str);
	return 0;
}
