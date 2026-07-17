// OoT3D decomp @ 00367c7c  name=FUN_00367c7c  size=220

void FUN_00367c7c(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  func_0x00343f0c(param_1,param_1 + 0x224c);
  puVar1 = puRam00367d60;
  if ((*(char *)(iRam00367d58 + 0xe) != '\0') && (param_2 == 0x102a)) {
    param_2 = iRam00367d5c;
  }
  if (((*puRam00367d60 & 1) == 0) && (iVar2 = func_0x003679b4(puRam00367d60), iVar2 != 0)) {
    func_0x0036788c(uRam00367d64);
  }
  iVar2 = iRam00367d70;
  func_0x004c0bc8(iRam00367d70,param_2,param_3,1);
  if (((*puVar1 & 1) == 0) && (iVar3 = func_0x003679b4(puRam00367d60), iVar3 != 0)) {
    func_0x0036788c(iVar2 + -0x32c0);
  }
  *(undefined1 *)(iVar2 + 0xd) = 1;
  return;
}

