// OoT3D decomp @ 0026e1e0  name=FUN_0026e1e0  size=792

void FUN_0026e1e0(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  uVar3 = DAT_0026e5a8;
  iVar1 = DAT_0026e5a4;
  iVar4 = *(int *)(DAT_0026e5a0 + param_2);
  *(short *)(param_1 + 0x4a8) = *(short *)(param_1 + 0x4a8) + -1;
  fVar11 = DAT_0026e5b4;
  fVar9 = DAT_0026e5b0;
  fVar8 = DAT_0026e5ac;
  if (*(int *)(param_1 + 0x98) < iVar1) {
    if (((*(byte *)(param_1 + 0x4d0) & 2) != 0) &&
       (*(byte *)(param_1 + 0x4d0) = *(byte *)(param_1 + 0x4d0) & 0xfd,
       *(int *)(param_1 + 0x4c4) == iVar4)) {
      *(undefined2 *)(param_1 + 0x4a6) = 0;
    }
    if (*(short *)(param_1 + 0x4a6) == 0) {
      *(undefined2 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(short *)(param_1 + 0x4a6) = *(short *)(param_1 + 0x4a6) + -1;
    FUN_00375a18(param_1 + 0xbc,0,1,500,0);
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,DAT_0026e5b8,0);
    sVar2 = FUN_003758b0(*(float *)(iVar4 + 0x30) - *(float *)(param_1 + 0x10),
                         *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 8));
    FUN_0036e168(*(float *)(param_1 + 0xc) + DAT_0026e5bc,uVar3,DAT_0026e5c0,uVar3,param_1 + 0x2c);
    iVar1 = *(short *)(param_1 + 0x4a8) * 2000;
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar1 < 1) {
      fVar6 = fVar6 * fVar8 * fVar9 - fVar11;
    }
    else {
      fVar6 = fVar11 + fVar6 * fVar8 * fVar9;
    }
    fVar6 = (float)FUN_002cfca0((int)(short)(int)fVar6);
    fVar7 = (float)FUN_002cfca0((int)(short)(sVar2 + 0x4000));
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 8) + *(float *)(param_1 + 0x4b8) * fVar6 * fVar7;
    iVar1 = *(short *)(param_1 + 0x4a8) * 2000;
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar1 < 1) {
      fVar11 = fVar6 * fVar8 * fVar9 - fVar11;
    }
    else {
      fVar11 = fVar11 + fVar6 * fVar8 * fVar9;
    }
    fVar8 = (float)FUN_002cfca0((int)(short)(int)fVar11);
    fVar9 = (float)FUN_00338f60((int)(short)(sVar2 + 0x4000));
    fVar8 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x4b8) * fVar8 * fVar9;
  }
  else {
    FUN_00375a18(param_1 + 0xbc,DAT_0026e5d4,1,500,0);
    fVar6 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0xc),uVar3,DAT_0026e5d8,uVar3,
                                param_1 + 0x2c);
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 == DAT_0026e5dc) << 0x1e;
    if (SUB41(uVar5 >> 0x1e,0)) {
      *(undefined2 *)(param_1 + 0x4a6) = 0x5a;
      goto LAB_0026e558;
    }
    uVar3 = FUN_003758b0(*(float *)(iVar4 + 0x30) - *(float *)(param_1 + 0x10),
                         *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 8));
    iVar1 = *(short *)(param_1 + 0x4a8) * 2000;
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(uVar5 >> 0x15) & 3);
    if (iVar1 < 1) {
      fVar6 = fVar6 * fVar8 * fVar9 - fVar11;
    }
    else {
      fVar6 = fVar11 + fVar6 * fVar8 * fVar9;
    }
    fVar7 = (float)FUN_002cfca0((int)(short)(int)fVar6);
    fVar10 = (float)FUN_002cfca0(uVar3);
    fVar6 = DAT_0026e5e0;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar7 * fVar10 * DAT_0026e5e0;
    iVar1 = *(short *)(param_1 + 0x4a8) * 2000;
    fVar7 = (float)VectorSignedToFloat(iVar1,(byte)(uVar5 >> 0x15) & 3);
    if (iVar1 < 1) {
      fVar11 = fVar7 * fVar8 * fVar9 - fVar11;
    }
    else {
      fVar11 = fVar11 + fVar7 * fVar8 * fVar9;
    }
    fVar8 = (float)FUN_002cfca0((int)(short)(int)fVar11);
    fVar9 = (float)FUN_00338f60(uVar3);
    fVar8 = *(float *)(param_1 + 0x10) + fVar8 * fVar9 * fVar6;
  }
  *(float *)(param_1 + 0x30) = fVar8;
LAB_0026e558:
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  if (*(float *)(param_1 + 0x2c) != *(float *)(param_1 + 0xc)) {
    FUN_0037547c(DAT_0026e5ec,param_1 + 0x28,4,DAT_0026e5e8,DAT_0026e5e8,DAT_0026e5e4);
  }
  return;
}
