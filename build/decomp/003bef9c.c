// OoT3D decomp @ 003bef9c  name=FUN_003bef9c  size=468

void FUN_003bef9c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 uVar10;

  iVar2 = DAT_003bf1e0;
  sVar1 = *(short *)(param_1 + 0x230);
  if ((*(byte *)(param_1 + 0x1d1) & 2) == 0) {
    if (0 < sVar1) {
      *(short *)(param_1 + 0x230) = sVar1 + -1;
    }
  }
  else {
    *(short *)(param_1 + 0x230) = sVar1 + 1;
    *(byte *)(param_1 + 0x1d1) = *(byte *)(param_1 + 0x1d1) & 0xfd;
    if ((*(uint *)(DAT_003bf1e4 + param_2) & 3) == 0) {
      uVar6 = *(uint *)(iVar2 + -0x20);
      uVar10 = VectorSignedToFloat((int)*(short *)(param_1 + 0x234),(byte)(in_fpscr >> 0x15) & 3);
      if ((uVar6 & 1) == 0) {
        iVar7 = FUN_003679b4(DAT_003bf1e8,uVar10,iVar2 + -0x20);
        puVar4 = DAT_003bf1f8;
        uVar3 = DAT_003bf1f4;
        uVar10 = DAT_003bf1f0;
        uVar6 = 0;
        if (iVar7 != 0) {
          *DAT_003bf1f8 = DAT_003bf1f0;
          puVar4[1] = uVar10;
          puVar4[2] = uVar3;
          uVar6 = iVar2 - 0x20;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0(uVar6);
    }
    FUN_00373264(param_1,DAT_003bf200);
  }
  sVar1 = *(short *)(param_1 + 0x230);
  if (0x28 < sVar1) {
    FUN_00375c10(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003bf204;
    iVar7 = 0;
    do {
      iVar9 = param_1 + iVar7 * 0x1c;
      FUN_0036df4c(iVar9 + 0x238,param_1 + 0x28);
      iVar8 = iVar7 + 1;
      *(undefined4 *)(iVar9 + 0x244) = *(undefined4 *)(iVar2 + iVar7 * 0x18 + 0xc);
      uVar10 = DAT_003bf208;
      iVar7 = iVar8;
    } while (iVar8 < 0xd);
    *(undefined2 *)(param_1 + 0x232) = 0;
    FUN_00375c44(param_2,param_1 + 0x28,100,uVar10);
    FUN_00371808(param_2,0xd70,0xffffff9d,param_1,0);
    return;
  }
  if (sVar1 < 8) {
    *(undefined2 *)(param_1 + 0x234) = 0;
  }
  else {
    if (sVar1 < 0x10) {
      uVar5 = 1;
    }
    else if (sVar1 < 0x18) {
      uVar5 = 2;
    }
    else if (sVar1 < 0x20) {
      uVar5 = 3;
    }
    else {
      uVar5 = 4;
    }
    *(undefined2 *)(param_1 + 0x234) = uVar5;
  }
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1c0);
  return;
}
