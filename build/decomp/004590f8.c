// OoT3D decomp @ 004590f8  name=FUN_004590f8  size=440

void FUN_004590f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int aiStack_128 [64];
  undefined4 local_28;
  
  iVar1 = DAT_004592b0;
  iVar8 = 0;
  iVar9 = 0;
  iVar10 = -1;
  local_28 = param_2;
  do {
    iVar7 = -1;
    do {
      iVar5 = *(short *)(iVar1 + 0x14) + iVar10;
      iVar6 = *(short *)(iVar1 + 0x16) + iVar7;
      if (iVar5 < 0 || iVar6 < 0) {
LAB_00459150:
        uVar2 = 0;
      }
      else {
        bVar11 = SBORROW4(iVar5,400);
        iVar3 = iVar5 + -400;
        if (iVar5 < 400) {
          bVar11 = SBORROW4(iVar6,0xf0);
          iVar3 = iVar6 + -0xf0;
        }
        if ((iVar3 < 0 == bVar11) || (*(int *)(iVar1 + 0x20) == 0)) goto LAB_00459150;
        FUN_00371738(aiStack_128,DAT_004592b4,0x100);
        if (((*DAT_004592b8 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_004592b8), iVar3 != 0)) {
          FUN_0036788c(DAT_004592bc);
        }
        if (*(char *)(DAT_004592bc + 0x75) == '\0') {
          iVar6 = DAT_004592c8 + iVar6 * -2;
          iVar3 = ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1d)) >> 3) +
                  ((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1d)) >> 3) * 0x3c;
          iVar6 = iVar6 % 8;
        }
        else {
          iVar4 = 0xef - iVar6;
          iVar3 = ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1d)) >> 3) +
                  ((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1d)) >> 3) * 0x3c;
          iVar6 = (0xef - iVar6) + (iVar4 / 8) * -8;
        }
        uVar2 = *(uint *)(*(int *)(iVar1 + 0x20) +
                         (aiStack_128[iVar6 + (iVar5 % 8) * 8] + iVar3 * 0x40) * 4) & 0xffffff;
      }
      if ((uVar2 != 0) && (iVar8 = iVar8 + 1, DAT_004592cc <= (int)uVar2)) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    iVar10 = iVar10 + 1;
    if (1 < iVar10) {
      if (iVar9 < iVar8 / 2 + 1) {
        *(undefined4 *)(iVar1 + 0x24) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x24) = 0xffffff;
      }
      FUN_0047c944(local_28);
      return;
    }
  } while( true );
}

