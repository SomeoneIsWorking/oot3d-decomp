// OoT3D decomp @ 0027ac74  name=FUN_0027ac74  size=184

void FUN_0027ac74(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;

  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0,0);
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  FUN_003532e8(param_1,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_003510b0(param_1,DAT_0027ad2c);
  iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  fVar3 = DAT_0027ad38;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0027ad30;
    fVar3 = *(float *)(param_1 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0027ad34;
    fVar3 = *(float *)(param_1 + 0xc) + fVar3;
  }
  *(float *)(param_1 + 0x2c) = fVar3;
  return;
}
