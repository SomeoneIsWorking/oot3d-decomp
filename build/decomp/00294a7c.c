// OoT3D decomp @ 00294a7c  name=FUN_00294a7c  size=1260

void FUN_00294a7c(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  float fVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint extraout_r1;
  int iVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;

  uVar12 = DAT_00294e5c;
  sVar2 = *(short *)(param_1 + 0xbe);
  sVar3 = *(short *)(param_1 + 0x956);
  iVar14 = *(int *)(param_2 + 0x20ac);
  sVar4 = *(short *)(param_1 + 0x958);
  sVar5 = *(short *)(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x6c);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,0xfa,0);
  FUN_00375a18(param_1 + 0x956,0,1,100,0);
  FUN_00375a18(param_1 + 0x958,0,1,100,0);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  FUN_00370734(param_1 + 0x1e0);
  iVar18 = FUN_0035a4fc(iVar14,param_1 + 8);
  fVar6 = DAT_00294e68;
  uVar21 = DAT_00294e64;
  iVar11 = DAT_00294e60;
  if (DAT_00294e60 <= iVar18) {
    uVar9 = FUN_0036ae14(param_1 + 0x1e0,5);
    uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(fVar6,uVar12,uVar9,uVar21,param_1 + 0x1e0,5,1);
    uVar9 = DAT_00294e6c;
    *(undefined1 *)(param_1 + 0x964) = 2;
    *(undefined4 *)(param_1 + 0x950) = uVar9;
  }
  if (((int)(short)(sVar5 - (sVar2 + sVar3 + sVar4)) + 0x1553U <= DAT_00294e70) &&
     (iVar19 = FUN_003306c4(param_1,iVar14), iVar18 = DAT_00294e78, iVar19 <= iVar11)) {
    uVar10 = iVar14 + 0x1000;
    bVar15 = (*(uint *)(iVar14 + 0x1710) & DAT_00294e74) != 0;
    if (!bVar15) {
      uVar10 = *(uint *)(iVar14 + 0x1714);
    }
    if (bVar15 || (uVar10 & 0x80) != 0) {
      uVar9 = FUN_0036ae14(param_1 + 0x1e0,5);
      uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(fVar6,uVar12,uVar9,uVar21,param_1 + 0x1e0,5,1);
      uVar9 = DAT_00294e6c;
      *(undefined1 *)(param_1 + 0x964) = 2;
      *(undefined4 *)(param_1 + 0x950) = uVar9;
    }
    else if (*(char *)(param_1 + 0x94e) == '\0') {
      uVar13 = param_2 + 0x208c;
      uVar10 = uVar13;
      if ((*(ushort *)(param_1 + 0x95a) & 0x80) == 0) {
        sVar2 = *(short *)(param_2 + 0x104);
        bVar15 = true;
        if (sVar2 == 7) {
          uVar10 = (uint)*(byte *)(param_1 + 3);
        }
        if (sVar2 != 7 || uVar10 != 0xd) {
          uVar10 = (uint)*(byte *)(DAT_00294e78 + 0xe);
          bVar17 = uVar10 == 1 && sVar2 == 6;
          if (uVar10 == 1 && sVar2 == 6) {
            bVar17 = *(char *)(param_1 + 3) == '\x02';
          }
          if ((bVar17) && ((*(uint *)(*(int *)(param_2 + 0x20ac) + 0x1714) & 0x10) != 0))
          goto LAB_00294c7c;
        }
        else {
          uVar22 = FUN_00360084(uVar13,0xbc,1,0,2);
          uVar10 = (uint)((ulonglong)uVar22 >> 0x20);
          if (0 < (int)uVar22) {
LAB_00294c7c:
            bVar15 = false;
          }
        }
        if (bVar15) {
          *(undefined2 *)(iVar14 + 0x118) = 0x3c;
          FUN_003302a0(param_2,param_1);
          *(int *)(*(int *)(param_2 + 0x20ac) + 0x1718) = param_1;
          uVar10 = extraout_r1;
        }
      }
      *(undefined1 *)(param_1 + 0x94e) = 0x5a;
      sVar2 = *(short *)(param_2 + 0x104);
      bVar15 = true;
      if (sVar2 == 7) {
        uVar10 = (uint)*(byte *)(param_1 + 3);
      }
      if (sVar2 != 7 || uVar10 != 0xd) {
        bVar16 = *(char *)(iVar18 + 0xe) == '\x01';
        bVar17 = bVar16 && sVar2 == 6;
        if (bVar16 && sVar2 == 6) {
          bVar17 = *(char *)(param_1 + 3) == '\x02';
        }
        if ((bVar17) && ((*(uint *)(*(int *)(param_2 + 0x20ac) + 0x1714) & 0x10) != 0))
        goto LAB_00294d24;
      }
      else {
        iVar11 = FUN_00360084(uVar13,0xbc,1,0,2);
        if (0 < iVar11) {
LAB_00294d24:
          bVar15 = false;
        }
      }
      if (bVar15) {
        FUN_00375bcc(param_1,DAT_00294e7c);
      }
    }
  }
  cVar1 = *(char *)(param_1 + 0x94f);
  if ((((cVar1 == '\0') || (*(char *)(param_1 + 0x94f) = cVar1 + -1, cVar1 == '\x01')) &&
      (iVar11 = FUN_003306c4(param_1,iVar14), iVar11 <= DAT_00294e80)) &&
     (iVar11 = FUN_0036f18c(param_1,DAT_00294e84), iVar11 != 0)) {
    *(undefined2 *)(iVar14 + 0x118) = 0;
    iVar11 = (**(code **)(param_2 + 0x5ba0))(param_2,iVar14);
    if (iVar11 == 0) goto LAB_00294ef8;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_00373d40(param_1 + 0x1e0,8);
    piVar7 = DAT_00294e88;
    *(undefined1 *)(param_1 + 0x94c) = 0;
    *(undefined2 *)(param_1 + 0x954) = 0;
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x960) = (short)(int)(DAT_00294e8c / fVar20 + fVar6);
    *(undefined4 *)(param_1 + 0x6c) = uVar12;
    *(undefined1 *)(param_1 + 0x964) = 8;
    uVar12 = DAT_00294e90;
  }
  else {
    if (*(short *)(param_1 + 0x1c) < 1) goto LAB_00294ef8;
    if (*(int *)(param_1 + 0x124) == 0) {
      *(undefined1 *)(param_1 + 0x94d) = 0;
      goto LAB_00294ef8;
    }
    uVar9 = FUN_0036ae14(param_1 + 0x1e0,5);
    uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(fVar6,uVar12,uVar9,uVar21,param_1 + 0x1e0,5,1);
    *(undefined1 *)(param_1 + 0x964) = 3;
    *(undefined1 *)(param_1 + 0x94d) = 1;
    uVar12 = DAT_00294fa0;
  }
  *(undefined4 *)(param_1 + 0x950) = uVar12;
LAB_00294ef8:
  puVar8 = DAT_00294fa8;
  uVar12 = DAT_00294fa4;
  uVar21 = VectorSignedToFloat(*DAT_00294fa8,(byte)(in_fpscr >> 0x15) & 3);
  iVar11 = FUN_003736fc(uVar21,DAT_00294fa4,param_1 + 0x1e0);
  if (iVar11 == 0) {
    uVar21 = VectorSignedToFloat(puVar8[1],(byte)(in_fpscr >> 0x15) & 3);
    iVar11 = FUN_003736fc(uVar21,uVar12,param_1 + 0x1e0);
    if (iVar11 == 0) {
      uVar10 = *(uint *)(param_2 + 0x5bf4);
      if (((uVar10 & 0x5f) == 0) && (uVar10 != puVar8[5])) {
        puVar8[5] = uVar10;
        FUN_00375bcc(param_1,DAT_00294fb0);
        return;
      }
      return;
    }
  }
  FUN_00375bcc(param_1,DAT_00294fac);
  return;
}
