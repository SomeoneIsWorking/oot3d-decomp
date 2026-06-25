// OoT3D decomp @ 0016d9d4  name=FUN_0016d9d4  size=92

undefined4 FUN_0016d9d4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = DAT_0016da30 + (*(ushort *)(param_4 + 0x1c) & 0x7f) * 0x18;
  sVar1 = *(short *)(iVar2 + 0x16);
  if (param_2 == *(short *)(iVar2 + 0x14)) {
    FUN_0034e01c(param_3,param_4 + 0xdf8);
  }
  if (param_2 == sVar1) {
    FUN_0034e01c(param_3,param_4 + 0xdfe);
  }
  return 0;
}

