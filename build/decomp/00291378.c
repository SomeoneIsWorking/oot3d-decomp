// OoT3D decomp @ 00291378  name=FUN_00291378  size=512

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00291378(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  uVar2 = DAT_00291680;
  fVar1 = DAT_00291678;
  if (*(float *)(param_1 + 0x6c) == DAT_00291678) {
    fVar8 = *(float *)(param_1 + 0x564) - *(float *)(param_1 + 0x28);
    fVar5 = *(float *)(param_1 + 0x56c) - *(float *)(param_1 + 0x30);
    uVar4 = FUN_003758b0(SQRT(fVar8 * fVar8 + fVar5 * fVar5),
                         *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x568));
    fVar5 = (float)FUN_002cfca0();
    fVar5 = fVar5 * *(float *)(param_1 + 0x550);
    fVar8 = (float)FUN_00338f60(uVar4);
    fVar8 = fVar8 * *(float *)(param_1 + 0x550);
    fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar6 = fVar6 * fVar8;
    fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    fVar7 = fVar7 * fVar8;
    if (fVar6 < fVar1) {
      fVar6 = -fVar6;
    }
    FUN_0036e168(*(undefined4 *)(param_1 + 0x564),uVar2,fVar6,fVar1,param_1 + 0x28);
    if (fVar5 < fVar1) {
      fVar5 = -fVar5;
    }
    FUN_0036e168(*(undefined4 *)(param_1 + 0x568),uVar2,fVar5,fVar1,param_1 + 0x2c);
    if (fVar7 < fVar1) {
      fVar7 = -fVar7;
    }
    FUN_0036e168(*(undefined4 *)(param_1 + 0x56c),uVar2,fVar7,fVar1,param_1 + 0x30);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  fVar5 = (float)FUN_0036e168(param_1 + 0x6c);
  if (fVar5 == fVar1) {
    uVar3 = FUN_003758b0(*(float *)(param_1 + 0x56c) - *(float *)(param_1 + 0x30),
                         *(float *)(param_1 + 0x564) - *(float *)(param_1 + 0x28));
    *(undefined2 *)(param_1 + 0xbe) = uVar3;
    *(undefined2 *)(param_1 + 0x36) = uVar3;
  }
  FUN_003731e0(param_1 + 0x1a4);
  if ((int)*(float *)(param_1 + 0x1e0) != 0) {
    if ((*(float *)(param_1 + 0x550) != fVar1) &&
       ((int)*(float *)(param_1 + 0x1e0) == 0 || (int)*(float *)(param_1 + 0x1e0) == 5)) {
      FUN_0037547c(DAT_002917a8,param_1 + 0x28,4,DAT_00375c04);
      return;
    }
    if ((int)*(float *)(param_1 + 0x1e0) != 2 && (int)*(float *)(param_1 + 0x1e0) != 7) {
      return;
    }
    FUN_00375bcc(param_1,DAT_002917ac);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
