// OoT3D decomp @ 0011ff28  name=FUN_0011ff28  size=296

void FUN_0011ff28(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  FUN_00370734(param_1 + 0x1a4);
  uVar2 = DAT_00120060;
  uVar4 = DAT_0012005c;
  uVar1 = DAT_00120058;
  if (*(float *)(param_1 + 0x6c) < DAT_00120050) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_00120054;
  }
  uVar3 = DAT_00120064;
  if (*(char *)(param_1 + 0x498) == '\0') {
    if (*(char *)(param_1 + 0x499) != '\0') {
      FUN_0036fc20(uVar1,DAT_00120064,param_1 + 0xcc);
      FUN_0036fc20(DAT_00120068,uVar3,param_1 + 0x6c);
      FUN_00373500(*(undefined4 *)(param_1 + 0x4b8),uVar1,*(undefined4 *)(param_1 + 0x4bc),
                   param_1 + 0xc4);
      FUN_00373500(uVar2,uVar1,uVar4,param_1 + 0x4bc);
    }
  }
  else {
    FUN_0036fc20(uVar1,*(undefined4 *)(param_1 + 0x4bc),param_1 + 0xc4);
    FUN_00373500(uVar2,uVar1,uVar4,param_1 + 0x4bc);
  }
  uVar1 = DAT_0012006c;
  if (*(short *)(param_1 + 0x4aa) == 0) {
    uVar4 = uVar1;
    if (((*(short *)(param_1 + 0x4ae) != 0) &&
        (*(undefined2 *)(param_1 + 0x4a4) = 0x2d, uVar4 = DAT_00120070,
        *(char *)(param_1 + 0x498) == '\0')) && (uVar4 = uVar1, *(char *)(param_1 + 0x499) == '\0'))
    {
      uVar4 = DAT_00120074;
    }
    *(undefined4 *)(param_1 + 0x4a0) = uVar4;
  }
  return;
}
