// OoT3D decomp @ 00394bcc  name=FUN_00394bcc  size=264

void FUN_00394bcc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x214,1,0,uVar2);
  iVar1 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar1 != 0) {
    FUN_00374428(param_1);
    return;
  }
  FUN_00353dd0(param_2,param_1 + 0x1bc);
  FUN_00353d24(param_2,param_1 + 0x1bc,param_1,DAT_00394cd4);
  *(float *)(param_1 + 0x208) = *(float *)(param_1 + 0x208) + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x20c) + *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x210) = *(float *)(param_1 + 0x210) + *(float *)(param_1 + 0x30);
  uVar2 = FUN_00353fd4(param_1,param_2,0);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  FUN_0037572c(DAT_00394cd8,param_1);
  return;
}
