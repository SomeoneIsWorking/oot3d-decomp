// OoT3D decomp @ 002453e0  name=FUN_002453e0  size=476

void FUN_002453e0(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;

  FUN_003510b0(param_1,DAT_002455bc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc4);
  FUN_003532e8(param_1,0);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (param_1 != -0x204) {
    FUN_00342968();
  }
  *(undefined4 *)(param_1 + 0x21c) = 0;
  uVar8 = (uint)*(ushort *)(param_1 + 0x1c) << 0x16;
  *(byte *)(param_1 + 0x1c2) = (byte)(uVar8 >> 0x1c);
  uVar8 = (uint)*(char *)(DAT_002455c0 + (uVar8 >> 0x1c));
  if ((int)uVar8 < 0) {
    psVar3 = (short *)(DAT_002455c0 + 0x1c);
    iVar6 = 0;
    iVar4 = (int)*(short *)(param_2 + 0x104);
    do {
      iVar7 = (int)*psVar3;
      bVar10 = SBORROW4(iVar4,iVar7);
      iVar5 = iVar4 - iVar7;
      if (iVar4 != iVar7) {
        psVar3 = psVar3 + 2;
        bVar10 = SBORROW4(iVar6 + 1,0x11);
        iVar5 = iVar6 + -0x10;
        iVar6 = iVar6 + 1;
      }
    } while (iVar5 < 0 != bVar10);
    uVar8 = (uint)*(byte *)(psVar3 + 1);
  }
  else if (uVar8 == 6) {
    iVar4 = (int)*(short *)(param_2 + 0x104);
    iVar6 = 0;
    psVar3 = DAT_002455c4;
    do {
      iVar5 = (int)*psVar3;
      bVar10 = iVar4 != iVar5;
      if (bVar10) {
        iVar5 = (int)psVar3[1];
      }
      iVar7 = iVar4 - iVar5;
      bVar9 = SBORROW4(iVar4,iVar5);
      if (bVar10 && iVar4 != iVar5) {
        psVar3 = psVar3 + 3;
        bVar9 = SBORROW4(iVar6 + 1,6);
        iVar7 = iVar6 + -5;
        iVar6 = iVar6 + 1;
      }
    } while (iVar7 < 0 != bVar9);
    *(ushort *)(param_1 + 0x1c0) = (ushort)*(byte *)(psVar3 + 2);
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0xff;
  }
  cVar2 = FUN_00363c10(param_2 + 0x3a58,(int)*(short *)(DAT_002455c8 + uVar8 * 4));
  *(char *)(param_1 + 0x1c5) = cVar2;
  uVar1 = DAT_002455d0;
  if (-1 < cVar2) {
    *(undefined4 *)(param_1 + 0x1d0) = DAT_002455cc;
    *(undefined2 *)(param_1 + 0x1c8) = 0;
    *(char *)(param_1 + 0x1c3) = (char)uVar8;
    if (*(char *)(param_1 + 0x1c2) == '\v' || *(char *)(param_1 + 0x1c2) == '\x05') {
      iVar6 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
      if (iVar6 == 0) {
        *(undefined1 *)(param_1 + 0x1c6) = 0xf;
      }
    }
    else if (uVar8 == 4) {
      FUN_0037572c(DAT_002455d4,param_1);
      uVar1 = DAT_002455d8;
      *(undefined2 *)(param_1 + 0x1be) = 100;
      *(undefined4 *)(param_1 + 0x100) = uVar1;
      FUN_0037322c(DAT_002455dc,param_1);
      return;
    }
    FUN_0037322c(uVar1,param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
