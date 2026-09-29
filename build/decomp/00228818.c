// OoT3D decomp @ 00228818  name=FUN_00228818  size=404

void FUN_00228818(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  FUN_003510b0(param_1,DAT_002289ac);
  FUN_00372f38(param_1,param_2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x638,0x13);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0xa54,param_1,DAT_002289b0,param_1 + 0xa74);
  iVar1 = DAT_002289b4;
  iVar3 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xa70) + 0x44) =
       *(undefined4 *)(*(int *)(param_1 + 0xa70) + 0x34);
  do {
    iVar4 = param_1 + iVar3 * 0x58 + 0xac4;
    FUN_00353dd0(param_2,iVar4);
    FUN_00353d24(param_2,iVar4,param_1,iVar1 + iVar3 * 0x38);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  FUN_00350d20(param_1 + 0xa0,DAT_002289b8 + 0x88);
  *(undefined1 *)(param_1 + 0xa4c) = 1;
  uVar2 = DAT_002289bc;
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,6);
    FUN_00375c08(DAT_002289c4,DAT_002289c0,DAT_002289c0,DAT_002289c0,param_1 + 0x1a4,0);
    *(undefined2 *)(param_1 + 0xa52) = 0;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined2 *)(param_1 + 0xa4e) = 0xb6;
    *(undefined4 *)(param_1 + 0xa48) = DAT_002289c8;
    return;
  }
  *(undefined4 *)(param_1 + 0xa48) = DAT_002289cc;
  *(undefined2 *)(param_1 + 0xa52) = 0;
  *(undefined2 *)(param_1 + 0xa4e) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}
