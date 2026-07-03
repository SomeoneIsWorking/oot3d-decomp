// OoT3D decomp @ 0046ac10  name=FUN_0046ac10  size=72

void FUN_0046ac10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00480e98();
  FUN_00480bb8();
  iVar1 = FUN_00313ce0(DAT_0046ac58);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_002f8ee4(iVar1,1,8,0);
  }
  iVar1 = DAT_0046ac5c;
  *(undefined4 *)(DAT_0046ac5c + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  FUN_002f0618();
  return;
}

