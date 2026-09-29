// OoT3D decomp @ 00213614  name=FUN_00213614  size=1684

void FUN_00213614(int param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  bool bVar13;
  uint in_fpscr;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  uVar1 = DAT_00213a68;
  if (*(short *)(param_1 + 0xa12) == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0xa30);
    bVar13 = uVar4 == 0;
    if (bVar13) {
      uVar4 = *(uint *)(param_1 + 0x888);
    }
    if ((bVar13 && uVar4 == DAT_00213a68) || (DAT_00213a6c < *(int *)(param_1 + 0x1108)))
    goto LAB_00213668;
  }
  else {
LAB_00213668:
    iVar8 = 8;
    iVar10 = *(int *)(param_1 + 0xb3c) + -0x3a;
    do {
      iVar8 = iVar8 + -1;
      *(byte *)(iVar10 + 0x50) = *(byte *)(iVar10 + 0x50) & 0xfd;
      *(byte *)(iVar10 + 0xa0) = *(byte *)(iVar10 + 0xa0) & 0xfd;
      iVar10 = iVar10 + 0xa0;
    } while (iVar8 != 0);
  }
  iVar8 = DAT_00213a7c;
  iVar10 = DAT_00213a78;
  uVar6 = DAT_00213a74;
  uVar11 = DAT_00213a70;
  if (*(char *)(param_1 + 0xa0f) != '\0') {
    if (*(int *)(param_1 + 0x888) != DAT_00213a7c) {
      bVar3 = *(byte *)(*(int *)(param_1 + 0xb3c) + 0x16);
      if ((bVar3 & 2) != 0) {
        *(byte *)(*(int *)(param_1 + 0xb3c) + 0x16) = bVar3 & 0xfd;
        iVar9 = *(int *)(param_1 + 0xb3c);
        puVar12 = *(uint **)(iVar9 + 0x24);
        uVar4 = (uint)*(short *)(iVar9 + 0x12);
        local_38 = VectorSignedToFloat((int)*(short *)(iVar9 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
        local_34 = VectorSignedToFloat((int)*(short *)(iVar9 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        local_30 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        bVar13 = (*puVar12 & 0x2000) == 0;
        if (!bVar13) {
          uVar4 = *(uint *)(param_1 + 0x888);
        }
        if (bVar13 || uVar4 == uVar1) {
          if ((*(uint *)(param_1 + 0x888) == uVar1) && ((*puVar12 & DAT_00213a98) != 0)) {
            *(undefined2 *)(param_1 + 0xa12) = 0x5a;
            uVar5 = DAT_00213a8c;
            *(undefined2 *)(param_1 + 0xa3e) = 8;
            FUN_00375bcc(param_1,uVar5);
            FUN_0048961c(DAT_00213a90);
            cVar2 = *(char *)(param_1 + 0xb7) + -2;
            *(char *)(param_1 + 0xb7) = cVar2;
            bVar13 = cVar2 == '\x14';
            if (cVar2 < '\x15') {
              bVar13 = *(char *)(param_1 + 0xa30) == '\0';
            }
            if (bVar13) {
              FUN_00374a58(uVar11,param_1 + 0x228,7);
              uVar6 = FUN_0036ae14(param_1 + 0x228,7);
              uVar11 = DAT_00213a9c;
              uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
              *(undefined4 *)(param_1 + 0x88c) = uVar6;
              *(uint *)(param_1 + 0x888) = uVar1;
              *(undefined2 *)(param_1 + 0x8a4) = 0;
              *(undefined2 *)(param_1 + 0xa98) = 0;
              FUN_00375bcc(param_1,uVar11);
              *(undefined1 *)(param_1 + 0xa32) = 0;
            }
            else if (cVar2 < '\x01') {
              FUN_00374a58(uVar11,param_1 + 0x228,7);
              uVar6 = FUN_0036ae14(param_1 + 0x228,7);
              uVar11 = DAT_00213a9c;
              uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
              *(undefined4 *)(param_1 + 0x88c) = uVar6;
              *(uint *)(iVar10 + 0x3d0) = *(uint *)(iVar10 + 0x3d0) | 4;
              *(undefined4 *)(param_1 + 0x888) = DAT_00213aa0;
              *(undefined2 *)(param_1 + 0x8a4) = 0;
              *(undefined2 *)(param_1 + 0xa98) = 0;
              FUN_00375bcc(param_1,uVar11);
              *(undefined1 *)(param_1 + 0xa10) = 4;
            }
            else {
              FUN_00374a58(uVar6,param_1 + 0x228,0xc);
              uVar6 = FUN_0036ae14(param_1 + 0x228,0xc);
              uVar11 = DAT_00213aa4;
              uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
              *(undefined4 *)(param_1 + 0x88c) = uVar6;
              *(undefined4 *)(param_1 + 0x888) = uVar11;
            }
          }
          else if (*(uint *)(param_1 + 0x888) != uVar1) {
            FUN_00370350(DAT_00213aa8,param_1 + 0x228,0xf);
            *(int *)(param_1 + 0x888) = iVar8;
            *(undefined2 *)(param_1 + 0x89a) = 0x3c;
            FUN_00375bcc(param_1,DAT_00213aac);
            FUN_00365560(param_2,*puVar12,0,&local_38,0);
            FUN_003757a8(param_2,&local_38,*(undefined1 *)(DAT_00213a94 + 1));
          }
        }
        else {
          FUN_00370350(DAT_00213a80,param_1 + 0x228,0x10);
          uVar5 = FUN_0036ae14(param_1 + 0x228,0x10);
          uVar6 = DAT_00213a88;
          uVar11 = DAT_00213a84;
          uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x88c) = uVar5;
          *(undefined2 *)(param_1 + 0x8a4) = 0;
          *(undefined4 *)(param_1 + 0x888) = uVar11;
          FUN_00375bcc(param_1,uVar6);
          FUN_00375bcc(param_1,DAT_00213a8c);
          FUN_0048961c(DAT_00213a90);
          FUN_00365560(param_2,*puVar12,0,&local_38,(int)*(short *)(DAT_00213a94 + 6));
        }
      }
    }
    goto LAB_00213bec;
  }
  bVar3 = *(byte *)(*(int *)(param_1 + 0xb3c) + 0x4c6);
  if ((bVar3 & 2) == 0) goto LAB_00213bec;
  *(byte *)(*(int *)(param_1 + 0xb3c) + 0x4c6) = bVar3 & 0xfd;
  uVar5 = DAT_00213a8c;
  iVar8 = *(int *)(param_1 + 0xb3c);
  puVar12 = *(uint **)(iVar8 + 0x4d4);
  local_38 = VectorSignedToFloat((int)*(short *)(iVar8 + 0x4be),(byte)(in_fpscr >> 0x15) & 3);
  local_34 = VectorSignedToFloat((int)*(short *)(iVar8 + 0x4c0),(byte)(in_fpscr >> 0x15) & 3);
  local_30 = VectorSignedToFloat((int)*(short *)(iVar8 + 0x4c2),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined2 *)(param_1 + 0xa12) = 0x5a;
  *(undefined2 *)(param_1 + 0xa40) = 0x4b;
  *(undefined2 *)(param_1 + 0xa3e) = 8;
  FUN_00375bcc(param_1,uVar5);
  FUN_00375bcc(param_1,DAT_00213ab0);
  FUN_0048961c(DAT_00213a90);
  if ((DAT_00213a98 & *puVar12) == 0) {
    bVar3 = 1;
  }
  else {
    bVar3 = 2;
    if ((*puVar12 & 0x8000000) != 0) {
      bVar3 = 4;
    }
  }
  bVar13 = true;
  cVar2 = *(char *)(param_1 + 0xb7) - bVar3;
  *(char *)(param_1 + 0xb7) = cVar2;
  if (cVar2 < '\x15') {
    if (*(char *)(param_1 + 0xa30) != '\0') {
      if (cVar2 < '\x01') {
        if (1 < bVar3) {
          FUN_00374a58(uVar11,param_1 + 0x228,7);
          uVar6 = FUN_0036ae14(param_1 + 0x228,7);
          uVar11 = DAT_00213a9c;
          uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x88c) = uVar6;
          *(uint *)(iVar10 + 0x3d0) = *(uint *)(iVar10 + 0x3d0) | 4;
          *(undefined4 *)(param_1 + 0x888) = DAT_00213aa0;
          *(undefined2 *)(param_1 + 0x8a4) = 0;
          *(undefined2 *)(param_1 + 0xa98) = 0;
          FUN_00375bcc(param_1,uVar11);
          *(undefined1 *)(param_1 + 0xa10) = 4;
          goto LAB_00213b88;
        }
        bVar13 = false;
        *(undefined1 *)(param_1 + 0xb7) = 1;
      }
      goto LAB_00213b50;
    }
    FUN_00374a58(uVar11,param_1 + 0x228,7);
    uVar11 = FUN_0036ae14(param_1 + 0x228,7);
    uVar11 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x88c) = uVar11;
    *(uint *)(param_1 + 0x888) = uVar1;
    *(undefined2 *)(param_1 + 0x8a4) = 0;
    uVar11 = DAT_00213a9c;
    *(undefined2 *)(param_1 + 0xa98) = 0;
    FUN_00375bcc(param_1,uVar11);
    *(undefined1 *)(param_1 + 0xa32) = 0;
  }
  else {
LAB_00213b50:
    FUN_00374a58(uVar6,param_1 + 0x228,0xc);
    uVar6 = FUN_0036ae14(param_1 + 0x228,0xc);
    uVar11 = DAT_00213aa4;
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x88c) = uVar6;
    *(undefined4 *)(param_1 + 0x888) = uVar11;
    if (!bVar13) {
      FUN_003741e4(param_2,*puVar12,1,&local_38,0);
      *(undefined2 *)(param_1 + 0xa3e) = 0;
      goto LAB_00213bec;
    }
  }
LAB_00213b88:
  FUN_00375ed8(param_1,0x400000,0xff,0,10);
  FUN_003741e4(param_2,*puVar12,0,&local_38,0);
LAB_00213bec:
  iVar10 = *(int *)(param_1 + 0xb3c);
  iVar8 = 0;
  while ((*(byte *)(iVar10 + iVar8 * 0x50 + 0x16) & 2) == 0) {
    iVar8 = (int)(short)((short)iVar8 + 1);
    if (0xe < iVar8) {
      return;
    }
  }
  iVar9 = iVar8 * 0x50 + 0x16;
  *(byte *)(iVar10 + iVar9) = *(byte *)(iVar10 + iVar9) & 0xfd;
  uVar11 = 2;
  psVar7 = (short *)(*(int *)(param_1 + 0xb3c) + iVar8 * 0x50 + 0xe);
  if (iVar8 == 0) {
    uVar11 = 1;
  }
  local_38 = VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  local_34 = VectorSignedToFloat((int)psVar7[1],(byte)(in_fpscr >> 0x15) & 3);
  local_30 = VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
  puVar12 = *(uint **)(*(int *)(param_1 + 0xb3c) + iVar8 * 0x50 + 0x24);
  FUN_003741e4(param_2,*puVar12,uVar11,&local_38,0);
  if ((*puVar12 & 5) == 0) {
    if (iVar8 != 0) {
      FUN_0033af2c(param_2,&local_38,*(undefined1 *)(DAT_00213a94 + 2));
      return;
    }
    FUN_00375f90();
  }
  return;
}
