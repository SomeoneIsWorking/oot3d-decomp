// OoT3D decomp @ 0034be04  name=FUN_0034be04  size=40

void FUN_0034be04(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_0034be2c;
  if (*(ushort *)(DAT_0034be2c + 0x7a) != param_1) {
    *(short *)(DAT_0034be2c + 0x78) = (short)param_1;
    *(short *)(iVar1 + 0x7a) = (short)param_1;
    *(undefined2 *)(iVar1 + 0x7c) = 1;
  }
  return;
}

