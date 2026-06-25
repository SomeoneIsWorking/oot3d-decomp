// OoT3D decomp @ 004c0878  name=FUN_004c0878  size=60

void FUN_004c0878(void)

{
  int iVar1;
  
  iVar1 = DAT_004c08b4;
  if (*(int *)(DAT_004c08b4 + 0x10) != 0) {
    FUN_002f6944();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  FUN_002f7af4(DAT_004c08bc,DAT_004c08b8,*(undefined4 *)(iVar1 + 0xc));
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}

