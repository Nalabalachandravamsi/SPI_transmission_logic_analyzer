volatile char *SPCR_1 = 0X4C;
volatile char *SPSR_1 = 0x4d;
volatile char *SPDR_1 = 0x4e;


void SPI_init(void);


void SPI_init(void){
  *SPCR_1 =((volatile char *)0xf0);
  *SPDR_1 = ((volatile char *)0x6a);
  
}
