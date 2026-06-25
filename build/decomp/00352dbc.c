// OoT3D decomp @ 00352dbc  name=FUN_00352dbc  size=180

ulonglong FUN_00352dbc(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00352e70;
  if (*(char *)(DAT_00352e70 + 0xe) != '\0' && param_2 < 0) {
    param_2 = (int)(short)(param_2 << 1);
  }
  if (param_2 < 1) {
    if (*(char *)(DAT_00352e70 + 0x51) != '\0' && param_2 < 0) {
      param_2 = param_2 >> 1;
    }
  }
  else {
    FUN_0037547c(DAT_00352e7c,0,4,DAT_00352e78,DAT_00352e78,DAT_00352e74);
  }
  sVar1 = *(short *)(iVar2 + 0x44) + (short)param_2;
  *(short *)(iVar2 + 0x44) = sVar1;
  iVar3 = (int)sVar1;
  if ((int)*(short *)(iVar2 + 0x42) < (int)sVar1) {
    iVar3 = (int)*(short *)(iVar2 + 0x42);
  }
  *(short *)(iVar2 + 0x44) = (short)iVar3;
  if (iVar3 < 1) {
    *(undefined2 *)(iVar2 + 0x44) = 0;
  }
  return CONCAT44(iVar3 % 0x10,(uint)(iVar3 >= 1)) & 0xffffffffffff;
}

