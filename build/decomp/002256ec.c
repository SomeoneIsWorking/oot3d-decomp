// OoT3D decomp @ 002256ec  name=FUN_002256ec  size=208

void FUN_002256ec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003510b0(param_1,DAT_002257bc);
  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0,0);
  uVar1 = FUN_003532c0(uVar1,0);
  if (param_1 != -0x1c8) {
    FUN_00342968();
  }
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1c0) = DAT_002257c0;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_002257c4;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c0) = DAT_002257c0;
  *(undefined1 *)(param_1 + 0x1be) = 0xf;
  FUN_00353214(param_1 + 0x1c8,param_1,param_2,0);
  return;
}
