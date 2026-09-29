// OoT3D decomp @ 00279928  name=FUN_00279928  size=244

void FUN_00279928(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_003532e8(param_1,0);
  FUN_003510b0(param_1,DAT_00279a1c);
  FUN_00353dd0(param_2,param_1 + 0x1c0);
  FUN_00353d24(param_2,param_1 + 0x1c0,param_1,DAT_00279a20);
  if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x200) = DAT_00279a24;
    *(undefined4 *)(param_1 + 0x204) = DAT_00279a28;
  }
  FUN_0037632c(param_1,param_1 + 0x1c0);
  FUN_00372f38(param_1,param_2,param_1 + 0x218,
               *(undefined4 *)(DAT_00279a2c + (*(ushort *)(param_1 + 0x1c) & 1) * 4),0);
  uVar1 = FUN_00353fd4(param_1,param_2,
                       *(undefined4 *)(DAT_00279a30 + (*(ushort *)(param_1 + 0x1c) & 1) * 4));
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1bc) = DAT_00279a34;
  return;
}
