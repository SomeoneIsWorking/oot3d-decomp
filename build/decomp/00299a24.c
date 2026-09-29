// OoT3D decomp @ 00299a24  name=FUN_00299a24  size=400

undefined4 FUN_00299a24(short *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [20];

  *param_1 = **(short **)(*(int *)(DAT_00299bb4 + param_1[0xc5] * 8 + 4) + param_1[0xc6] * 8 + 4);
  if (*(char *)(*(int *)(param_1 + 0x6a) + 0x361) == '\0') {
    *(byte *)(*(int *)(param_1 + 0x6a) + 0x361) = (byte)param_1[0xd6] | 0x50;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x90);
    return 1;
  }
  FUN_00331764(auStack_48,*(undefined4 *)(param_1 + 0x6c));
  FUN_00371738(auStack_2c,auStack_48,0x12);
  FUN_00372474(auStack_34,param_1 + 0x40,param_1 + 0x46);
  *(int *)(DAT_00299bb8 + 0x14) = (int)*param_1;
  iVar3 = (int)param_1[0xd3];
  uVar4 = DAT_00299bc0;
  if (*(int *)(DAT_00299bbc + 4) != 0) {
    uVar4 = DAT_00299bc4;
  }
  if (iVar3 == -1) {
    return 1;
  }
  if (iVar3 == 0) {
    FUN_0037547c(DAT_00299bd0,0,4,DAT_00299bcc,DAT_00299bcc,DAT_00299bc8);
    FUN_00324190((int)param_1[0xd3],param_1,DAT_00299bd4,uVar4);
    iVar3 = (ushort)param_1[0xd3] + 1;
  }
  else {
    iVar3 = FUN_003b83d4(iVar3 + -1,param_1,DAT_00299bd4,uVar4);
    uVar2 = DAT_00299bd4;
    if (iVar3 == 0) goto LAB_00299b8c;
    if (iVar3 != -1) {
      sVar1 = param_1[0xd3];
      param_1[0xd3] = sVar1 + 1;
      FUN_00324190((short)(sVar1 + 1) + -1,param_1,uVar2,uVar4);
      goto LAB_00299b8c;
    }
  }
  param_1[0xd3] = (short)iVar3;
LAB_00299b8c:
  if (0x3effffff < *(int *)(param_1 + 0x14)) {
    return 1;
  }
  return 0;
}
