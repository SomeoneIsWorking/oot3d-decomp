// OoT3D decomp @ 004180a8  name=FUN_004180a8  size=220

void FUN_004180a8(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;

  pcVar1 = DAT_00418184;
  if (*DAT_00418184 == '\0') {
    FUN_0044a04c();
    iVar3 = FUN_00435f8c(DAT_0041818c,0x20,DAT_00418188);
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,DAT_00418190,0);
      FUN_002fb928(0);
    }
    FUN_0044a114();
    *pcVar1 = '\x01';
  }
  uVar2 = DAT_00418194;
  param_1[0x12] = *(undefined4 *)(DAT_0041818c + 0x10);
  param_1[0x13] = uVar2;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar2;
  *param_1 = uVar2;
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  param_1[5] = uVar2;
  param_1[6] = uVar2;
  param_1[7] = uVar2;
  param_1[8] = uVar2;
  param_1[9] = uVar2;
  param_1[10] = uVar2;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar2;
  return;
}
