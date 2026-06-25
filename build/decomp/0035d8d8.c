// OoT3D decomp @ 0035d8d8  name=FUN_0035d8d8  size=312

void FUN_0035d8d8(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar11 = DAT_0035da38;
  fVar10 = DAT_0035da34;
  fVar9 = DAT_0035da30;
  fVar8 = DAT_0035da2c;
  fVar7 = DAT_0035da28;
  fVar6 = DAT_0035da24;
  fVar5 = DAT_0035da20;
  uVar4 = DAT_0035da1c;
  iVar3 = DAT_0035da18;
  fVar2 = DAT_0035da14;
  fVar1 = DAT_0035da10;
  if (*(char *)(param_1 + 0x246c) != '\x01') {
    iVar13 = 0;
    uVar14 = DAT_0035da1c | DAT_0035da18 >> 0x18;
    do {
      if (*(char *)(param_1 + iVar13 + 0x246d) == '\0') {
        bVar12 = FUN_003702c8(0,200);
        *(byte *)(param_1 + iVar13 + 0x246d) = bVar12;
        fVar15 = (float)VectorUnsignedToFloat((uint)bVar12,(byte)(in_fpscr >> 0x15) & 3);
        fVar15 = fVar15 * fVar1 * fVar2;
        if (iVar3 < (int)fVar15) {
          fVar16 = fVar15 - fVar5;
          fVar17 = fVar5;
          if (((int)uVar4 <= (int)fVar16) && (fVar17 = fVar16, (int)uVar14 < (int)fVar16)) {
            fVar17 = fVar6;
          }
        }
        else {
          fVar17 = fVar15 * fVar7;
        }
        fVar18 = (fVar15 - fVar8) * fVar9;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar10 <= fVar18) << 0x1d;
        fVar16 = fVar10;
        if ((SUB41(in_fpscr >> 0x1d,0)) && (fVar16 = fVar18, 0x3f800000 < (int)fVar18)) {
          fVar16 = fVar11;
        }
        if (param_3 == 0) {
          FUN_00257f7c(fVar17,fVar16,param_2,(int)(short)iVar13,(int)fVar15);
        }
        else {
          FUN_00379514();
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x11);
    *(undefined *)(param_1 + 0x246c) = 1;
  }
  return;
}

