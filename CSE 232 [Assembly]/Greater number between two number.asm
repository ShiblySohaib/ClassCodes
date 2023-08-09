.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    MOV AH,1
    INT 21H
    MOV BL,AL
    INT 21H
    MOV CL,AL
    
    
    SUB BL,48
    SUB CL,48
    
    
    CMP BL,CL
    JG NEXT
    
    MOV AH,2
    ADD CL,48
    MOV DL,CL
    INT 21H 
    JMP EXIT
    
    NEXT:
    MOV AH,2
    ADD BL,48
    MOV DL,BL
    INT 21H
    
    
    
   
    
    EXIT:
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN
    
    