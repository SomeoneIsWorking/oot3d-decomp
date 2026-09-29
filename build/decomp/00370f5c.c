// OoT3D decomp @ 00370f5c  name=FUN_00370f5c  size=168

void FUN_00370f5c(int param_1,short *param_2,short *param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  bool bVar9;

  if (0 < (int)param_4) {
    bVar9 = (param_4 & 1) != 0;
    sVar2 = (short)DAT_00371004;
    sVar1 = (short)*(undefined4 *)(param_1 + 0x5bf4);
    psVar7 = param_3 + -1;
    psVar8 = param_2 + -1;
    if (bVar9) {
      *param_2 = sVar1 * sVar2;
      *param_3 = sVar1 * 0x940;
      psVar7 = param_3;
      psVar8 = param_2;
    }
    uVar5 = (ushort)bVar9;
    iVar6 = (int)param_4 >> 1;
    if (iVar6 != 0) {
      sVar4 = (short)DAT_00371008;
      do {
        iVar6 = iVar6 + -1;
        psVar8[1] = (sVar2 + uVar5 * 0x32) * sVar1;
        sVar3 = uVar5 * 0x32;
        psVar7[1] = (uVar5 * 0x32 + 0x940) * sVar1;
        psVar8 = psVar8 + 2;
        *psVar8 = (sVar4 + uVar5 * 0x32) * sVar1;
        uVar5 = uVar5 + 2;
        psVar7 = psVar7 + 2;
        *psVar7 = (sVar4 + 300 + sVar3) * sVar1;
      } while (iVar6 != 0);
    }
  }
  return;
}
