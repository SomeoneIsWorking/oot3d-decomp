// OoT3D decomp @ 0015f014  name=FUN_0015f014  size=448

void FUN_0015f014(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  ushort *puVar3;
  int unaff_r5;
  uint in_fpscr;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  iVar2 = FUN_0037571c(param_2);
  puVar3 = (ushort *)0x0;
  if (iVar2 != 0) {
    unaff_r5 = param_2 + 0x2000;
    puVar3 = *(ushort **)(param_2 + 0x22f8);
  }
  if (iVar2 != 0 && puVar3 != (ushort *)0x0) {
    if ((ushort)*(byte *)(DAT_0015f1d4 + param_1) != *puVar3) {
      uVar4 = VectorSignedToFloat(*(undefined4 *)(puVar3 + 6),(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = VectorSignedToFloat(*(undefined4 *)(puVar3 + 8),(byte)(in_fpscr >> 0x15) & 3);
      uVar8 = VectorSignedToFloat(*(undefined4 *)(puVar3 + 10),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x30) = uVar8;
      *(undefined4 *)(param_1 + 0x2c) = uVar6;
      *(undefined4 *)(param_1 + 0x28) = uVar4;
      uVar1 = *(undefined2 *)(*(int *)(param_2 + 0x22f8) + 8);
      *(undefined2 *)(param_1 + 0xbe) = uVar1;
      *(undefined2 *)(param_1 + 0x36) = uVar1;
      *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(*(int *)(param_2 + 0x22f8) + 10);
      FUN_003528dc(param_1,param_2);
    }
    fVar5 = (float)FUN_00361490(*(undefined2 *)(*(int *)(param_2 + 0x22f8) + 4),
                                *(undefined2 *)(*(int *)(param_2 + 0x22f8) + 2),
                                *(undefined2 *)(DAT_0015f1d8 + param_2));
    if (0x3f800000 < (int)fVar5) {
      fVar5 = DAT_0015f1dc;
    }
    fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(unaff_r5 + 0x2f8) + 0xc),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(unaff_r5 + 0x2f8) + 0x10),
                                        (byte)(in_fpscr >> 0x15) & 3);
    iVar2 = *(int *)(unaff_r5 + 0x2f8);
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(unaff_r5 + 0x2f8) + 0x14),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = fVar12 + (fVar11 - fVar12) * fVar5;
    fVar13 = fVar13 + (fVar9 - fVar13) * fVar5;
    fVar11 = (fVar12 - *(float *)(param_1 + 0x28)) * DAT_0015f1dc;
    fVar9 = (fVar13 - *(float *)(param_1 + 0x30)) * DAT_0015f1dc;
    FUN_003705a0(((fVar10 + (fVar7 - fVar10) * fVar5) - *(float *)(param_1 + 0x2c)) * DAT_0015f1dc,
                 param_1 + 100);
    *(float *)(param_1 + 0x6c) = SQRT(fVar11 * fVar11 + fVar9 * fVar9);
    uVar1 = FUN_003758b0(fVar13 - *(float *)(param_1 + 0x30),fVar12 - *(float *)(param_1 + 0x28));
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
  }
  if ((*(ushort *)(DAT_0015f1e0 + param_1) & 0x80) == 0) {
    return;
  }
  FUN_003525e0(param_1,param_2);
  return;
}
