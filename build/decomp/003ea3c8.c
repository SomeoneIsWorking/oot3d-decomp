// OoT3D decomp @ 003ea3c8  name=FUN_003ea3c8  size=644

void FUN_003ea3c8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  int iVar9;
  float fVar10;

  uVar5 = DAT_003ea698;
  iVar6 = *(int *)(DAT_003ea68c + param_2);
  sVar3 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
  if (sVar3 < 0) {
    sVar3 = -sVar3;
  }
  if (*(char *)(param_1 + 0xa41) == '\0') {
    FUN_0036e168(DAT_003ea69c,DAT_003ea694,DAT_003ea690,DAT_003ea698,param_1 + 0x6c);
  }
  else {
    FUN_0036e168(DAT_003ea698,DAT_003ea694,DAT_003ea690,DAT_003ea698,param_1 + 0x6c);
  }
  *(undefined4 *)(param_1 + 0x1e4) = DAT_003ea6a0;
  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_003ea6ac;
  uVar1 = DAT_003ea6a8;
  if ((int)*(float *)(param_1 + 0x1e0) < 0x15) {
    if (*(short *)(param_1 + 0x98a) != 0) goto LAB_003ea50c;
    FUN_00375bcc(param_1,DAT_003ea6a4);
    FUN_0036f00c(uVar2,uVar1,param_2,param_1,param_1 + 0x990,3,200,0xf,0);
    uVar4 = 1;
  }
  else {
    if (*(short *)(param_1 + 0x98a) == 0) goto LAB_003ea50c;
    FUN_00375bcc(param_1,DAT_003ea6a4);
    FUN_0036f00c(uVar2,uVar1,param_2,param_1,param_1 + 0x99c,3,200,0xf,0);
    uVar4 = 0;
  }
  *(undefined2 *)(param_1 + 0x98a) = uVar4;
LAB_003ea50c:
  fVar10 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 8);
  fVar8 = *(float *)(iVar6 + 0x30) - *(float *)(param_1 + 0x10);
  if ((int)SQRT(fVar10 * fVar10 + fVar8 * fVar8) < DAT_003ea6b0) {
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,500,0);
    iVar9 = *(int *)(param_1 + 0x98);
    bVar7 = SBORROW4(iVar9,DAT_003ea6b4);
    iVar6 = iVar9 - DAT_003ea6b4;
    if (iVar9 < DAT_003ea6b4) {
      bVar7 = SBORROW4((int)sVar3,DAT_003ea6b8);
      iVar6 = sVar3 - DAT_003ea6b8;
    }
    if ((iVar6 < 0 != bVar7) && (*(int *)(param_1 + 0x9c) < DAT_003ea6bc)) {
      FUN_00374a58(DAT_003ea6c0,param_1 + 0x1a4,4);
      *(undefined4 *)(param_1 + 0x6c) = uVar5;
      *(undefined4 *)(param_1 + 0x978) = 3;
      *(undefined4 *)(param_1 + 0x97c) = DAT_003ea6c4;
    }
  }
  else {
    fVar10 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28);
    fVar8 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30);
    fVar8 = SQRT(fVar10 * fVar10 + fVar8 * fVar8);
    bVar7 = fVar8 == DAT_003ea6c8;
    if ((int)fVar8 <= (int)DAT_003ea6c8) {
      bVar7 = *(short *)(param_1 + 0x982) == 0;
    }
    if (!bVar7) {
      uVar5 = FUN_003758b0();
      FUN_00375a18(param_1 + 0x36,uVar5,1,500,0);
      if (*(short *)(param_1 + 0x982) != 0) {
        *(short *)(param_1 + 0x982) = *(short *)(param_1 + 0x982) + -1;
      }
    }
    sVar3 = *(short *)(param_1 + 0x980) + -1;
    *(short *)(param_1 + 0x980) = sVar3;
    if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  return;
}
