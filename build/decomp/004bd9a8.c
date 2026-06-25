// OoT3D decomp @ 004bd9a8  name=FUN_004bd9a8  size=52

void FUN_004bd9a8(void)

{
  int iVar1;
  
  iVar1 = DAT_004bd9dc;
  if (*(short *)(DAT_004bd9dc + 100) == 0x57) {
    *(undefined2 *)(DAT_004bd9dc + 0x66) = 0xf7ef;
    *(short *)(iVar1 + 0x68) = (short)DAT_004bd9e0;
    *(short *)(iVar1 + 0x6a) = (short)DAT_004bd9e4;
    *(undefined2 *)(iVar1 + 0x6c) = 0;
  }
  return;
}

