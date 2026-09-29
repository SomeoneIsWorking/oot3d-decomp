// OoT3D decomp @ 002f8af4  name=FUN_002f8af4  size=116

void FUN_002f8af4(void)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;

  iVar1 = DAT_002f8b68;
  *(undefined4 *)(DAT_002f8b68 + 0x18) = 0;
  FUN_002f74a4(6);
  uVar2 = extraout_r1;
  if (((*DAT_002f8b6c & 1) == 0) &&
     (uVar3 = FUN_003679b4(DAT_002f8b6c), uVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0))
  {
    FUN_0036788c(DAT_002f8b70);
    uVar2 = DAT_002f8b78;
  }
  FUN_002e9a1c(DAT_002f8b7c,uVar2);
  FUN_002d2b84();
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  return;
}
