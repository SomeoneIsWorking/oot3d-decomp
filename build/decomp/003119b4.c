// OoT3D decomp @ 003119b4  name=FUN_003119b4  size=336

void FUN_003119b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_004154dc(2,param_1 + 0x38);
  FUN_0031170c(2,param_1 + 0x28);
  FUN_0031170c(2,param_1 + 0x30);
  iVar1 = DAT_00311b04;
  FUN_003115c4(DAT_00311b04,*(undefined4 *)(param_1 + 0x28));
  FUN_003114b4(iVar1 + 0x20000,param_2,param_3,param_4);
  iVar3 = iVar1 + -1;
  FUN_00311364(iVar3,*(undefined4 *)(param_1 + 0x38));
  FUN_003112ac(iVar3,iVar1 + -0x61,iVar1,*(undefined4 *)(param_1 + 0x28));
  FUN_003115c4(iVar1,*(undefined4 *)(param_1 + 0x2c));
  FUN_003114b4(iVar1 + 0x30000,iVar1 + -0x451,param_3,param_4);
  uVar2 = DAT_00311b08;
  FUN_003112ac(iVar3,DAT_00311b08,iVar1,*(undefined4 *)(param_1 + 0x2c));
  FUN_003115c4(iVar1,*(undefined4 *)(param_1 + 0x30));
  FUN_003114b4(iVar1 + 0x20000,param_5,param_6,param_7);
  FUN_00311364(iVar3,*(undefined4 *)(param_1 + 0x3c));
  FUN_003112ac(iVar3,iVar1 + -0x61,iVar1,*(undefined4 *)(param_1 + 0x30));
  FUN_003115c4(iVar1,*(undefined4 *)(param_1 + 0x34));
  FUN_003114b4(iVar1 + 0x30000,iVar1 + -0x451,param_6,param_7);
  FUN_003112ac(iVar3,uVar2,iVar1,*(undefined4 *)(param_1 + 0x34));
  FUN_00311364(iVar3,0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}
