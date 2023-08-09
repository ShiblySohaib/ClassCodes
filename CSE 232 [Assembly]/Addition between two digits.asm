.MODEL SMALL
.STACK 100
.DATA

    MSGA DB "Input first number: ","$"
    MSGB DB 13,10,"Input second number: ","$"
    MSGC DB 13,10,"The sum is: ","$"
    
    NUM1 db ?
    NUM2 db ?
    NUM3 db ?

.CODE

MAIN PROC

    MOV AX, @DATA
    MOV DS, AX 
    
    
    lea dx,MSGA
    mov ah,9
    int 21h    
    
    mov ah,1
    int 21h
    mov bl,al 
    sub bl,48   
    
    lea dx,MSGB
    mov ah,9
    int 21h    
    
    
    mov ah,1
    int 21h
    mov cl,al 
    sub cl,48                      
    
    add bl,cl

     
    lea dx,MSGC
    Mov ah,9
    int 21h
    
    MOV AH,2 
    
    MOV DL,bl  
    add dl,48
    INT 21H
                  
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN
    
