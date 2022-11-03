
    //FILE *filep = fopen("Mahmut","txt");
    //---> "w" varsa silip yeniden oluşturuyor, yoksa oluşturuyor
    //---> "r" olan dosyayı okuyor
    //---> "a" var olan dosyanın içindeki verileri değiştirmeye yarıyor

#include <stdio.h>

int main()
{
    FILE *filep = fopen("yazilimbilimi.txt","r");
    
    /*
    //"w" için
    if (filep==NULL){
        printf("Dosya Bulunamadi");
        
    }
    else{
        printf("Dosya olusturuldu");
        
    }
    */
    
    /*
    if(filep==NULL){
        printf("Boyle bir dosya yok");
        
    }
    else{
        printf("Dosya var");
    }
    */
    

    return 0;
}
***********************************************************************************


#include <stdio.h>
#include <string.h>
int main()
{
    /*fopen("dosya_adi","Mod");
    fclose(filep); //dosyayi bulup kapatıyor
    fputc(character,filep); //dosyayi bulup icine karakteri yazıyor
    */
    char veri[25]="Yazilim Bilimi";
    int uzunluk = strlen(veri);
    int i;
    
    
    FILE *filep=fopen("yazilimbilimi","w");
    if(filep==NULL){
        printf("Dosya olusturulmadi");
    }
    else{
        for(i=0;i<uzunluk;i++){
            fputc(veri[i],filep);
            printf("Yazilan Karakter  %c\n",veri[i]);
        }
    
    printf("Dosya basariyla yazdirildi");
    fclose(filep);
    }

    return 0;
}
********************************************************************************************************************

#include <stdio.h>
#include <string.h>


int main()
{
    FILE *filep;
    char text[256];
    
    
    /*fputc karakteri yazar fputs bir stringi yazar*/
    
    
    filep = fopen("yaz.txt","a");//a == append (sonuna ekle)
    
    if(filep==NULL){
        
        printf("Dosya olusturulamadi");
    }
    else{
    
    printf("Herhangi bir şey yaziniz\n");
    fgets(/*içine yazilacak*/text,/*max alabilecegi karakter*/256,stdin);
    fputs(text,filep);
    
    fclose(filep);
    
        
    }
    
    
    
    
    return 0;
}

*****************************************************************************************************************


