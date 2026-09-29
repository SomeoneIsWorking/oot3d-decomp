// OoT3D decomp @ 00197ff8  name=FUN_00197ff8  size=180

void FUN_00197ff8(int param_1)

{
  short sVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;

  if ((*(short *)(param_1 + 0x1c4) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x1c4) + -1, *(short *)(param_1 + 0x1c4) = sVar1, sVar1 < 0x17))
  {
    iVar4 = (int)*(short *)(param_1 + 0x1c4);
    iVar7 = (int)((ulonglong)((longlong)DAT_001980ac * (longlong)iVar4) >> 0x20);
    lVar2 = (longlong)DAT_001980b4;
    iVar8 = (int)((ulonglong)(lVar2 * iVar4) >> 0x20);
    fVar9 = (float)VectorSignedToFloat((iVar7 - (iVar7 >> 0x1f)) * -3 + iVar4 + -1,
                                       (byte)(in_fpscr >> 0x15) & 3);
    iVar8 = iVar8 - (iVar8 >> 0x1f);
    iVar5 = iVar4 + iVar8 * -6;
    iVar6 = iVar5;
    iVar7 = iVar8 * -3;
    if (iVar5 == 0) {
      iVar6 = param_1;
      iVar7 = DAT_001980b8;
    }
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar9 * DAT_001980b0;
    if (iVar5 == 0) {
      FUN_00375bcc(iVar6,iVar7,(int)(lVar2 * iVar4));
    }
    puVar3 = DAT_001980bc;
    if (*(short *)(param_1 + 0x1c4) == 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
      *puVar3 = 0;
      *(undefined2 *)(param_1 + 0x1c4) = 0x3c;
      *(undefined4 *)(param_1 + 0x1bc) = DAT_001980c0;
    }
  }
  return;
}
