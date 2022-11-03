#include <stdio.h>
#include <string.h>


int main()
{
    FILE *filep;
    
    
    char urun_ismi[10][30],uretim_tarihi[10][20],son_kullanma_tarihi[10][20],uretim_yeri[10][20],gonderilecek_yer[10][20],satici[10][20],alici[10][20];
    
    int i=0,ucret[10],omru[10],adeti[10];
    
    
    filep = fopen("basla.txt","r");
    
    if(filep==NULL){
        
        printf("Dosya bulunamadi");
    }
    else{
    while(!feof(filep)){
        fscanf(filep,"%s %d %s %s %d %d %s %s %s %s",urun_ismi[i],&ucret[i],uretim_tarihi[i],son_kullanma_tarihi[i],&omru[i],&adeti[i],uretim_yeri[i],gonderilecek_yer[i],satici[i],alici[i]);
        printf("%s %d %s %s %d %d %s %s %s %s \n",urun_ismi[i],ucret[i],uretim_tarihi[i],son_kullanma_tarihi[i],omru[i],adeti[i],uretim_yeri[i],gonderilecek_yer[i],satici[i],alici[i]);
        i++;
    }
       
    }
    fclose(filep);
    
    int j,temp;
    
    fopen("bitir.txt","w");
    
    
    fprintf(filep,"Urunlerin isimleri bunlardır: ");
    for(i=0;i<10;i++) {
        fprintf(filep,"%s,",urun_ismi[i]);
    }
    
    fprintf(filep,"\n");
    
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(ucret[i]<ucret[j]){
            temp=ucret[i];
            ucret[i]=ucret[j];
            ucret[j]=temp;
            }
        }
    }
    fprintf(filep,"Urunlerin ucretlerinin kiyaslanmasi bu şekildedir: ");
    for(i=0;i<10;i++) {
        fprintf(filep,"%d ",ucret[i]);
    }
    fprintf(filep,"\n");
    
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(omru[i]<omru[j]){
            temp=omru[i];
            omru[i]=omru[j];
            omru[j]=temp;
            }
        }
    }
    fprintf(filep,"Urunlerin omurlerinin kiyaslanmasi bu şekildedir: ");
    for(i=0;i<10;i++) {
        fprintf(filep,"%d ",omru[i]);
    }
    fprintf(filep,"\n");
    
    
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(adeti[i]<adeti[j]){
            temp=adeti[i];
            adeti[i]=adeti[j];
            adeti[j]=temp;
            }
        }
    }
    fprintf(filep,"Urunlerin adetlerinin kiyaslanmasi bu şekildedir: ");
    for(i=0;i<10;i++) {
        fprintf(filep,"%d ",adeti[i]);
    }
    
    fprintf(filep,"\n");
    
    fprintf(filep,"Urunlerin uretildikleri yerler sirayla bu şekildedir: ");
    for(i=0;i<10;i++) {
        fprintf(filep,"%s,",uretim_yeri[i]);
    }
    
    fprintf(filep,"\n");
    
    
    
    
    
    

    
    fclose(filep);
    
    
    
    
    
    
    return 0;
}
