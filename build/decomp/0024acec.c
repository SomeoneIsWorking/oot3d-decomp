// OoT3D decomp @ 0024acec  name=FUN_0024acec  size=368

void FUN_0024acec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_18 [4];

  if ((*(uint *)(*(int *)(DAT_0024ae5c + param_2) + 0x1710) & DAT_0024ae60) == 0) {
    if (0 < *(short *)(param_1 + 0x234)) {
      *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
    }
    (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    iVar1 = (uint)*(ushort *)(param_1 + 0x1c) << 0x15;
    if (iVar1 < 0) {
      if (iVar1 < 0) {
        FUN_00376340(DAT_0024ae64,DAT_0024ae64,DAT_0024ae64,param_2,param_1,0x1c);
      }
    }
    else {
      uVar3 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_18,param_1,param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x84) = uVar3;
    }
    FUN_001eb56c(param_1,param_2);
    iVar1 = DAT_0024ae6c;
    if (*(int *)(param_1 + 0x98) < DAT_0024ae68) {
      iVar2 = *(int *)(param_1 + 0x1c8);
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x28);
      *(float *)(iVar2 + 0x3c) =
           *(float *)(param_1 + 0x2c) +
           *(float *)(((uint)(int)*(short *)(param_1 + 0x1c) >> 8 & 4) + iVar1);
      *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_1 + 0x30);
      if (((*(byte *)(param_1 + 0x23f) & 1) != 0) && (*(short *)(param_1 + 0x234) < 1)) {
        FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
      }
      if (((*(byte *)(param_1 + 0x23f) & 2) != 0) && (*(short *)(param_1 + 0x234) < 1)) {
        FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
      }
    }
  }
  return;
}
