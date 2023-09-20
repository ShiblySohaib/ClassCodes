.MODEL SMALL
.STACK 100H
.DATA
STAR DB ?

.CODE 
MAIN PROC
    MOV CX,5
    MOV BX,1
    
  L1:
    PUSH CX
    
    MOV AH,2
  
    
    MOV CX,BX
    MOV DL,'*'
  L3:
    INT 21H
    LOOP L3
    
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    
    
    
    INC BX
    
    POP CX
    
    LOOP L1  
    
    ;;;;;;;;;;;;;;
    MOV CX,4
    MOV BH,4
    MOV BL,2
    
    MOV STAR,BH
    
   L4:


    
   L5:
    MOV AH,2
    MOV DL,'*'
    INT 21H
    DEC STAR
    CMP STAR,0
    JNE L5
  L6:  
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    
    DEC BH
    MOV STAR,BH
    
    
    LOOP L4 
    
    ;;;;;;;;;;;;;;;;;;;;;;;;;
    ;part 2
    mov bh,'1'
    
    mov ah,1
    int 21h
    mov bl,al 
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h 
     
    mov cl,1

        
    rerun:
       
    cmp bh,bl
    jg EXIT
    
    cmp cl,1
    je noskip
    
    cmp cl,0
    je skip
    
    skip:
    mov cl,1
    inc bh
    jmp rerun
    
    noskip:
    mov cl,0
   
            
    run:
    mov ah,2
    mov dl,bh
    int 21h
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    inc bh 
    
       
    
    
    jmp rerun
    
    
    
    
    EXIT:
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN
