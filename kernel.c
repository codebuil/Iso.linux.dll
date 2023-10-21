
typedef int size_t;
int NULL;
// Define a função que retorna uma string da memória baixa
char* getStringFromLowMemory() {
    // Ponteiro para a memória baixa (0x60000)
    unsigned char* memoryPointer = (unsigned char*)0x60000;

    // Retorna o ponteiro para a string na memória baixa
    return memoryPointer;
}
void memcopy(void *dest, const void *src, size_t length) {
    // Cast os ponteiros para unsigned char* para permitir a cópia byte a byte
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    // Copie os bytes de src para dest
    for (size_t i = 0; i < length; i++) {
        d[i] = s[i];
    }
}
void start_dll(){
		unsigned int memo=0x301000;
		unsigned int memos=0x301000;
		unsigned char* memoryStart = (unsigned char*)0x301000;
		unsigned char* datas=(unsigned char*)0x60000;
		unsigned int* datass=(unsigned int*)0x60000;
		memcopy(memoryStart,datas,65032);
		datass[0]=0;
		__asm__ __volatile__("call *%0\n\t"
		: 
		: "r" (memo));
		
		
} 
void prints(char *i){
		
		
		unsigned int memo=0x301000;
		unsigned int memos=0x301000;
		int ii=(int)i;
		unsigned int* datas=(unsigned int*)0x60000;
		
		datas[0]=1;
		datas[1]=ii;
		__asm__ __volatile__("call *%0\n\t"
		: 
		: "r" (memo));
		
		
} 


 int kernel_main()
        {
		unsigned char *datas;
		unsigned char* addr;
		char *c="                  hello world....";
		NULL=0;
		start_dll();
		prints(c);
		
		

		return 0;	  
        }
 

