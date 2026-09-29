// OoT3D decomp @ 00378240  name=FUN_00378240  size=184

void FUN_00378240(int param_1,int param_2)

{
  float fVar1;
  int iVar2;

  if (0 < *(short *)(param_1 + 0x21a)) {
    *(short *)(param_1 + 0x21a) = *(short *)(param_1 + 0x21a) + -1;
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  fVar1 = DAT_003782f8;
  if (*(int *)(param_1 + 0x13c) == 0) {
    return;
  }
  if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
    *(float *)(param_1 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
    FUN_0037322c(DAT_003782fc,param_1);
  }
  *(byte *)(param_1 + 0x22a) = *(byte *)(param_1 + 0x1b9);
  *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  return;
}
