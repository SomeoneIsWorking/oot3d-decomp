// OoT3D decomp @ 002eda00  name=FUN_002eda00  size=248

void FUN_002eda00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_254 [524];
  undefined4 auStack_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30 [6];

  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[0] = *DAT_002edaf8;
  iVar5 = 0;
  *(int *)((int)local_30 + *(int *)(local_30[0] + -0x30)) = DAT_002edaf8[3];
  iVar3 = FUN_002e63c8(DAT_002edafc);
  iVar1 = DAT_002edb08;
  if (iVar3 != 0) {
    iVar5 = 3;
  }
  param_2 = param_2 + iVar5;
  auStack_48[0] = *DAT_002edb00;
  auStack_48[1] = DAT_002edb00[1];
  auStack_48[2] = DAT_002edb00[2];
  auStack_48[3] = DAT_002edb00[3];
  uStack_38 = DAT_002edb00[4];
  uStack_34 = DAT_002edb00[5];
  iVar3 = DAT_002edb08 + (param_1 + iVar5) * DAT_002edb04 * 4;
  FUN_00324f44(auStack_254,auStack_48[param_2],DAT_002edb0c);
  uVar2 = DAT_002edb10;
  uVar4 = FUN_002e613c(auStack_254,iVar3,DAT_002edb10,1);
  *(undefined4 *)(DAT_002edb14 + 4) = uVar4;
  FUN_00371738(iVar1 + param_2 * DAT_002edb04 * 4,iVar3,uVar2);
  *(undefined4 *)(iVar1 + -0x18 + param_2 * 4) = 1;
  if ((local_30[1] & 0xfffffffeU) != 0) {
    FUN_0030d614(local_30[1] & 0xfffffffe);
  }
  return;
}
