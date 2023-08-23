.MODEL SMALL
.STACK 1000
.DATA

    smallest db ?
    middle  db ? 
    largest db ?
    
    tmp db ?  
    
    first DB "Enter first number: $"
    second DB 13,10,"Enter second number: $"
    third DB 13,10,"Enter third number: $"
    
    fi DB 13,10,"First number: $"
    se DB 13,10,"Second number: $"
    th DB 13,10,"Third number: $"
    
    
    middlenum DB 13,10,"Middle number: $"
    small  DB 13,10,"Smallest number: $"
    large DB 13,10,"Largest number: $"
       
    input DB 13,10,"Enter a character: $"
    vowel DB 13,10,"Your entered character is a vowel$"
    consonant DB 13,10,"Your entered character is not a vowel$"
    
    
.CODE

MAIN PROC 
    MOV AX, @DATA
    MOV DS, AX
               
    
    
    ;problem a
    LEA DX,first
    MOV AH,9
    INT 21H
      
    MOV AH,1
    INT 21H
    MOV bl,AL
    
    LEA DX,second
    MOV AH,9
    INT 21H   
    
    mov ah,1
    INT 21H
    MOV cl,AL
    
    LEA DX,third
    MOV AH,9
    INT 21H  
    
    mov ah,1
    INT 21H
    MOV tmp,AL  
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h 
    
    LEA DX,fi
    MOV AH,9
    INT 21H
    mov ah,2
    mov dl,bl
    int 21h
    
    LEA DX,se
    MOV AH,9
    INT 21H
    mov ah,2
    mov dl,cl
    int 21h
    
    LEA DX,th
    MOV AH,9
    INT 21H
    mov ah,2
    mov dl,tmp
    int 21h 
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h 
    
    mov dl,tmp
    

    ;problm b
    cmp cl,bl    
    jl  l1       
    jmp l2       
    
    l1:
    xchg bl,cl    
    
  

    l2:    
    cmp cl,dl    
    jl print     
    
    xchg dl,cl   

    


    cmp bl,cl   
    jl print     
    
    
    xchg bl,cl  

        
    
    print:
    mov smallest,bl
    mov middle,cl
    mov largest,dl  
    
    LEA DX,large
    MOV AH,9
    INT 21H
    mov ah,2
    mov dl,largest
    int 21h
                      
    
    LEA DX,middlenum
    MOV AH,9
    INT 21H
    mov ah,2
    mov dl,middle
    int 21h
    
    
    LEA DX,small
    MOV AH,9
    INT 21H
    mov ah,2
    mov dl,smallest
    int 21h  
    
        
    
    
    ;problem c 
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h 
     
    LEA DX,input
    MOV AH,9
    INT 21H
    
    MOV AH,1
    INT 21H
    MOV bl,AL 
    
    cmp bl,65
    je vl      
    
    cmp bl,69
    je vl
    
    cmp bl,73
    je vl
    
    cmp bl,79
    je vl
    
    cmp bl,85
    je vl
    
    cmp bl,97
    je vl
    
    cmp bl,101
    je vl
    
    cmp bl,105
    je vl
    
    cmp bl,111
    je vl
    
    cmp bl,117
    je vl 
    
    LEA DX,consonant
    MOV AH,9
    INT 21H 
    jmp exit
    
    vl: 
    LEA DX,vowel
    MOV AH,9
    INT 21H


    exit:
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN
    
