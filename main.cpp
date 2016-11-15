#include <iostream>

using namespace std;

int main()
{
    string a;
    int cont=0,aux1,aux2;
    cin >> a;
    for(int iA=0; iA<a.length();iA++){
        if(iA==0){
            if(((a[iA]-'a'+1)-1+26)%26<(1-(a[iA]-'a'+1)+26)%26){
                cont += ((a[iA]-'a'+1)-1+26)%26;
            }else{
                cont += (1-(a[iA]-'a'+1)+26)%26;
            }
        }else{
            if(((a[iA]-'a'+1)-(a[iA-1]-'a'+1)+26)%26<((a[iA-1]-'a'+1)-(a[iA]-'a'+1)+26)%26){
                cont += ((a[iA]-'a'+1)-(a[iA-1]-'a'+1)+26)%26;
            }else{
                cont += ((a[iA-1]-'a'+1)-(a[iA]-'a'+1)+26)%26;
            }
        }
    }
    cout << cont << endl;
    return 0;
}
