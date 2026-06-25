// OoT3D decomp @ 0034708c  name=FUN_0034708c  size=40

void FUN_0034708c(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = DAT_003470b4;
  sVar1 = *(short *)(DAT_003470b4 + 0x80);
  if (sVar1 != 8 && sVar1 != 9) {
    if (sVar1 == 10) {
      *(undefined2 *)(DAT_003470b4 + 0x82) = 10;
    }
    *(undefined2 *)(iVar2 + 0x80) = 5;
  }
  return;
}

