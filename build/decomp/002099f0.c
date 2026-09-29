// OoT3D decomp @ 002099f0  name=FUN_002099f0  size=228

void FUN_002099f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  *(undefined4 *)(param_1 + 0x1bc) = 0;
  FUN_003510b0(param_1,DAT_00209ad4);
  FUN_003532e8(param_1,1);
  FUN_00372f38(param_1,param_2,param_1 + 0x22c,4,0);
  FUN_00353dd0(param_2,param_1 + 0x1d0);
  FUN_00353d24(param_2,param_1 + 0x1d0,param_1,DAT_00209ad8);
  uVar1 = FUN_00353fd4(param_1,param_2,2);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  iVar2 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  uVar1 = DAT_00209ae8;
  uVar3 = DAT_00209adc;
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x2c) = (*(float *)(param_1 + 0xc) - DAT_00209ae0) - DAT_00209ae4;
    uVar3 = uVar1;
  }
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  return;
}
