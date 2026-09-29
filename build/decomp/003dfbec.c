// OoT3D decomp @ 003dfbec  name=FUN_003dfbec  size=328

void FUN_003dfbec(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;

  fVar2 = fRam003dfd34;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    iVar3 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
    if (iVar3 != 0) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - fVar2;
      *(undefined1 *)(param_1 + 0x1a8) = 1;
      goto LAB_003dfc70;
    }
    if (*(char *)(param_1 + 0x1a8) == '\0') goto LAB_003dfc70;
  }
  iVar3 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  if (iVar3 == 0) {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + fVar2;
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
LAB_003dfc70:
  FUN_0035ae08(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x2c),param_1,uRam003dfd38);
  iVar3 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),uRam003dfd3c,param_1 + 0x2c);
  if ((iVar3 != 0) &&
     (*(undefined4 *)(param_1 + 0x1a4) = uRam003dfd40, *(char *)(param_1 + 0x1a8) != '\0')) {
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2) =
       (short)(int)*(float *)(param_1 + 0x2c) + -8;
  iVar3 = 1;
  do {
    *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + iVar3 * 0x10 + 2) =
         (short)(int)*(float *)(param_1 + 0x2c) + -8;
    iVar1 = iVar3 * 0x10;
    iVar3 = iVar3 + 2;
    *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + iVar1 + 0x12) =
         (short)(int)*(float *)(param_1 + 0x2c) + -8;
  } while (iVar3 < 9);
  return;
}
