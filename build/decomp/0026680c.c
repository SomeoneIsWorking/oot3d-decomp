// OoT3D decomp @ 0026680c  name=FUN_0026680c  size=668

void FUN_0026680c(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;

  FUN_00375a18(param_1 + 0xc0,0x7fff,1,4000,0);
  uVar3 = DAT_00266ac0;
  uVar2 = DAT_00266ab8;
  FUN_0036e168(DAT_00266ab8,DAT_00266ac0,DAT_00266abc,DAT_00266ab8,param_1 + 0x46c);
  FUN_003731e0(param_1 + 0x1a4);
  uVar4 = DAT_00266ad0;
  if (((*(ushort *)(param_1 + 0x90) & 3) == 0) || (*(int *)(param_1 + 0x440) < 2)) {
    bVar9 = *(char *)(param_1 + 0x450) - 8;
    *(byte *)(param_1 + 0x450) = bVar9;
    iVar8 = DAT_00266b0c;
    bVar10 = *(char *)(param_1 + 0x451) + 0x20;
    *(byte *)(param_1 + 0x451) = bVar10;
    if (bVar9 < 200) {
      *(undefined1 *)(param_1 + 0x450) = 200;
    }
    if (200 < bVar10) {
      *(undefined1 *)(param_1 + 0x451) = 200;
    }
    if (*(byte *)(param_1 + 0x452) < 0xec) {
      cVar11 = *(byte *)(param_1 + 0x452) + 0x28;
    }
    else {
      cVar11 = -1;
    }
    *(char *)(param_1 + 0x452) = cVar11;
    if ((int)*(float *)(param_1 + 0xc4) < iVar8) {
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + DAT_00266b10;
    }
  }
  else {
    if ((*(uint *)(DAT_00266ac4 + param_2) & 0x7f) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(float *)(param_1 + 0x47c) = *(float *)(param_1 + 0x47c) + *(float *)(param_1 + 0x480);
    *(undefined1 *)(param_1 + 0x445) = 4;
    FUN_0036e168(DAT_00266ad4,uVar3,uVar4,uVar2,param_1 + 0x484);
    if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
      FUN_0036f00c(DAT_00266adc,DAT_00266ad8,param_2,param_1,param_1 + 0x28,0xb,0,0,0);
      FUN_00375bcc(param_1,DAT_00266ae0);
    }
    fVar14 = DAT_00266ae4;
    if (-1 < *(short *)(param_1 + 0x448)) {
      sVar1 = *(short *)(param_1 + 0x448) + -0xa7;
      *(short *)(param_1 + 0x448) = sVar1;
      if (sVar1 < 0) {
        *(undefined2 *)(param_1 + 0x448) = 0;
      }
      fVar6 = DAT_00266aec;
      fVar5 = DAT_00266ae8;
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x448),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)FUN_003406a8(fVar12 * fVar14 * DAT_00266ae8 * DAT_00266aec);
      fVar7 = DAT_00266af4;
      fVar12 = DAT_00266af0;
      *(float *)(param_1 + 0x54) = DAT_00266af4 + fVar13 * DAT_00266af0;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x448),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)FUN_003406a8(fVar13 * fVar14 * fVar5 * fVar6);
      *(float *)(param_1 + 0x58) = fVar7 - fVar13 * fVar12;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x448),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)FUN_003406a8(fVar13 * fVar14 * fVar5 * fVar6);
      *(float *)(param_1 + 0x5c) = fVar7 + fVar14 * fVar12;
    }
    sVar1 = *(short *)(param_1 + 0x446) + -1;
    *(short *)(param_1 + 0x446) = sVar1;
    if (sVar1 == 0) {
      FUN_00370350(DAT_00266af8,param_1 + 0x1a4,2);
      *(undefined1 *)(param_1 + 0x444) = 6;
      uVar3 = DAT_00266afc;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      uVar2 = DAT_00266b00;
      *(short *)(param_1 + 0x446) = (short)uVar3;
      *(undefined1 *)(param_1 + 0x445) = 3;
      uVar3 = DAT_00266b04;
      *(undefined4 *)(param_1 + 100) = uVar2;
      FUN_00375bcc(param_1,uVar3);
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
      *(undefined4 *)(param_1 + 0x44c) = DAT_00266b08;
    }
  }
  *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + 1;
  return;
}
