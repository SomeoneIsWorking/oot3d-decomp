// OoT3D decomp @ 003fed90  name=FUN_003fed90  size=364

void FUN_003fed90(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  int iVar9;

  if (*(char *)(param_1 + 0xac) == '\0') {
    func_0x003feb40(param_1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    func_0x003ff1b0();
  }
  if (*(char *)(param_1 + 0xac) == '\0') {
    iVar5 = param_1 + 0x4c;
  }
  else {
    iVar5 = param_1 + 0x7c;
  }
  func_0x00304768(*(undefined4 *)(param_1 + 4),iVar5);
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 == (int *)0x0) {
    return;
  }
  if ((int *)piVar3[1] != (int *)0x0) {
    uVar4 = *puRam00373d04;
    bVar6 = uVar4 == 0;
    if (bVar6) {
      uVar4 = (uint)*(byte *)((int)piVar3 + 0x11);
    }
    if (bVar6 && uVar4 == 0) {
      piVar3[2] = (int)((float)piVar3[2] + (float)piVar3[3]);
      iVar5 = *(int *)piVar3[1];
      fVar7 = (float)piVar3[2];
      uVar1 = *(undefined4 *)(iVar5 + *(int *)(iVar5 + 0x14) + 4);
      fVar8 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar8) << 0x1f;
      if (SUB41(uVar4 >> 0x1f,0) == (NAN(fVar7) || NAN(fVar8))) {
        if ((char)piVar3[4] == '\0') {
          fVar7 = (float)VectorSignedToFloat(uVar1,(byte)(uVar4 >> 0x15) & 3);
        }
        else {
          fVar8 = (float)VectorSignedToFloat(uVar1,(byte)(uVar4 >> 0x15) & 3);
          fVar7 = fVar7 - fVar8;
        }
        piVar3[2] = (int)fVar7;
      }
      else {
        uVar4 = in_fpscr & 0xfffffff | (uint)(fRam00373d08 <= fVar7) << 0x1d;
        if (!SUB41(uVar4 >> 0x1d,0)) {
          if ((char)piVar3[4] == '\0') {
            piVar3[2] = (int)fRam00373d08;
          }
          else {
            fVar8 = (float)VectorSignedToFloat(uVar1,(byte)(uVar4 >> 0x15) & 3);
            piVar3[2] = (int)(fVar7 + fVar8);
          }
        }
      }
    }
    if (*piVar3 != 0) {
      iVar9 = piVar3[2];
      iVar5 = 0;
      if (0 < piVar3[0x25]) {
        do {
          piVar2 = (int *)piVar3[iVar5 + 5];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(iVar9,piVar2,*piVar3);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < piVar3[0x25]);
      }
    }
  }
  return;
}
