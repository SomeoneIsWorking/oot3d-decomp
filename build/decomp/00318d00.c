// OoT3D decomp @ 00318d00  name=FUN_00318d00  size=212

undefined4 FUN_00318d00(undefined4 param_1,int param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float local_18;
  float local_14;
  float local_10;

  if ((*(byte *)(param_2 + 0x2d) & 4) != 0) {
    FUN_0036ac0c(&local_18,param_2 + 0x70);
    fVar2 = (local_18 - *param_3) * (local_18 - *param_3) +
            (local_14 - param_3[1]) * (local_14 - param_3[1]) +
            (local_10 - param_3[2]) * (local_10 - param_3[2]);
    if (*(float *)(param_2 + 0x7c) <= fVar2) {
      return 0;
    }
    *(float *)(param_2 + 0x7c) = fVar2;
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x11) = *(byte *)(iVar1 + 0x11) & 0x7d;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    iVar1 = *(int *)(param_2 + 0x38);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x16) = *(byte *)(iVar1 + 0x16) & 0x7d;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined2 *)(iVar1 + 0x12) = 0;
      *(undefined2 *)(iVar1 + 0x10) = 0;
      *(undefined2 *)(iVar1 + 0xe) = 0;
    }
  }
  return 1;
}
