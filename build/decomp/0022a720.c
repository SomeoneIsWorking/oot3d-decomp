// OoT3D decomp @ 0022a720  name=FUN_0022a720  size=744

void FUN_0022a720(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;

  iVar10 = 0x2a;
  *(ushort *)(param_1 + 0x1a8) = *(ushort *)(param_1 + 0x1c) >> 0xc;
  *(ushort *)(param_1 + 0x1ac) = *(ushort *)(param_1 + 0x1c) & 0x3f;
  *(undefined2 *)(param_1 + 0x1b4) = 0x28;
  puVar6 = (undefined4 *)(param_1 + 0x90c);
  iVar9 = 0;
  puVar7 = puVar6;
  do {
    iVar1 = iVar9 * 4;
    *puVar7 = 0xffffffff;
    iVar10 = iVar10 + -1;
    iVar9 = iVar9 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x9b4) = 0;
    uVar4 = DAT_0022aa24;
    uVar3 = DAT_0022aa0c;
    uVar8 = DAT_0022aa08;
    puVar7 = puVar7 + 1;
  } while (iVar10 != 0);
  sVar2 = *(short *)(param_1 + 0x1a8);
  if (sVar2 == 0) {
    *DAT_0022aa10 = 0;
    *(ushort *)(param_1 + 0x1aa) = (ushort)(((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x1a);
    FUN_00352ee0(param_1,param_2,0x2a,param_1 + 0x9b4,puVar6);
    iVar9 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1ac));
    uVar8 = DAT_0022aa14;
    if (iVar9 != 0) {
LAB_0022a8ac:
      FUN_00374428(param_1);
      return;
    }
  }
  else if (sVar2 == 1) {
    *(undefined2 *)(param_1 + 0x1b0) = 5;
    *(undefined2 *)(param_1 + 0x1b4) = 0x14;
    FUN_00353dd0(param_2,param_1 + 0x1d4);
    FUN_00353d24(param_2,param_1 + 0x1d4,param_1,DAT_0022aa18);
    *(undefined4 *)(param_1 + 0xc4) = uVar8;
    *(undefined4 *)(param_1 + 0x140) = uVar3;
    *(undefined4 *)(param_1 + 0x910) = 0x41;
    FUN_00352ee0(param_1,param_2,0x2a,param_1 + 0x9b4,puVar6);
    iVar9 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1ac));
    if (iVar9 != 0) goto LAB_0022a8ac;
    FUN_0037572c(DAT_0022aa1c,param_1);
    uVar8 = DAT_0022aa20;
  }
  else if (sVar2 == 2) {
    *(undefined4 *)(param_1 + 0x90c) = 1;
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    fVar11 = (float)FUN_00371e50(DAT_0022aa28);
    *(short *)(param_1 + 0x1b0) = (short)(int)fVar11;
    FUN_00353dd0(param_2,param_1 + 0x1d4);
    FUN_00353d24(param_2,param_1 + 0x1d4,param_1,DAT_0022aa18);
    uVar4 = DAT_0022aa34;
    uVar3 = DAT_0022aa30;
    uVar8 = DAT_0022aa2c;
    *(undefined4 *)(param_1 + 0x54) = DAT_0022aa2c;
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = uVar8;
    *(undefined4 *)(param_1 + 500) = uVar4;
    *(undefined2 *)(param_1 + 0x1b6) = 300;
    cVar5 = FUN_00363c10(param_2 + 0x3a58);
    *(char *)(param_1 + 0x1d0) = cVar5;
    if (cVar5 < '\0') {
      FUN_00374428(param_1);
    }
    uVar8 = DAT_0022aa44;
    *(undefined4 *)(param_1 + 0x214) = DAT_0022aa38;
    *(undefined4 *)(param_1 + 0x218) = DAT_0022aa3c;
    *(undefined4 *)(param_1 + 0x21c) = DAT_0022aa40;
  }
  else {
    if (sVar2 != 3) {
      return;
    }
    *(undefined4 *)(param_1 + 0x910) = 0x41;
    if (0 < (short)*(ushort *)(param_1 + 0x1b4)) {
      puVar7 = (undefined4 *)(param_1 + 0x910);
      if ((*(ushort *)(param_1 + 0x1b4) & 1) != 0) {
        puVar7 = (undefined4 *)(param_1 + 0x914);
        *puVar7 = 0x41;
      }
      for (iVar9 = (int)*(short *)(param_1 + 0x1b4) >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar7[1] = 0x41;
        puVar7 = puVar7 + 2;
        *puVar7 = 0x41;
      }
    }
    FUN_00352ee0(param_1,param_2,0x2a,param_1 + 0x9b4,puVar6);
    *(undefined4 *)(param_1 + 0xc4) = uVar8;
    FUN_0037572c(DAT_0022aa48,param_1);
    FUN_00353dd0(param_2,param_1 + 0x1d4);
    FUN_00353d24(param_2,param_1 + 0x1d4,param_1,DAT_0022aa18);
    uVar8 = DAT_0022aa4c;
    *(undefined4 *)(param_1 + 0x140) = uVar3;
    *(undefined4 *)(param_1 + 0x214) = uVar8;
    uVar8 = DAT_0022aa58;
    *(undefined4 *)(param_1 + 0x218) = DAT_0022aa50;
    *(undefined4 *)(param_1 + 0x21c) = DAT_0022aa54;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar8;
  return;
}
