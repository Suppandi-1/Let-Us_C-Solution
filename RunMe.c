#include<stdio.h>

int main(){

    char ar[8][56] = { 
    ' ',' ','_','_','_',' ',' ',     ' ',' ' ,' ',' ',' ',' ',' ',  '_','_'  ,'_','_' ,' ',' ',' ',    '_','_'  ,'_','_' ,' ',' ',' ',    ' ','_','_','_',' ',' ',  ' ',     '_',' ',' ',' ',' ','_',  ' ',    '_','_','_',' ',' ',' ',' ',    '_','_','_','_','_','_',' ',
    ' ','/','_','_','_','|',' ',     '_','_' ,' ',' ','_','_',' ',  '|',' '  ,'_',' ','\\',' ',' ',    '|',' '  ,'_',' ','\\',' ',' ',    '/',' ','_','_','\\',' ', ' ',     '|','\\',' ',' ','|','|', ' ',    '|','_','_','\\',' ',' ',' ',   '|','_',' ',' ','_','|',' ',
    '/','/',' ',' ',' ',' ',' ',     '|','|' ,' ',' ','|','|',' ',  '|','|'  ,' ','\\',' ','|',' ',    '|','|'  ,' ','\\',' ','|',' ',    '|','/',' ',' ','\\','|', ' ',     '|','\\','\\',' ','|','|',' ',    '|','|',' ','\\','\\',' ',' ',  ' ',' ','|','|',' ',' ',' ',
    '\\','\\','_','_',' ',' ',' ',   '|','|' ,' ',' ','|','|',' ',  '|','|'  ,'_' ,'/',' ','|',' ',    '|','|'  ,'_' ,'/',' ','|',' ',    '|','|','_','_','|','|',  ' ',     '|','|','\\','\\','|','|',' ',    '|','|',' ',' ','|','|',' ',    ' ',' ','|','|',' ',' ',' ',
    ' ','\\','_','_','\\',' ',' ',   '|','|' ,' ',' ','|','|',' ',  '|',' '  ,'_','_' ,'/',' ',' ',    '|',' '  ,'_','_' ,'/',' ',' ',    '|',' ','_','_',' ','|',  ' ',     '|','|',' ','\\',' ','|', ' ',    '|','|',' ',' ','|','|',' ',    ' ',' ','|','|',' ',' ',' ',
    ' ',' ',' ',' ','\\','\\',' ',   '|','|' ,' ',' ','|','|',' ',  '|','|'  ,' ',' ' ,' ',' ',' ',    '|','|'  ,' ',' ' ,' ',' ',' ',    '|','|',' ',' ','|','|',  ' ',     '|','|',' ',' ','|','|',  ' ',    '|','|',' ',' ','|','|',' ',    ' ',' ','|','|',' ',' ',' ',
    ' ','_','_','_','/','/',' ',     '\\','\\','_','_','/','/',' ',  '|','|'  ,' ',' ' ,' ',' ',' ',    '|','|'  ,' ',' ' ,' ',' ',' ',    '|','|',' ',' ','|','|',  ' ',     '|','|',' ',' ','|','|',  ' ',   '|','|','_','/','/',' ',' ',    '_','_','|','|','_','_',' ',
    '|','_','_','_','/',' ',' ',     ' ','\\','_','_','/',' ',' ',    '\\','/',' ',' ' ,' ',' ',' ',     '\\','/',' ',' ' ,' ',' ',' ',    '\\','/',' ',' ','\\','/',' ',     '\\','/',' ',' ','\\','/',' ',   '\\','_','_','/',' ',' ',' ',   '|','_','_','_','_','|',' ',

                        };
        for( register int i=0;i<8;i++){
            for( register int j=0;j<56;j++){
                printf("%c",ar[i][j]);
            } printf("\n");
        }
    return 0;
    }
