// OoT3D decomp @ 003e1a74  name=FUN_003e1a74  size=268

void FUN_003e1a74(int param_1,int param_2)

{
  undefined4 uVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;

  iVar3 = *(int *)(DAT_003e1b9c + param_2);
  if (*(short *)(param_1 + 0xa4e) != 0) {
    *(short *)(param_1 + 0xa4e) = *(short *)(param_1 + 0xa4e) + -1;
  }
  FUN_003731e0(param_1 + 0x1a4);
  bVar4 = (*(byte *)(param_1 + 0xa66) & 2) == 0;
  uVar2 = extraout_r1;
  if (bVar4) {
    uVar2 = (uint)*(byte *)(param_1 + 0xad6);
  }
  bVar5 = (uVar2 & 2) == 0;
  bVar6 = bVar4 && bVar5;
  if (bVar4 && bVar5) {
    bVar6 = (*(byte *)(param_1 + 0xb2e) & 2) == 0;
  }
  if (!bVar6) {
    fVar8 = *(float *)(iVar3 + 0x6c);
    if ((int)*(float *)(iVar3 + 0x6c) < 0x3f800000) {
      fVar8 = DAT_003e1ba0;
    }
    if ((*(byte *)(param_1 + 0xa66) & 2) == 0) {
      fVar8 = -fVar8;
      *(byte *)(param_1 + 0xad6) = *(byte *)(param_1 + 0xad6) & 0xfd;
      *(byte *)(param_1 + 0xb2e) = *(byte *)(param_1 + 0xb2e) & 0xfd;
    }
    fVar7 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) - fVar8 * fVar7;
    fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) - fVar8 * fVar7;
  }
  if (*(short *)(param_1 + 0xa4e) == 0) {
    if (*(char *)(param_1 + 0xa4d) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (DAT_003e1ba4 <
        (uint)(((int)*(short *)(param_1 + 0xbe) - (int)*(short *)(param_1 + 0x92)) +
              ((int)DAT_003e1ba4 >> 1))) {
      *(undefined2 *)(param_1 + 0xa4e) = 6;
    }
    *(undefined2 *)(param_1 + 0xa52) = 0;
    uVar1 = DAT_003e1ba8;
    *(byte *)(param_1 + 0xa65) = *(byte *)(param_1 + 0xa65) & 0xfe;
    *(undefined4 *)(param_1 + 0xa48) = uVar1;
  }
  return;
}
