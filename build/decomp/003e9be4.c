// OoT3D decomp @ 003e9be4  name=FUN_003e9be4  size=1040

void FUN_003e9be4(short *param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  short *psVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;

  fVar2 = DAT_003e9ee4;
  if (*(char *)((int)param_1 + 0xe0f) == '\0') {
    uVar10 = 800;
    uVar13 = 0xb;
    iVar12 = (int)(short)(int)(*(float *)(param_1 + 0xf6) - DAT_003e9ee4);
    iVar8 = DAT_003e9ee8;
  }
  else {
    uVar10 = 0x4b0;
    iVar12 = 2;
    uVar13 = 9;
    iVar8 = DAT_003e9eec;
  }
  sVar4 = param_1[0x41];
  uVar9 = (uint)(short)(sVar4 - param_1[0x5f]);
  if (*(char *)((int)param_1 + 0xe15) == '\0') {
    bVar14 = (param_1[0x48] & 8U) == 0;
    uVar1 = (ushort)param_1[0x48] & 8;
    if (!bVar14) {
      uVar9 = uVar9 + 0x3fff;
      uVar1 = DAT_003e9ef0;
    }
    if (bVar14 || uVar9 <= uVar1) {
      FUN_00375a18(param_1 + 0x1b,(int)param_1[0x49],1,uVar10,0);
    }
    else {
      if (param_1[0x49] < 1) {
        sVar4 = sVar4 + 0x4000;
      }
      else {
        sVar4 = sVar4 + -0x4000;
      }
      FUN_00375a18(param_1 + 0x1b,(int)sVar4,1,uVar10,0);
      *(undefined1 *)((int)param_1 + 0xe15) = 0x1e;
      param_1[0x70b] = sVar4;
    }
  }
  else {
    FUN_00375a18(param_1 + 0x1b,(int)param_1[0x70b],1,uVar10,0);
    *(char *)((int)param_1 + 0xe15) = *(char *)((int)param_1 + 0xe15) + -1;
    if ((param_1[0x48] & 8U) == 0) {
      *(undefined1 *)((int)param_1 + 0xe15) = 0;
    }
  }
  fVar3 = DAT_003e9ef8;
  uVar10 = DAT_003e9ef4;
  param_1[0x5f] = param_1[0x1b];
  uVar7 = DAT_003e9efc;
  iVar5 = (int)(short)(param_1[0x49] - param_1[0x1b]);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if ((iVar5 <= iVar8) && (*(int *)(param_1 + 0x4c) < DAT_003e9f00)) {
    fVar15 = *(float *)(param_1 + 0x4e);
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar3) << 0x1f;
    in_fpscr = uVar9 | (uint)(NAN(fVar15) || NAN(fVar3)) << 0x1c;
    if ((byte)(uVar9 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar15 = -fVar15;
    }
    if ((int)fVar15 < DAT_003e9f04) {
      if ((*(uint *)(DAT_003e9f08 + param_2) & 1) == 0) {
        uVar6 = FUN_0036ae14(param_1 + 0xd2,3);
        uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x36) = fVar3;
        *(undefined1 *)((int)param_1 + 0xe13) = 2;
        param_1[0x70c] = 0;
        *(undefined1 *)(param_1 + 0x706) = 6;
        FUN_00375c08(fVar3,fVar3,uVar6,uVar7,param_1 + 0xd2,3);
        uVar6 = DAT_003e9f14;
        *(undefined1 *)(param_1 + 0x708) = 0;
      }
      else {
        uVar6 = FUN_0036ae14(param_1 + 0xd2,0);
        uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x36) = fVar3;
        *(undefined1 *)((int)param_1 + 0xe13) = 1;
        *(undefined1 *)(param_1 + 0x706) = 6;
        FUN_00375c08(DAT_003e9f0c,fVar3,uVar6,uVar10,param_1 + 0xd2,0,2);
        uVar6 = DAT_003e9f10;
      }
      *(undefined4 *)(param_1 + 0x70e) = uVar6;
    }
  }
  uVar6 = DAT_003e9f20;
  iVar8 = DAT_003e9f1c;
  psVar11 = *(short **)(DAT_003e9f18 + param_2);
  do {
    if (psVar11 == (short *)0x0) {
LAB_003e9f34:
      if ((int)(short)(param_1[0x49] - param_1[0x5f]) + 0x4000U < 0x8001) {
        param_1[0x70c] = 0x3c;
      }
      else {
        sVar4 = param_1[0x70c];
        param_1[0x70c] = sVar4 + -1;
        if ((short)(sVar4 + -1) == 0) {
          uVar7 = FUN_0036ae14(param_1 + 0xd2,3);
          *(float *)(param_1 + 0x36) = fVar3;
          *(undefined1 *)(param_1 + 0x706) = 1;
          uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
          *(undefined1 *)((int)param_1 + 0xe13) = 3;
          FUN_00375c08(DAT_003ea03c,DAT_003ea038,uVar7,uVar10,param_1 + 0xd2,3,3);
          *(undefined4 *)(param_1 + 0x70e) = DAT_003ea040;
        }
      }
LAB_003e9fbc:
      FUN_0036d188(param_1,param_2);
      FUN_00370734(param_1 + 0xd2);
      uVar10 = VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      iVar8 = FUN_003736fc(uVar10,fVar2,param_1 + 0xd2);
      if (iVar8 == 0) {
        uVar10 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
        iVar8 = FUN_003736fc(uVar10,fVar2,param_1 + 0xd2);
        if (iVar8 == 0) {
          return;
        }
      }
      FUN_00375bcc(param_1,DAT_003ea044);
      return;
    }
    if (((psVar11 != param_1) && (*psVar11 == iVar8)) &&
       (iVar5 = FUN_003a7a2c(uVar6,param_1,psVar11,DAT_003e9f24), iVar5 != 0)) {
      if (psVar11 != (short *)0x0) {
        uVar10 = FUN_0036ae14(param_1 + 0xd2,3);
        uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x36) = fVar3;
        *(undefined1 *)((int)param_1 + 0xe13) = 2;
        param_1[0x70c] = 0;
        *(undefined1 *)(param_1 + 0x706) = 6;
        FUN_00375c08(fVar3,fVar3,uVar10,uVar7,param_1 + 0xd2,3);
        *(undefined4 *)(param_1 + 0x70e) = DAT_003e9f14;
        *(undefined1 *)(param_1 + 0x708) = 1;
        goto LAB_003e9fbc;
      }
      goto LAB_003e9f34;
    }
    psVar11 = *(short **)(psVar11 + 0x98);
  } while( true );
}
