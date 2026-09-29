// OoT3D decomp @ 0018df00  name=FUN_0018df00  size=232

void FUN_0018df00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_0018e1e4);
  uVar1 = DAT_0018e1f0;
  FUN_00372d4c(DAT_0018e1f0,DAT_0018e1e8,param_1 + 0xbc,DAT_0018e1ec);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0x9cc,param_1,DAT_0018e1f4,param_1 + 0x9ec);
  *(undefined4 *)(*(int *)(param_1 + 0x9e8) + 0x44) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x9e8) + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(*(int *)(param_1 + 0x9e8) + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(*(int *)(param_1 + 0x9e8) + 0x40) = *(undefined4 *)(param_1 + 0x30);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x974,param_1,DAT_0018e1f8);
  FUN_00350d20(param_1 + 0xa0,DAT_0018e1fc + 0x60);
  *(undefined1 *)(param_1 + 0x91c) = 0;
  *(undefined1 *)(param_1 + 0x91d) = 0x30;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(700,300);
}
