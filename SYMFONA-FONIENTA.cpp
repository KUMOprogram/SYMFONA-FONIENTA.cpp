#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    system("color f1");
           string w,w1,w2,wx;
           int i,sym=0,fon=0;
           
           cout<<" Dwse le3h : ";
           getline(cin,wx);
			
		   for (i=0; i<wx.size(); ++i)
		   {
		   		if ((wx[i]>='a' && wx[i]<='z') || (wx[i]>='A' && wx[i]<='Z'))
		   		{
		   			w+=wx[i];
		   		}
		   }	

		   for (i=0; i<w.size(); ++i)
		   {
				if (w[i]=='a' || w[i]=='e' || w[i]=='i'  || w[i]=='o'  || w[i]=='u'  || w[i]=='w'  || w[i]=='y'  || w[i]=='A'  || w[i]=='E'  || w[i]=='I'  || w[i]=='O' || w[i]=='U' || w[i]=='W' || w[i]=='Y')
				{
					++fon;
				}else{
					++sym;
				}
		   }
		   
		   for (i=0; i<w.size(); ++i)
		   {
		   		if (w[i]=='a' || w[i]=='e' || w[i]=='i'  || w[i]=='o'  || w[i]=='u'  || w[i]=='w'  || w[i]=='y'  || w[i]=='A'  || w[i]=='E'  || w[i]=='I'  || w[i]=='O' || w[i]=='U' || w[i]=='W' || w[i]=='Y')
		   		{
						w1+=w[i];
		   		}else{
                		w2+=w[i];
		   		}
			}
		   
           cout<<endl<<" SYMFWNA: "<<sym<<" ---> "<<w2<<endl<<" FWNHENTA: "<<fon<<" ---> "<<w1<<endl<<endl;

    system("pause");
}
