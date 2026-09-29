// OoT3D decomp @ 0044a7cc  name=FUN_0044a7cc  size=280

void FUN_0044a7cc(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar2 = DAT_0044a8e8;
  uVar1 = DAT_0044a8e4;
  if (*param_1 != '\0') {
    *(undefined4 *)(param_1 + 4) = DAT_0044a8e4;
    FUN_002e219c(uVar2);
  }
  uVar2 = DAT_0044a8e8;
  if (*param_1 != '\0') {
    *(undefined4 *)(param_1 + 8) = uVar1;
    FUN_002e2134(uVar2,0);
  }
  uVar2 = DAT_0044a8e8;
  if (*param_1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    FUN_002e2134(uVar2,1);
  }
  FUN_002e2010(param_1,0,0);
  FUN_002e2010(param_1,1,0);
  uVar1 = DAT_0044a8e8;
  param_1[0x20] = '\0';
  FUN_002e1fa4(uVar1,0);
  uVar1 = DAT_0044a8e8;
  param_1[0x21] = '\0';
  FUN_002e1fa4(uVar1,1,0);
  uVar1 = DAT_0044a8e8;
  param_1[0x26] = '\0';
  param_1[0x27] = -0x80;
  FUN_002e1f54(uVar1);
  uVar1 = DAT_0044a8e8;
  *(short *)(param_1 + 0x24) = (short)DAT_0044a8ec;
  FUN_002e1f00(uVar1);
  iVar3 = FUN_002e1ef0();
  uVar1 = DAT_0044a8e8;
  if (iVar3 != 0) {
    param_1[1] = '\x01';
    FUN_002e1ea8(uVar1,1);
  }
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  return;
}
