// OoT3D decomp @ 0034e6d0  name=FUN_0034e6d0  size=664

void FUN_0034e6d0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  short sVar12;
  float *pfVar13;
  short *psVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_54;
  undefined4 local_50;
  float local_4c;
  int local_48;

  fVar6 = DAT_0034e978;
  fVar5 = DAT_0034e974;
  fVar4 = DAT_0034e970;
  fVar3 = DAT_0034e96c;
  iVar2 = DAT_0034e968;
  iVar9 = 4;
  local_48 = param_2 + 0x208c;
  do {
    iVar10 = param_1 + iVar9;
    if ((*(byte *)(iVar10 + 0x1a6) & 0x7f) == 0) {
      sVar12 = 0;
      psVar14 = (short *)(DAT_0034e97c + iVar9 * 2);
      if (*(short *)(param_1 + 0x1c) == 0xf) {
        sVar12 = 0x4000;
      }
      uVar15 = FUN_00338f60((int)(short)(*(short *)(param_1 + 0x36) + *psVar14 + sVar12));
      *(undefined4 *)(iVar2 + 4) = uVar15;
      fVar16 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x36) + *psVar14 + sVar12));
      iVar8 = DAT_0034e980;
      *(float *)(iVar2 + 8) = fVar16;
      pfVar13 = (float *)(iVar8 + iVar9 * 4);
      fVar19 = *pfVar13;
      local_54 = *(float *)(param_1 + 8) + fVar16 * fVar19;
      local_50 = *(undefined4 *)(param_1 + 0xc);
      local_4c = *(float *)(param_1 + 0x10) + *(float *)(iVar2 + 4) * fVar19;
      FUN_00368cc0(param_2,&local_54,param_1 + 0xec,param_1 + 0xf8);
      fVar16 = fVar4;
      if (*(float *)(param_1 + 0xf8) != fVar3) {
        fVar16 = ABS(fVar5 / *(float *)(param_1 + 0xf8));
      }
      fVar17 = *(float *)(param_1 + 0x100);
      fVar18 = *(float *)(param_1 + 0xf4);
      if ((((fVar18 <= -fVar17) || (*(float *)(param_1 + 0xfc) + fVar17 <= fVar18)) ||
          (0x3f7fffff < (int)((ABS(*(float *)(param_1 + 0xec)) - fVar17) * fVar16))) ||
         (((uint)DAT_0034e984 <=
           (uint)((*(float *)(param_1 + 0xf0) + *(float *)(param_1 + 0x104)) * fVar16) ||
          (0x3f7fffff < (int)((*(float *)(param_1 + 0xf0) - fVar17) * fVar16))))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((!bVar1) && (ABS(fVar18) + fVar19 < *(float *)(param_1 + 0xfc) * fVar6)) {
        bVar1 = true;
      }
      if ((bVar1) || (iVar8 = FUN_0033caf8(*(undefined4 *)(param_2 + 0x20ac)), iVar8 != 0)) {
        if ((*(byte *)(iVar10 + 0x1a6) & 0x80) == 0) {
          uVar7 = *(short *)(param_1 + 0x1c) + 1U | (*(byte *)(param_1 + 0x1ac) & 0xf0) << 4;
        }
        else {
          uVar7 = *(short *)(param_1 + 0x1c) + 1U | 0xff00;
        }
        iVar8 = FUN_0036aa20(local_54,local_50,local_4c,local_48,param_1,param_2,0x77,
                             (int)*(short *)(param_1 + 0x34),(int)*psVar14,0,
                             (int)(short)(uVar7 | (ushort)*(undefined4 *)(param_1 + 0x208)));
        if (iVar8 == 0) {
          *(byte *)(iVar10 + 0x1a6) = *(byte *)(iVar10 + 0x1a6) & 0x80;
        }
        else {
          *(char *)(iVar8 + 0x1a6) = (char)iVar9;
          *(byte *)(iVar10 + 0x1a6) = *(byte *)(iVar10 + 0x1a6) | 1;
          uVar15 = *(undefined4 *)(param_1 + 0xf0);
          uVar11 = *(undefined4 *)(param_1 + 0xf4);
          *(undefined4 *)(iVar8 + 0xec) = *(undefined4 *)(param_1 + 0xec);
          *(undefined4 *)(iVar8 + 0xf0) = uVar15;
          *(undefined4 *)(iVar8 + 0xf4) = uVar11;
          if (*(float *)(param_1 + 0xf4) + *pfVar13 < *(float *)(param_1 + 0xfc) * fVar6) {
            *(undefined1 *)(iVar8 + 0x19e) = 10;
          }
        }
      }
    }
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  return;
}
