// OoT3D decomp @ 0010990c  name=FUN_0010990c  size=384

void FUN_0010990c(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;

  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
  FUN_003731e0(param_1 + 0x1a4);
  iVar4 = FUN_003736fc(DAT_00109a90,DAT_00109a8c,param_1 + 0x1a4);
  sVar1 = 0;
  if (iVar4 != 0) {
    sVar1 = *(short *)(param_1 + 0x8b0);
  }
  if (iVar4 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x8b0) = sVar1 + -1;
  }
  iVar4 = FUN_003736fc(DAT_00109a98,DAT_00109a94,param_1 + 0x1a4);
  if (iVar4 != 0) {
    FUN_00375bcc(param_1,DAT_00109a9c);
  }
  if (*(int *)(param_1 + 0x98) + 0xbce00000U < 0xec0001) {
    iVar4 = FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,DAT_00109aa4 << 1,
                         DAT_00109aa4);
    bVar5 = iVar4 + 0x38dU == DAT_00109aa8;
    if (iVar4 + 0x38dU <= DAT_00109aa8) {
      bVar5 = *(short *)(param_1 + 0x8b0) == 0;
    }
    if ((bVar5) && (*(int *)(param_1 + 0x9c) < DAT_00109aac)) {
      FUN_00373d40(param_1 + 0x1a4,5);
      iVar3 = DAT_00109ac0;
      iVar2 = DAT_00109ab8;
      fVar6 = DAT_00109ab4;
      iVar4 = DAT_00109ab0;
      if (*(int *)(param_1 + 0x8ac) != DAT_00109ab0) {
        *(undefined2 *)(param_1 + 0x8b0) = *(undefined2 *)(param_1 + 0x8b2);
      }
      fVar6 = *(float *)(param_1 + 0x9c) + fVar6;
      *(float *)(param_1 + 0x8b4) = fVar6;
      if ((int)fVar6 < iVar2) {
        fVar6 = DAT_00109abc;
      }
      *(float *)(param_1 + 0x8b4) = fVar6;
      if (iVar3 < (int)fVar6) {
        FUN_0036e670(param_2,param_1 + 8,0,0,0,DAT_00109ac4);
      }
      if (iVar3 < *(int *)(param_1 + 0x8b4)) {
        FUN_00375bcc(param_1,DAT_00109ac8);
      }
      *(int *)(param_1 + 0x8ac) = iVar4;
      return;
    }
  }
  else {
    FUN_00373d40(param_1 + 0x1a4,2);
    *(undefined4 *)(param_1 + 0x8ac) = DAT_00109aa0;
  }
  return;
}
