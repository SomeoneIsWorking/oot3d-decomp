// OoT3D decomp @ 00181c88  name=FUN_00181c88  size=396

void FUN_00181c88(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  float local_30;
  int local_2c;
  int local_28;

  iVar6 = *(int *)(DAT_00181e14 + param_2);
  uVar5 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x2c5));
  uVar4 = DAT_00181e1c;
  uVar3 = DAT_00181e18;
  bVar7 = uVar5 == 0;
  if (bVar7) {
    uVar5 = (uint)*(byte *)(param_1 + 0x1fd);
  }
  if (bVar7 && (uVar5 & 2) == 0) {
    if ((*(char *)(iVar6 + 0x1a9) != '\x06') || (*(short *)(DAT_00181e28 + iVar6) == 0))
    goto LAB_00181df8;
    FUN_0036c5d8(param_1,&local_30);
    local_30 = ABS(local_30);
    bVar7 = SBORROW4((int)local_30,DAT_00181e2c);
    iVar1 = (int)local_30 - DAT_00181e2c;
    if ((int)local_30 < DAT_00181e2c) {
      bVar7 = SBORROW4(local_28,0x3f800000);
      iVar1 = local_28 + -0x3f800000;
    }
    if ((iVar1 < 0 == bVar7) || (DAT_00181e30 <= local_2c)) goto LAB_00181df8;
    FUN_00371808(param_2,DAT_00181e34,0x28,param_1,0);
    FUN_0036df4c(param_1 + 8,iVar6 + 0x22a8);
    *(undefined1 *)(param_1 + 0x2c6) = 0x2d;
    if (*(char *)(param_1 + 0x2c7) != '\0') {
      FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_00181e24);
    }
    FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x2c4));
    sVar2 = *(short *)(param_1 + 0x1c);
  }
  else {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x2c) + DAT_00181e20;
    *(undefined1 *)(param_1 + 0x2c6) = 0x2d;
    if (*(char *)(param_1 + 0x2c7) != '\0') {
      FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_00181e24);
    }
    FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x2c4));
    sVar2 = *(short *)(param_1 + 0x1c);
  }
  if (sVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  }
LAB_00181df8:
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1ec);
  return;
}
