// OoT3D decomp @ 0024a640  name=FUN_0024a640  size=1460

/* WARNING: Removing unreachable block (ram,0x0024a934) */
/* WARNING: Removing unreachable block (ram,0x0024a91c) */
/* WARNING: Removing unreachable block (ram,0x0024a94c) */

void FUN_0024a640(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;

  uVar4 = DAT_0024a9c4;
  uVar3 = DAT_0024a9c0;
  uVar2 = DAT_0024a9bc;
  iVar11 = DAT_0024a9b8;
  if ((*(byte *)(param_1 + 0x74c) & 2) != 0) {
    *(byte *)(param_1 + 0x74c) = *(byte *)(param_1 + 0x74c) & 0xfd;
    FUN_00375bcc(param_1,DAT_0024a9c8);
    if (*(char *)(param_1 + 0x251) != '\0') {
      *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 2;
      *(undefined1 *)(*(int *)(param_1 + 0x758) + 4) = 0;
      *(undefined1 *)(param_1 + 0x250) = 0;
      *(undefined1 *)(param_1 + 0x251) = 0;
      *(undefined1 *)(param_1 + 0x123) = 0x12;
    }
    if (*(int *)(param_1 + 0x24c) != iVar11) {
      uVar9 = FUN_0036ae14(param_1 + 0x1c8,0);
      uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar4,uVar3,uVar9,uVar2,param_1 + 0x1c8,0);
      *(undefined4 *)(param_1 + 0x6c) = DAT_0024a9cc;
      *(undefined2 *)(param_1 + 0x34) = 0x7000;
      iVar5 = DAT_0024a9d0;
      *(undefined2 *)(param_1 + 0x252) = 0x1b;
      *(int *)(param_1 + 0x24c) = iVar5;
    }
  }
  iVar5 = DAT_0024a9d4;
  if ((*(byte *)(param_1 + 0x74d) & 2) == 0) goto LAB_0024ab38;
  *(byte *)(param_1 + 0x74d) = *(byte *)(param_1 + 0x74d) & 0xfd;
  FUN_00375fd0(param_1,*(undefined4 *)(param_1 + 0x758),1);
  cVar1 = *(char *)(param_1 + 0xb9);
  bVar12 = cVar1 == '\0';
  if (bVar12) {
    cVar1 = *(char *)(param_1 + 0xb8);
  }
  if (bVar12 && cVar1 == '\0') goto LAB_0024ab38;
  iVar10 = FUN_00375eb8(param_1);
  if (iVar10 == 0) {
    FUN_00375b70(param_2,param_1);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  uVar7 = DAT_0024a9e0;
  uVar6 = DAT_0024a9dc;
  uVar9 = DAT_0024a9d8;
  uVar8 = (ushort)*(byte *)(param_1 + 0xb9);
  if (uVar8 == 2) {
    if (*(short *)(param_1 + 0x1c) != 4) {
      if (*(char *)(param_1 + 0x251) == '\0') {
        *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -2;
        iVar10 = DAT_0024a9e4;
        *(undefined1 *)(*(int *)(param_1 + 0x758) + 4) = 1;
        *(undefined1 *)(param_1 + 0x250) = 1;
        *(undefined1 *)(param_1 + 0x251) = 1;
        *(undefined1 *)(param_1 + 0x123) = 0x11;
        if (*(int *)(param_1 + 0x24c) == iVar10) {
          FUN_0036d878(param_1);
        }
      }
      goto LAB_0024ab38;
    }
    *(undefined1 *)(param_1 + 0xb7) = 0;
    FUN_00375b70(param_2,param_1);
    iVar10 = 0;
    do {
      FUN_003580ec(param_2,param_1,param_1 + 0x28,0x28,0,0,(int)(short)iVar10,1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
LAB_0024a7f0:
    *(undefined1 *)(param_1 + 0x250) = 0;
  }
  else {
    if (uVar8 == 3) {
      if (*(short *)(param_1 + 0x1c) != 4) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        *(undefined1 *)(param_1 + 0x250) = 0;
        FUN_00375ed8(param_1,0,0xff,0,0xff);
        FUN_00375bcc(param_1,DAT_0024a9e8);
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      *(undefined2 *)(param_1 + 0x252) = 0x3c;
      *(undefined4 *)(param_1 + 100) = uVar3;
      FUN_00375c08(uVar6,uVar3,uVar3,uVar9,param_1 + 0x1c8,0,1);
      FUN_00375bcc(param_1,DAT_0024a9e8);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      FUN_00375ed8(param_1,0x400000,0xff,0,0x28);
      *(undefined4 *)(param_1 + 0x24c) = uVar7;
      goto LAB_0024ab38;
    }
    if (uVar8 == 1) {
      if (*(int *)(param_1 + 0x24c) != iVar5) {
        *(undefined2 *)(param_1 + 0x252) = 0x78;
        FUN_00375ed8(param_1,0,0xff,0,0x50);
        *(undefined4 *)(param_1 + 100) = uVar3;
        uVar9 = FUN_0036ae14(param_1 + 0x1c8,0);
        uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(DAT_0024ac94,uVar3,uVar9,uVar2,param_1 + 0x1c8,0);
        uVar2 = DAT_0024ac98;
        *(undefined1 *)(param_1 + 0x250) = 0;
        FUN_00375bcc(param_1,uVar2);
        *(int *)(param_1 + 0x24c) = iVar5;
      }
      goto LAB_0024ab38;
    }
    bVar12 = uVar8 == 0xf;
    if (bVar12) {
      uVar8 = *(ushort *)(param_1 + 0x1c);
    }
    if (bVar12 && uVar8 == 4) {
      iVar10 = 0;
      do {
        FUN_003580ec(param_2,param_1,param_1 + 0x28,0x28,0,0,(int)(short)iVar10,1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 3);
      goto LAB_0024a7f0;
    }
  }
  *(undefined2 *)(DAT_0024ac9c + param_1) = 0x3c;
  *(undefined4 *)(param_1 + 100) = uVar3;
  FUN_00375c08(uVar6,uVar3,uVar3,uVar9,param_1 + 0x1c8,0,1);
  FUN_00375bcc(param_1,DAT_0024a9e8);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  FUN_00375ed8(param_1,0x400000,0xff,0,0x28);
  *(undefined4 *)(param_1 + 0x24c) = uVar7;
LAB_0024ab38:
  (**(code **)(param_1 + 0x24c))(param_1,param_2);
  if ((*(uint *)(param_1 + 4) & 0x8000) == 0) {
    bVar12 = *(char *)(param_1 + 0xb7) != '\0';
    iVar10 = 0;
    if (bVar12) {
      iVar10 = *(int *)(param_1 + 0x24c);
    }
    if (bVar12 && iVar10 != iVar5) {
      if (iVar10 != DAT_0024a9d0) {
        *(short *)(param_1 + 0x34) = (short)DAT_0024aca0 - *(short *)(param_1 + 0xbc);
      }
      FUN_0033bd9c(param_1);
    }
    else {
      FUN_00376864(param_1);
    }
  }
  FUN_00376340(DAT_0024aca8,DAT_0024aca8,DAT_0024aca4,param_2,param_1,7);
  iVar5 = DAT_0024acac;
  *(undefined4 *)(*(int *)(param_1 + 0x758) + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(*(int *)(param_1 + 0x758) + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(*(int *)(param_1 + 0x758) + 0x40) = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x24c) == iVar5 || *(int *)(param_1 + 0x24c) == iVar11) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x73c);
  }
  if (*(char *)(param_1 + 0xb7) != '\0') {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x73c);
    uVar2 = DAT_0024acb0;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    iVar11 = FUN_0036e5e0(uVar2,uVar4,param_1 + 0x1c8);
    if (iVar11 != 0) {
      FUN_00375bcc(param_1,DAT_0024acb4);
    }
  }
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x73c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  return;
}
