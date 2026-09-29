// OoT3D decomp @ 00436354  name=FUN_00436354  size=492

void FUN_00436354(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;

  fVar1 = DAT_00436544;
  fVar15 = DAT_00436540;
  fVar4 = *(float *)(param_1 + 0x7f8);
  fVar6 = *(float *)(param_1 + 0x7fc);
  fVar8 = *(float *)(param_1 + 0x800);
  fVar10 = *(float *)(param_1 + 0x804);
  fVar12 = *(float *)(param_1 + 0x808);
  pfVar13 = (float *)(param_1 + 0x80c);
  fVar5 = *pfVar13;
  fVar7 = *(float *)(param_1 + 0x810);
  fVar9 = *(float *)(param_1 + 0x814);
  fVar11 = *(float *)(param_1 + 0x818);
  pfVar3 = (float *)(param_1 + 0x7f8);
  fVar14 = *(float *)(param_1 + 0x844) * *(float *)(param_1 + 0x7e0);
  fVar16 = *(float *)(param_1 + 0x84c) * fVar14;
  fVar14 = *(float *)(param_1 + 0x850) * (DAT_00436544 + fVar16 * fVar16 * DAT_00436540) * fVar14;
  *(float *)(param_1 + 0x804) = *(float *)(param_1 + 0x804) + fVar14 * fVar7;
  *(float *)(param_1 + 0x808) = *(float *)(param_1 + 0x808) + fVar14 * fVar9;
  *pfVar13 = *pfVar13 + fVar14 * fVar11;
  *(float *)(param_1 + 0x810) = *(float *)(param_1 + 0x810) - fVar14 * fVar10;
  *(float *)(param_1 + 0x814) = *(float *)(param_1 + 0x814) - fVar14 * fVar12;
  *(float *)(param_1 + 0x818) = *(float *)(param_1 + 0x818) - fVar14 * fVar5;
  fVar14 = *(float *)(param_1 + 0x844) * *(float *)(param_1 + 0x7e4);
  fVar16 = *(float *)(param_1 + 0x84c) * fVar14;
  fVar14 = *(float *)(param_1 + 0x850) * (fVar1 + fVar16 * fVar16 * fVar15) * fVar14;
  *(float *)(param_1 + 0x810) = *(float *)(param_1 + 0x810) + fVar14 * fVar4;
  *(float *)(param_1 + 0x814) = *(float *)(param_1 + 0x814) + fVar14 * fVar6;
  *(float *)(param_1 + 0x818) = *(float *)(param_1 + 0x818) + fVar14 * fVar8;
  *pfVar3 = *pfVar3 - fVar14 * fVar7;
  *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x7fc) - fVar14 * fVar9;
  *(float *)(param_1 + 0x800) = *(float *)(param_1 + 0x800) - fVar14 * fVar11;
  fVar7 = *(float *)(param_1 + 0x844) * *(float *)(param_1 + 0x7e8);
  fVar9 = *(float *)(param_1 + 0x84c) * fVar7;
  fVar15 = *(float *)(param_1 + 0x850) * (fVar1 + fVar9 * fVar9 * fVar15) * fVar7;
  *pfVar3 = *pfVar3 + fVar15 * fVar10;
  *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x7fc) + fVar15 * fVar12;
  *(float *)(param_1 + 0x800) = *(float *)(param_1 + 0x800) + fVar15 * fVar5;
  *(float *)(param_1 + 0x804) = *(float *)(param_1 + 0x804) - fVar15 * fVar4;
  *(float *)(param_1 + 0x808) = *(float *)(param_1 + 0x808) - fVar15 * fVar6;
  uVar2 = DAT_00436548;
  *pfVar13 = *pfVar13 - fVar15 * fVar8;
  FUN_002ea458(uVar2);
  return;
}
