// OoT3D decomp @ 00373bec  name=FUN_00373bec  size=280

void FUN_00373bec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  int iVar8;

  if ((int *)param_1[1] != (int *)0x0) {
    uVar4 = *DAT_00373d04;
    bVar5 = uVar4 == 0;
    if (bVar5) {
      uVar4 = (uint)*(byte *)((int)param_1 + 0x11);
    }
    if (bVar5 && uVar4 == 0) {
      param_1[2] = (int)((float)param_1[2] + (float)param_1[3]);
      iVar1 = *(int *)param_1[1];
      fVar6 = (float)param_1[2];
      uVar2 = *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x14) + 4);
      fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar7) << 0x1f;
      if (SUB41(uVar4 >> 0x1f,0) == (NAN(fVar6) || NAN(fVar7))) {
        if ((char)param_1[4] == '\0') {
          fVar6 = (float)VectorSignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
        }
        else {
          fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
          fVar6 = fVar6 - fVar7;
        }
        param_1[2] = (int)fVar6;
      }
      else {
        uVar4 = in_fpscr & 0xfffffff | (uint)(DAT_00373d08 <= fVar6) << 0x1d;
        if (!SUB41(uVar4 >> 0x1d,0)) {
          if ((char)param_1[4] == '\0') {
            param_1[2] = (int)DAT_00373d08;
          }
          else {
            fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
            param_1[2] = (int)(fVar6 + fVar7);
          }
        }
      }
    }
    if (*param_1 != 0) {
      iVar8 = param_1[2];
      iVar1 = 0;
      if (0 < param_1[0x25]) {
        do {
          piVar3 = (int *)param_1[iVar1 + 5];
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(iVar8,piVar3,*param_1);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[0x25]);
      }
    }
  }
  return;
}
