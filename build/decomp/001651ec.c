// OoT3D decomp @ 001651ec  name=FUN_001651ec  size=684

void FUN_001651ec(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;

  uVar7 = 0;
  FUN_003510b0(param_1,DAT_00165498);
  FUN_00372d4c(DAT_0016549c,DAT_0016549c,param_1 + 0xbc,0);
  uVar2 = DAT_001654a8;
  uVar5 = DAT_001654a4;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001654a0 + iVar4) != 0)
     ) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  iVar4 = iVar4 + 0x10;
  sVar1 = *(short *)(param_1 + 0x1c);
  iVar6 = param_2 + 0xae8;
  if (sVar1 != -1) {
    if (sVar1 == 0) {
      FUN_003532e8(param_1,0);
      uVar7 = FUN_003532c0(iVar4,1);
      uVar7 = FUN_00353ec8(param_2,iVar6,param_1,uVar7);
      *(undefined4 *)(param_1 + 0x1a4) = uVar7;
      FUN_0034f6bc(param_2,iVar6,uVar7);
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = uVar5;
      FUN_0037572c(uVar2,param_1);
      return;
    }
    if (sVar1 == 1) {
      FUN_003532e8(param_1,0);
      uVar7 = FUN_003532c0(iVar4,2);
      uVar7 = FUN_00353ec8(param_2,iVar6,param_1,uVar7);
      *(undefined4 *)(param_1 + 0x1a4) = uVar7;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = uVar5;
      FUN_0037572c(uVar2,param_1);
    }
    return;
  }
  FUN_0034fe20(param_1,param_2,param_1 + 0x1bc,0,0,param_1 + 0x40c,param_1 + 0x67c,0xc,uVar7);
  FUN_0036e734(param_1 + 0x1bc,0);
  FUN_0035c358(param_1 + 0x240,param_1 + 0x1bc,0,0xffffffff,0xffffffff);
  *(undefined2 *)(DAT_001654ac + param_1) = 0;
  iVar3 = DAT_001654b0;
  *(undefined1 *)(param_1 + 0x956) = 0;
  *(undefined1 *)(param_1 + 0x957) = 0;
  *(undefined1 *)(param_1 + 0x958) = 0;
  *(undefined1 *)(param_1 + 0x959) = 0;
  if ((*(ushort *)(iVar3 + 0xf2) & 0x400) == 0) {
    *(undefined4 *)(param_1 + 0x944) = DAT_001654b8;
  }
  else {
    *(undefined4 *)(param_1 + 0x944) = DAT_001654b4;
  }
  uVar5 = FUN_0036aa20(*(float *)(param_1 + 0x28) - DAT_001654bc,*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x5a,0,
                       (int)*(short *)(param_1 + 0x36),0,0);
  *(undefined4 *)(param_1 + 0x948) = uVar5;
  FUN_003532e8(param_1,0);
  uVar5 = FUN_003532c0(iVar4,0);
  uVar5 = FUN_00353ec8(param_2,iVar6,param_1,uVar5);
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x8ec,param_1,DAT_001654c0);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  return;
}
