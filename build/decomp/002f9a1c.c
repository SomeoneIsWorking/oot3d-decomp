// OoT3D decomp @ 002f9a1c  name=FUN_002f9a1c  size=552

void FUN_002f9a1c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = 0;
  if (0 < *param_1) {
    do {
      iVar3 = iVar1 * 0x30 + 4;
      *(float *)(param_1[4] + iVar1 * 0x30) =
           *(float *)(param_1[3] + iVar1 * 0x30) + *(float *)(param_1[7] + iVar1 * 8);
      iVar2 = iVar1 * 8 + 4;
      *(float *)(iVar3 + param_1[4]) =
           *(float *)(param_1[3] + iVar3) + *(float *)(param_1[7] + iVar2);
      iVar3 = iVar1 * 0x30 + 8;
      *(undefined4 *)(iVar3 + param_1[4]) = *(undefined4 *)(param_1[3] + iVar3);
      iVar3 = iVar1 * 0x30 + 0xc;
      *(float *)(iVar3 + param_1[4]) =
           *(float *)(param_1[3] + iVar3) + *(float *)(param_1[7] + iVar1 * 8);
      iVar3 = iVar1 * 0x30 + 0x10;
      *(float *)(iVar3 + param_1[4]) =
           *(float *)(param_1[3] + iVar3) + *(float *)(param_1[7] + iVar2);
      iVar3 = iVar1 * 0x30 + 0x14;
      *(undefined4 *)(iVar3 + param_1[4]) = *(undefined4 *)(param_1[3] + iVar3);
      iVar3 = iVar1 * 0x30 + 0x18;
      *(float *)(iVar3 + param_1[4]) =
           *(float *)(param_1[3] + iVar3) + *(float *)(param_1[7] + iVar1 * 8);
      iVar3 = iVar1 * 0x30 + 0x1c;
      *(float *)(iVar3 + param_1[4]) =
           *(float *)(param_1[3] + iVar3) + *(float *)(param_1[7] + iVar2);
      iVar3 = iVar1 * 0x30 + 0x20;
      *(undefined4 *)(iVar3 + param_1[4]) = *(undefined4 *)(param_1[3] + iVar3);
      iVar4 = iVar1 * 0x30 + 0x24;
      iVar3 = iVar1 + 1;
      *(float *)(iVar4 + param_1[4]) =
           *(float *)(param_1[3] + iVar4) + *(float *)(param_1[7] + iVar1 * 8);
      iVar4 = iVar1 * 0x30 + 0x28;
      iVar1 = iVar1 * 0x30 + 0x2c;
      *(float *)(param_1[4] + iVar4) =
           *(float *)(param_1[3] + iVar4) + *(float *)(iVar2 + param_1[7]);
      *(undefined4 *)(iVar1 + param_1[4]) = *(undefined4 *)(param_1[3] + iVar1);
      iVar1 = iVar3;
    } while (iVar3 < *param_1);
    return;
  }
  return;
}
