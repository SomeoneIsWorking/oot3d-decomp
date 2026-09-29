// OoT3D decomp @ 00279b68  name=FUN_00279b68  size=168

void FUN_00279b68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_003510b0(param_1,DAT_00279c10,param_3,param_4,param_4);
  FUN_00372f38(param_1,param_2,param_1 + 0x218,3,0);
  FUN_00350eb8(param_2,param_1 + 0x1a8);
  FUN_00350d48(param_2,param_1 + 0x1a8,param_1,DAT_00279c14,param_1 + 0x1c8);
  iVar1 = *(int *)(param_1 + 0x1c4);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  *(undefined4 *)(iVar1 + 0x40) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x44) =
       *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x34);
  iVar1 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_00279c10 + 4) = 0;
  }
  *(undefined2 *)(param_1 + 0x1a4) = 0xffff;
  *(undefined1 *)(param_1 + 0x19b) = 1;
  return;
}
