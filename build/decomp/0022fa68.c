// OoT3D decomp @ 0022fa68  name=FUN_0022fa68  size=604

void FUN_0022fa68(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;

  uVar2 = DAT_0022fd2c;
  if (((*(uint *)(DAT_0022fd28 + 4) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0022fd30), puVar3 = DAT_0022fd38, uVar5 = DAT_0022fd34, iVar4 != 0))
  {
    *DAT_0022fd38 = uVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar2;
  }
  *(short *)(param_1 + 0x4a8) = *(short *)(param_1 + 0x4a8) + -1;
  if ((*(short *)(param_1 + 0x4a6) == 0) &&
     ((int)(*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c)) <= DAT_0022fd3c)) {
    if (*(short *)(param_1 + 0xbc) != 0x4000) {
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x400;
    }
    if (*(short *)(param_1 + 0x4ac) != 0) {
      *(short *)(param_1 + 0x4ac) = *(short *)(param_1 + 0x4ac) + -0xf;
    }
    fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
    *(float *)(param_1 + 0x6c) = fVar7 * DAT_0022fd44;
    fVar7 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbc));
    iVar4 = DAT_0022fd4c;
    *(float *)(param_1 + 100) = fVar7 * DAT_0022fd48;
    fVar7 = *(float *)(param_1 + 0x2c);
    fVar8 = *(float *)(param_1 + 0x84);
    if (fVar7 != *(float *)(param_1 + 0xc)) {
      FUN_0037547c(DAT_0022fd58,param_1 + 0x28,4,DAT_0022fd54,DAT_0022fd54,DAT_0022fd50);
    }
    if (((int)(fVar7 - fVar8) < iVar4) && ((*(uint *)(DAT_0022fd5c + param_2) & 1) != 0)) {
      FUN_003738a8(DAT_0022fd60);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  else {
    sVar1 = *(short *)(param_1 + 0x4a6) + -1;
    *(short *)(param_1 + 0x4a6) = sVar1;
    if (sVar1 != 0) {
      if (*(short *)(param_1 + 0xbc) != -0x4000) {
        *(undefined2 *)(param_1 + 0x4a6) = 0x78;
        *(undefined4 *)(param_1 + 100) = uVar2;
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
        *(undefined2 *)(param_1 + 0xbc) = 0xc000;
        fVar7 = DAT_0022fd40;
        for (iVar4 = *(int *)(param_1 + 0x128); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x128)) {
          *(undefined4 *)(iVar4 + 100) = uVar2;
          *(undefined4 *)(iVar4 + 0x6c) = uVar2;
          uVar5 = *(undefined4 *)(param_1 + 0xc);
          uVar6 = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(iVar4 + 0x2c) = uVar5;
          *(undefined4 *)(iVar4 + 0x30) = uVar6;
          *(float *)(iVar4 + 0x2c) = *(float *)(param_1 + 0xc) - fVar7;
        }
      }
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4a6),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar7;
      return;
    }
    FUN_0038049c(param_1);
    for (iVar4 = *(int *)(param_1 + 0x128); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x128)) {
      *(undefined2 *)(iVar4 + 0x4a8) = *(undefined2 *)(iVar4 + 0x4a6);
    }
  }
  return;
}
