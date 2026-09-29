// OoT3D decomp @ 003c3c9c  name=FUN_003c3c9c  size=396

void FUN_003c3c9c(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  iVar5 = *(int *)(param_2 + 0x20ac);
  if ((*(ushort *)(param_1 + 600) & 7) == 0) {
    FUN_00375bcc(param_1,DAT_003c3e28);
  }
  *(undefined2 *)(param_1 + 0x264) = 8;
  if ((*(char *)(param_1 + 0x284c) == '\0') &&
     (fVar10 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x3ec),
     fVar8 = *(float *)(iVar5 + 0x2c) - (*(float *)(param_1 + 0x3f0) - DAT_003c3e2c),
     fVar9 = *(float *)(iVar5 + 0x30) - *(float *)(param_1 + 0x3f4),
     (int)(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9) < DAT_003c3e30)) {
    *(undefined1 *)(DAT_003c3e34 + param_1) = 1;
    *(uint *)(iVar5 + 0x1714) = *(uint *)(iVar5 + 0x1714) | 0x20000000;
  }
  if (*(char *)(param_1 + 0x284d) != '\0') {
    *(undefined1 *)(DAT_003c3e38 + param_2) = 1;
  }
  if (*(short *)(param_1 + 0x25e) == 0) {
    iVar6 = *(int *)(param_2 + 0x20ac);
    bVar1 = true;
    if (*(char *)(param_1 + 0x284d) != '\0') {
      uVar4 = FUN_0036a7a0(param_2);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        uVar4 = (uint)*(byte *)(DAT_003c3e3c + iVar6);
      }
      if (!bVar7 || uVar4 != 0) {
        bVar1 = false;
      }
    }
    if (bVar1) goto LAB_003c3dac;
  }
  uVar3 = DAT_003c3e48;
  uVar2 = DAT_003c3e44;
  if ((*(uint *)(DAT_003c3e40 + iVar5) & 0x80) != 0) {
    FUN_00373500(*(undefined4 *)(param_1 + 0x3ec),DAT_003c3e48,DAT_003c3e44,iVar5 + 0x28);
    FUN_00373500(*(float *)(param_1 + 0x3f0) + *(float *)(param_1 + 0x3dc),uVar3,uVar2,iVar5 + 0x2c)
    ;
    FUN_00373500(*(undefined4 *)(param_1 + 0x3f4),uVar3,uVar2,iVar5 + 0x30);
    FUN_00373500(DAT_003c3e50,uVar3,DAT_003c3e4c,param_1 + 0x3dc);
    return;
  }
LAB_003c3dac:
  FUN_00355b40(param_1,param_2);
  return;
}
