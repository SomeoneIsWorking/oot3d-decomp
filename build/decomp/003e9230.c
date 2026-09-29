// OoT3D decomp @ 003e9230  name=FUN_003e9230  size=564

void FUN_003e9230(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;

  fVar10 = DAT_003e94d4;
  iVar6 = *(int *)(DAT_003e94d0 + param_2);
  sVar3 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
  if (sVar3 < 0) {
    sVar3 = -sVar3;
  }
  FUN_0036e168(DAT_003e94e0,DAT_003e94dc,DAT_003e94d8,DAT_003e94d4,param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x6c);
  fVar8 = *(float *)(param_1 + 0x220);
  FUN_003731e0(param_1 + 0x1e4);
  uVar1 = DAT_003e94e4;
  fVar9 = *(float *)(param_1 + 0x224);
  if (fVar9 < fVar10) {
    fVar9 = -fVar9;
  }
  iVar12 = (int)(*(float *)(param_1 + 0x220) - fVar9);
  iVar5 = (int)fVar9 + (int)fVar8;
  if ((*(short *)(param_1 + 0x8fa) != 0) ||
     (fVar10 = (float)FUN_0036d260(param_1 + 8,iVar6 + 0x28), *(float *)(param_1 + 0x930) <= fVar10)
     ) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    fVar10 = (float)FUN_0036d260(param_1 + 0x28,param_1 + 8);
    bVar7 = fVar10 == *(float *)(param_1 + 0x92c);
    if (fVar10 <= *(float *)(param_1 + 0x92c)) {
      bVar7 = *(short *)(param_1 + 0x8f8) == 0;
    }
    if (!bVar7) {
      uVar4 = FUN_003758b0(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30),
                           *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28));
      FUN_00375a18(param_1 + 0x36,uVar4,1,uVar1,0);
      if (*(short *)(param_1 + 0x8f8) != 0) {
        *(short *)(param_1 + 0x8f8) = *(short *)(param_1 + 0x8f8) + -1;
      }
    }
    if (*(short *)(param_1 + 0x8fa) != 0) {
      *(short *)(param_1 + 0x8fa) = *(short *)(param_1 + 0x8fa) + -1;
    }
    if (*(short *)(param_1 + 0x8f8) == 0) {
      FUN_00375bcc(param_1,DAT_003e94f0);
    }
    sVar3 = *(short *)(param_1 + 0x8f6) + -1;
    *(short *)(param_1 + 0x8f6) = sVar3;
    if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  else {
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,uVar1,0);
    iVar2 = DAT_003e94e8;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    iVar11 = *(int *)(param_1 + 0x98);
    bVar7 = SBORROW4(iVar11,iVar2);
    iVar6 = iVar11 - iVar2;
    if (iVar11 < iVar2) {
      bVar7 = SBORROW4((int)sVar3,DAT_003e94ec);
      iVar6 = sVar3 - DAT_003e94ec;
    }
    if (iVar6 < 0 != bVar7) {
      FUN_0036ccb8(param_1);
    }
  }
  if (((int)*(float *)(param_1 + 0x220) != (int)fVar8) &&
     (((iVar12 < 2 && (0 < iVar5)) || ((iVar12 < 0x15 && (0x13 < iVar5)))))) {
    FUN_00375bcc(param_1,DAT_003e9500);
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  return;
}
