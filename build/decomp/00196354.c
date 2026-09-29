// OoT3D decomp @ 00196354  name=FUN_00196354  size=152

void FUN_00196354(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;

  uVar1 = DAT_001963f0;
  if (*(ushort *)(param_2 + 0x2b7e) < 4) {
    if (*(ushort *)(param_2 + 0x2b7e) != 3) {
      *(uint *)(*(int *)(DAT_001963ec + param_2) + 0x1714) =
           *(uint *)(*(int *)(DAT_001963ec + param_2) + 0x1714) | 0x800000;
      return;
    }
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001963f4);
    fVar2 = DAT_00196400;
    *(short *)(DAT_001963fc + param_1) = (short)DAT_001963f8;
    FUN_0036bb28(*(float *)(param_1 + 0x438) + fVar2,param_1,param_2);
    *(undefined4 *)(param_1 + 0x3f4) = uVar1;
    *(undefined2 *)(param_2 + 0x2b7e) = 4;
  }
  else {
    *(undefined4 *)(param_1 + 0x3f4) = DAT_001963f0;
    *(undefined2 *)(param_2 + 0x2b7e) = 4;
  }
  return;
}
