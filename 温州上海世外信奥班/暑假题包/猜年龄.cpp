/*
ÌâÄ¿£º²ÂÄêÁä
ÃÀ¹úÊýÑ§¼ÒÎ¬ÄÉ(N.Wiener)ÖÇÁ¦ÔçÊì£¬11Ëê¾ÍÉÏÁË´óÑ§¡£ËûÔøÔÚ1935~1936ÄêÓ¦ÑûÀ´ÖÐ¹úÇå»ª´óÑ§½²Ñ§¡£
Ò»´Î£¬Ëû²Î¼ÓÄ³¸öÖØÒª»áÒé£¬ÄêÇáµÄÁ³¿×ÒýÈË×¢Ä¿¡£ÓÚÊÇÓÐÈËÑ¯ÎÊËûµÄÄêÁä£¬Ëû»Ø´ðËµ£º
¡°ÎÒÄêÁäµÄÁ¢·½ÊÇ¸ö4Î»Êý¡£ÎÒÄêÁäµÄ4´Î·½ÊÇ¸ö6Î»Êý¡£Õâ10¸öÊý×ÖÕýºÃ°üº¬ÁË´Ó0µ½9Õâ10¸öÊý×Ö£¬Ã¿¸ö¶¼Ç¡ºÃ³öÏÖ1´Î¡£¡±
ÇëÄãÍÆËãÒ»ÏÂ£¬Ëûµ±Ê±µ½µ×ÓÐ¶àÄêÇá¡£
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,scf,cf,sc;//aºÍbÓÃÓÚ¼ÆËã£¬cf±íÊ¾²»Ø¸´µÄÊý×ÖµÄ¸öÊý¡£ 
	int cf3[4],cf4[6],tg[10]; //cf3ÊÇÈý´Î·½µÄÒâË¼£¬cf4ÊÇËÄ´Î·½µÄÒâË¼£¬tg¼ÇÂ¼Í¨¹ýµÄÊý×Ö¡£ 
	cf=0;
//	for(int i1=0;bcf==10;i1++)
	for(int i1=0;i1<65535;i1++)
	{
		cf=0;
		a=i1*i1*i1;
		b=a;
		for(int i2=0;i2<4;i2++)//ÇóaµÄÃ¿Ò»Î»Êý 
		{
			cf3[i2]=a%10;
			a/=10;
		}
		for(int i2=0;i2<4;i2++)
		{
			tg[i2]=cf3[i2]; 
		}
		b*=i1;
		for(int i2=0;i2<6;i2++)//ÇóbµÄÃ¿Ò»Î»Êý 
		{
			cf4[i2]=b%10;
			b/=10;
		}
		for(int i2=0;i2<6;i2++)
		{
			tg[i2+4]=cf4[i2]; 
		}
		for(int i2=0;i2<10;i2++)
		{
			for(int i3=0;i3<10;i3++)
			{
				if(tg[i2]==tg[i3])
				{
					cf++;
				}
			}
		} 
		sc=i1;
		if(cf==10)
		{
			cout<<sc;
			return 0;
		}
	}
}
