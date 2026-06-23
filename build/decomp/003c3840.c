// OoT3D decomp @ 003c3840  name=FUN_003c3840  size=52

void FUN_003c3840(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
  bool bVar10;
  
  uVar7 = *(uint *)(iRam003c3874 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 0x18 + 0xc);
  if (0 < (int)uVar7) {
    bVar10 = (uVar7 & 1) != 0;
    sVar2 = (short)DAT_00371004;
    sVar1 = (short)*(undefined4 *)(param_2 + 0x5bf4);
    psVar8 = (short *)(param_1 + 0xe5a);
    psVar9 = (short *)(param_1 + 0xe22);
    if (bVar10) {
      *(short *)(param_1 + 0xe24) = sVar1 * sVar2;
      *(short *)(param_1 + 0xe5c) = sVar1 * 0x940;
      psVar8 = (short *)(param_1 + 0xe5c);
      psVar9 = (short *)(param_1 + 0xe24);
    }
    uVar5 = (ushort)bVar10;
    iVar6 = (int)uVar7 >> 1;
    if (iVar6 != 0) {
      sVar4 = (short)DAT_00371008;
      do {
        iVar6 = iVar6 + -1;
        psVar9[1] = (sVar2 + uVar5 * 0x32) * sVar1;
        sVar3 = uVar5 * 0x32;
        psVar8[1] = (uVar5 * 0x32 + 0x940) * sVar1;
        psVar9 = psVar9 + 2;
        *psVar9 = (sVar4 + uVar5 * 0x32) * sVar1;
        uVar5 = uVar5 + 2;
        psVar8 = psVar8 + 2;
        *psVar8 = (sVar4 + 300 + sVar3) * sVar1;
      } while (iVar6 != 0);
    }
  }
  return;
}

