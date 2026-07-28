// OoT3D decomp @ 001d0364  name=FUN_001d0364  size=116

void FUN_001d0364(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(iRam001d03d8 + 0x144);
  if (*(int *)(iRam001d03d8 + 0x144) <= iRam001d03dc) {
    iVar2 = iRam001d03e0;
  }
  *(int *)(iRam001d03d8 + 0x144) = iVar2;
  *(int *)(param_2 + 0x221c) = iVar2;
  iVar2 = func_0x0033ea74(uRam001d03e4,param_1,param_2);
  if ((iVar2 != 0) &&
     (sVar1 = (short)(int)(fRam001d03e8 / *(float *)(param_2 + 0x221c)),
     *(short *)(param_2 + 0x2238) = sVar1, sVar1 < -0x14)) {
    *(undefined2 *)(param_2 + 0x2238) = 0xffec;
  }
  return;
}

