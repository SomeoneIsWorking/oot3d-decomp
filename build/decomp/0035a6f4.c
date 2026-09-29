// OoT3D decomp @ 0035a6f4  name=FUN_0035a6f4  size=328

void FUN_0035a6f4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  iVar3 = iRam0035a848;
  iVar2 = iRam0035a844;
  uVar1 = uRam0035a840;
  iVar8 = *(int *)(iRam0035a83c + param_2);
  do {
    fVar9 = (float)FUN_00371e50(uVar1);
    iVar6 = (int)(short)((short)(int)fVar9 + 1 + *(short *)(param_1 + 0x1ac)) % 4;
    *(short *)(param_1 + 0x1ac) = (short)iVar6;
    puVar7 = (undefined4 *)(iVar2 + iVar6 * 0xc);
    *(undefined4 *)(param_1 + 0x508) = *puVar7;
    *(undefined4 *)(param_1 + 0x50c) = puVar7[1];
    fVar10 = (float)puVar7[2];
    *(float *)(param_1 + 0x510) = fVar10;
    uVar5 = uRam0035a854;
    uVar4 = uRam0035a850;
    fVar9 = fRam0035a84c;
    fVar11 = *(float *)(param_1 + 0x508) - *(float *)(iVar8 + 0x28);
    fVar10 = fVar10 - *(float *)(iVar8 + 0x30);
  } while ((int)(fVar11 * fVar11 + fVar10 * fVar10) <= iVar3);
  *(float *)(param_1 + 0x50c) = fRam0035a84c;
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  *(undefined4 *)(param_1 + 0x520) = uVar5;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  fVar14 = *(float *)(param_1 + 0x508) - *(float *)(param_1 + 0x28);
  fVar12 = *(float *)(param_1 + 0x2c);
  fVar13 = *(float *)(param_1 + 0x510) - *(float *)(param_1 + 0x30);
  fVar11 = (float)FUN_003696ec(fVar14,fVar13);
  fVar10 = fRam0035a858;
  *(short *)(param_1 + 0x36) = (short)(int)(fVar11 * fRam0035a858);
  fVar9 = (float)FUN_003696ec(fVar9 - fVar12,SQRT(fVar14 * fVar14 + fVar13 * fVar13));
  uVar1 = uRam0035a85c;
  *(short *)(param_1 + 0x34) = (short)(int)(fVar9 * fVar10);
  FUN_0035302c(DAT_00370370,DAT_00370374,DAT_00370374,uVar1,param_1 + 0x5c0,0x15,0);
  return;
}
