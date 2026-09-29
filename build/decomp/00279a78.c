// OoT3D decomp @ 00279a78  name=FUN_00279a78  size=180

void FUN_00279a78(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0xd,0);
  uVar1 = FUN_00353fd4(param_1,param_2,2);
  FUN_003532e8(param_1,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_003510b0(param_1,DAT_00279b2c);
  iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00279b30;
    *(undefined2 *)(DAT_00279b34 + param_1) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined2 *)(param_1 + 0x34) = 0x4000;
  }
  return;
}
