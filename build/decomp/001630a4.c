// OoT3D decomp @ 001630a4  name=FUN_001630a4  size=800

void FUN_001630a4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int extraout_r1;
  int extraout_r1_00;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376864(param_1);
  uVar10 = DAT_001633fc;
  uVar9 = DAT_001633f8;
  uVar8 = DAT_001633f4;
  uVar12 = DAT_001633f0;
  iVar7 = DAT_001633e4;
  iVar6 = DAT_001633d4;
  iVar15 = DAT_001633d0;
  iVar5 = DAT_001633cc;
  uVar4 = DAT_001633c8;
  uVar3 = DAT_001633c4;
  uVar2 = DAT_001633c0;
  iVar14 = DAT_001633bc;
  iVar11 = *(int *)(param_1 + 0x498);
  bVar16 = iVar11 != DAT_001633b8;
  iVar1 = DAT_001633b8;
  if (bVar16) {
    iVar1 = DAT_001633d8;
  }
  bVar17 = iVar11 != iVar1;
  if (bVar16 && bVar17) {
    iVar1 = DAT_001633dc;
  }
  iVar13 = iVar1;
  if ((bVar16 && bVar17) && iVar11 != iVar1) {
    iVar13 = DAT_001633e0;
  }
  if (((bVar16 && bVar17) && iVar11 != iVar1) && iVar11 != iVar13) {
    if (iVar11 != DAT_001633e4) {
      iVar13 = DAT_001633e8;
    }
    if ((iVar11 != DAT_001633e4 && iVar11 != iVar13) && iVar11 != DAT_001633bc) {
      if (*(char *)(DAT_001633ec + param_2) == '\0') {
        if ((*(byte *)(param_1 + 0x4ad) & 2) != 0) {
          *(byte *)(param_1 + 0x4ad) = *(byte *)(param_1 + 0x4ad) & 0xfd;
          if (*(int *)(param_1 + 0x498) == iVar15 || *(int *)(param_1 + 0x498) == iVar6) {
            *(undefined4 *)(param_1 + 200) = uVar12;
          }
          if (*(char *)(param_1 + 0xb9) == '\0') {
            if (*(char *)(param_1 + 0xb8) != '\0') {
              FUN_00375b70(param_2,param_1);
              *(undefined2 *)(param_1 + 0x514) = 2;
              *(undefined4 *)(param_1 + 0x498) = DAT_00163400;
            }
          }
          else if ((*(char *)(param_1 + 0xb9) == '\x01') &&
                  (*(int *)(param_1 + 0x498) != DAT_00163404 && *(int *)(param_1 + 0x498) != iVar5))
          {
            FUN_00375bcc(param_1,DAT_00163408);
            *(undefined2 *)(param_1 + 0x512) = 0xb4;
            FUN_00375ed8(param_1,0,200,0,0x78);
            uVar12 = FUN_0036ae14(param_1 + 0x1a4,3);
            uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
            FUN_00375c08(uVar9,uVar2,uVar12,uVar8,param_1 + 0x1a4,3,2);
            *(undefined4 *)(param_1 + 0x6c) = uVar2;
            *(undefined4 *)(param_1 + 0x60) = uVar2;
            *(undefined4 *)(param_1 + 0x68) = uVar2;
            *(undefined4 *)(param_1 + 0x70) = uVar3;
            if (*(short *)(param_1 + 0x510) == 0) {
              *(undefined4 *)(param_1 + 100) = uVar4;
              *(undefined2 *)(param_1 + 0x510) = 3;
            }
            *(int *)(param_1 + 0x498) = iVar5;
          }
        }
      }
      else if (iVar11 != DAT_001633d0) {
        if (iVar11 == DAT_001633d4) {
          *(undefined4 *)(param_1 + 200) = DAT_001633f0;
        }
        FUN_00375bcc(param_1,uVar10);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        uVar12 = FUN_0036ae14(param_1 + 0x1a4,3);
        uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar9,uVar2,uVar12,uVar8,param_1 + 0x1a4,3,2);
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        *(undefined4 *)(param_1 + 0x60) = uVar2;
        *(undefined4 *)(param_1 + 0x68) = uVar2;
        *(undefined4 *)(param_1 + 0x70) = uVar3;
        if (*(short *)(param_1 + 0x510) == 0) {
          *(undefined4 *)(param_1 + 100) = uVar4;
          *(undefined2 *)(param_1 + 0x510) = 3;
        }
        *(int *)(param_1 + 0x498) = iVar7;
      }
    }
  }
  if (*(int *)(param_1 + 0x498) == iVar15) {
    *(undefined4 *)(param_1 + 0x70) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    FUN_00376340(*(undefined4 *)(param_1 + 0x4dc),*(undefined4 *)(param_1 + 0x4e0),uVar2,param_2,
                 param_1,5);
  }
  (**(code **)(param_1 + 0x498))(param_1,param_2);
  FUN_0037322c(uVar4,param_1);
  iVar13 = param_1 + 0x49c;
  FUN_0037632c(param_1);
  iVar7 = DAT_00163410;
  iVar1 = DAT_0016340c;
  iVar11 = *(int *)(param_1 + 0x498);
  if (iVar11 != iVar15 && iVar11 != iVar14) {
    iVar15 = param_2 + 0x5c78;
    iVar14 = extraout_r1;
    if ((iVar11 == iVar6 || iVar11 == DAT_0016340c) || iVar11 == DAT_00163410) {
      FUN_003761f0(param_2,iVar15,iVar13);
      iVar14 = extraout_r1_00;
    }
    iVar11 = *(int *)(param_1 + 0x498);
    if ((iVar11 != iVar6 && iVar11 != iVar1) && iVar11 != iVar5) {
      iVar14 = DAT_00163404;
    }
    if ((((iVar11 == iVar6 || iVar11 == iVar1) || iVar11 == iVar5) || iVar11 == iVar14) ||
        iVar11 == iVar7) {
      FUN_00376168(param_2,iVar15,iVar13);
    }
    FUN_003762a4(param_2,iVar15,iVar13);
    return;
  }
  return;
}
