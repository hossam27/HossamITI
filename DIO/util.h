#ifndef _UTIL_H_
#define _UTIL_H_

#define GetBit(Reg,Bit)             (((Reg)>>Bit)&0x01)
#define ClrBit(Reg,Bit)             ((Reg)&=~(1<<Bit))
#define SetBit(Reg,Bit)             ((Reg)|=(1<<Bit))
#define ToggleBit(Reg,Bit)          ((Reg)^=(1<<Bit))
#define AssignBit(Reg,Bit,value)    ((Reg)=(((Reg)&(~(1<<Bit)))|(value<<Bit)))

#define SetReg(Reg) ((Reg)=0xFF)
#define ClrReg(Reg)  ((Reg)=0)
#define ToggleReg(Reg)  ((Reg)^=0xFF)
#define AssignReg(Reg,value) ((Reg)=value)

#define GetlowNib(Reg) ((Reg)&0x0F)
#define SetlowNib(Reg) ((Reg)|=0x0F)
#define ClrlowNib(Reg) ((Reg)&=0xF0)
#define TogglelowNib(Reg) ((Reg)^=0x0F)
#define AssignlowNib(Reg,value) ((Reg)=(((Reg)&0xF0)|value))

#define GethighNib(Reg) ((Reg)>>4)
#define SethighNib(Reg) ((Reg)|=0xF0)
#define ClrhighNib(Reg) ((Reg)&=0x0F)
#define TogglehighNib(Reg) ((Reg)^=0xF0)
#define AssignhighNib(Reg,value) ((Reg)=(((Reg)&0x0F)|(value<<4)))

#endif
