// OoT3D decomp @ 0028a450  name=FUN_0028a450  size=296

void FUN_0028a450(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar5 = 0;
  FUN_003510b0(param_1,DAT_0028a578);
  FUN_003532e8(param_1,0);
  uVar5 = FUN_00372f38(param_1,param_2,param_1 + 0x1e4,1,param_1 + 0x1e8,0,param_1 + 0x1ec,0,
                       param_1 + 0x1f0,0,param_1 + 500,0,0,uVar5);
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x1e8) + 0xc);
    uVar1 = FUN_00372f0c(uVar5,2);
    FUN_00372d94(uVar4,uVar1);
    iVar2 = iVar2 + 1;
    *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x1e8) + 0xc) + 0x10) = 1;
  } while (iVar2 < 4);
  uVar5 = FUN_00353fd4(param_1,param_2,0);
  uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar5);
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  uVar5 = DAT_0028a584;
  if (*(short *)(param_1 + 0x1c) == 0x23) {
    *(undefined4 *)(param_1 + 0x13c) = DAT_0028a57c;
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = DAT_0028a580;
    *(undefined4 *)(param_1 + 0x1bc) = uVar5;
  }
  return;
}
