// OoT3D decomp @ 0042a540  name=FUN_0042a540  size=580

void FUN_0042a540(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  int local_5c;
  undefined1 auStack_58 [48];

  bVar9 = *(char *)(param_1 + 0xc) != '\0';
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0xd);
  }
  if (bVar9 && cVar1 != '\0') {
    iVar8 = 0;
    do {
      iVar6 = 0;
      do {
        iVar7 = *(int *)(param_1 + iVar8 * 0x400 + iVar6 * 4 + 0xa18);
        if (iVar7 != 0) {
          *(bool *)(iVar7 + 0x6c) = *(int *)(iVar7 + 0xc) != 0;
        }
        uVar2 = DAT_0042a788;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x100);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    if (((*DAT_0042a784 & 1) == 0) &&
       (iVar8 = FUN_003679b4(DAT_0042a784), puVar3 = DAT_0042a790, uVar11 = DAT_0042a78c, iVar8 != 0
       )) {
      *DAT_0042a790 = DAT_0042a78c;
      puVar3[1] = uVar2;
      puVar3[2] = uVar2;
      puVar3[3] = uVar2;
      puVar3[4] = uVar2;
      puVar3[5] = uVar11;
      puVar3[6] = uVar2;
      puVar3[7] = uVar2;
      puVar3[8] = uVar2;
      puVar3[9] = uVar2;
      puVar3[10] = uVar11;
      puVar3[0xb] = uVar2;
    }
    FUN_00372224(auStack_58,DAT_0042a790);
    iVar8 = FUN_00313b60();
    FUN_00438060(&local_5c,iVar8 + 0x430);
    if (local_5c == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = FUN_0044d438();
    }
    FUN_0030b13c(&local_5c);
    fVar5 = DAT_0042a79c;
    fVar4 = DAT_0042a798;
    if (iVar8 < 0) {
      *(undefined4 *)(param_1 + 0x1c44) = 0xffffffff;
    }
    else {
      iVar6 = 0;
      fVar10 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1c44),(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat(iVar8 - (*(int *)(param_1 + 0x1c44) + 0x444),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(int *)(param_1 + 0x1c44) =
           (int)(fVar10 + fVar12 * DAT_0042a794 + *(float *)(param_1 + 0x1c40));
      do {
        iVar8 = 0;
        do {
          iVar7 = *(int *)(param_1 + iVar6 * 0x400 + iVar8 * 4 + 0xa18);
          if (iVar7 != 0) {
            if (*(int *)(iVar7 + 0xc) != 0) {
              fVar10 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1c44) -
                                                  *(int *)(param_1 + (iVar8 + iVar6 * 0x100) * 4 +
                                                          0x1440),(byte)(in_fpscr >> 0x15) & 3);
              uVar11 = VectorSignedToFloat((int)(fVar10 * fVar4 * fVar5),
                                           (byte)(in_fpscr >> 0x15) & 3);
              *(undefined4 *)(iVar7 + 0x18) = uVar11;
            }
            FUN_002f2c88(uVar2,iVar7,auStack_58);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x100);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
    }
  }
  return;
}
