// OoT3D decomp @ 003438a4  name=FUN_003438a4  size=1568

/* WARNING: Removing unreachable block (ram,0x00340c00) */
/* WARNING: Removing unreachable block (ram,0x00340c18) */
/* WARNING: Removing unreachable block (ram,0x00340c24) */
/* WARNING: Removing unreachable block (ram,0x00340c30) */
/* WARNING: Removing unreachable block (ram,0x00340c3c) */
/* WARNING: Removing unreachable block (ram,0x00340c6c) */
/* WARNING: Removing unreachable block (ram,0x00340c48) */
/* WARNING: Removing unreachable block (ram,0x00340c54) */
/* WARNING: Removing unreachable block (ram,0x00340c5c) */
/* WARNING: Removing unreachable block (ram,0x00340c74) */
/* WARNING: Removing unreachable block (ram,0x00340c84) */
/* WARNING: Removing unreachable block (ram,0x00340c90) */
/* WARNING: Removing unreachable block (ram,0x00340c98) */
/* WARNING: Removing unreachable block (ram,0x00340c9c) */
/* WARNING: Removing unreachable block (ram,0x00340ca0) */
/* WARNING: Removing unreachable block (ram,0x00340ca4) */
/* WARNING: Removing unreachable block (ram,0x00340cac) */
/* WARNING: Removing unreachable block (ram,0x00340cb4) */
/* WARNING: Removing unreachable block (ram,0x00340cb8) */
/* WARNING: Removing unreachable block (ram,0x00340cc0) */
/* WARNING: Removing unreachable block (ram,0x00340cc8) */
/* WARNING: Removing unreachable block (ram,0x00340cd4) */
/* WARNING: Removing unreachable block (ram,0x00340cdc) */
/* WARNING: Removing unreachable block (ram,0x00340ce8) */
/* WARNING: Removing unreachable block (ram,0x00340cf0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003438a4(int param_1,uint param_2)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  undefined uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  iVar9 = DAT_00343ecc;
  iVar6 = DAT_00343ec4;
  *(undefined *)(param_1 + 0x2ba1) = 0;
  iVar7 = DAT_00343ec8;
  *(undefined2 *)(iVar6 + 10) = 0;
  uVar10 = *(uint *)(iVar9 + 0xbc);
  puVar8 = (ushort *)(iVar6 + 0x40);
  iVar9 = 0xc;
  puVar5 = (uint *)(iVar7 + 0x18);
  do {
    if ((*puVar5 & uVar10) != 0) {
      *(ushort *)(iVar6 + 10) = *puVar8 | *(ushort *)(iVar6 + 10);
    }
    iVar3 = DAT_00343ec4;
    iVar9 = iVar9 + -1;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar9 != 0);
  if (*(char *)(DAT_00343ed0 + 0x2dd) != '\0') {
    *(ushort *)(iVar6 + 10) = *(ushort *)(iVar6 + 10) | 0x1000;
  }
  *(ushort *)(iVar3 + 8) = (ushort)*(undefined4 *)(iVar7 + 0x3c) & (ushort)uVar10;
  iVar6 = FUN_002d0258();
  *(int *)(param_1 + 0x2a80) = iVar6;
  *(undefined2 *)(iVar3 + 2) = 0;
  *(undefined *)(iVar6 + 2) = 0;
  *(undefined2 *)(iVar3 + 4) = 0;
  FUN_0033f2d8();
  *(undefined *)(param_1 + 0x2ba0) = 0xff;
  *(undefined2 *)(param_1 + 0x2b82) = 0xff;
  *(undefined2 *)(iVar3 + 6) = 0xff;
  iVar6 = DAT_00343edc;
  puVar5 = DAT_00343ed8;
  bVar2 = true;
  if (param_2 < DAT_00343ed4) {
    if (param_2 == 0x2e) {
      *(short *)(param_1 + 0x2b80) = (short)param_2;
      if (((*puVar5 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00343ed8), iVar7 != 0)) {
        FUN_0036788c(DAT_00343ee8);
      }
      FUN_002d0320(iVar6,DAT_00343eec,0);
      if ((*puVar5 & 1) == 0) {
        iVar7 = FUN_003679b4(DAT_00343ed8);
        goto joined_r0x00343bc4;
      }
    }
    else {
      bVar11 = param_2 != 0;
      if (param_2 != 1) {
        bVar11 = 0x21 < param_2;
      }
      *(short *)(param_1 + 0x2b80) = (short)param_2;
      if (bVar11) {
        if (param_2 == 0x2d || param_2 == 0x2b) {
          if (((*puVar5 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00343ed8), iVar7 != 0)) {
            FUN_0036788c(DAT_00343ee8);
          }
          FUN_002d0320(iVar6,0x8a0,0);
          if ((*puVar5 & 1) == 0) {
            iVar7 = FUN_003679b4(DAT_00343ed8);
            goto joined_r0x00343bc4;
          }
        }
        else {
          if (((*puVar5 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00343ed8), iVar7 != 0)) {
            FUN_0036788c(DAT_00343ee8);
          }
          FUN_002d0320(iVar6,DAT_00343ef0,0);
          if (param_2 - 0x22 < 6) {
            FUN_0037547c(DAT_00343efc,0,4,DAT_00343ef8,DAT_00343ef8,DAT_00343ef4);
            if ((*puVar5 & 1) == 0) {
              iVar7 = FUN_003679b4(DAT_00343ed8);
              goto joined_r0x00343bc4;
            }
          }
          else {
            if ((param_2 == 1 || param_2 == 0x30) || param_2 == 0x2f) {
              if (((*puVar5 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00343ed8), iVar7 != 0)) {
                FUN_0036788c(DAT_00343ee8);
              }
              *(undefined *)(iVar6 + 0xd) = 0;
              goto LAB_00343cd0;
            }
            if ((*puVar5 & 1) == 0) {
              iVar7 = FUN_003679b4(DAT_00343ed8);
              goto joined_r0x00343bc4;
            }
          }
        }
      }
      else {
        bVar2 = false;
        if (param_2 < 0xf) {
          if (((*puVar5 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00343ed8), iVar7 != 0)) {
            FUN_0036788c(DAT_00343ee8);
          }
          FUN_002d0320(iVar6,param_2 + 0x86e,0);
          if ((*puVar5 & 1) == 0) {
            iVar7 = FUN_003679b4(DAT_00343ed8);
            goto joined_r0x00343bc4;
          }
        }
        else {
          if (((*puVar5 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00343ed8), iVar7 != 0)) {
            FUN_0036788c(DAT_00343ee8);
          }
          FUN_002d0320(iVar6,DAT_00343eec,0);
          if ((*puVar5 & 1) == 0) {
            iVar7 = FUN_003679b4(DAT_00343ed8);
joined_r0x00343bc4:
            if (iVar7 != 0) {
              FUN_0036788c(DAT_00343ee8);
            }
          }
        }
      }
    }
  }
  else {
    if (((*DAT_00343ed8 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00343ed8), iVar7 != 0)) {
      FUN_0036788c(iVar6 + -0x32c0);
    }
    FUN_002d0320(iVar6,param_2,0);
    if ((*puVar5 & 1) == 0) {
      iVar7 = FUN_003679b4(DAT_00343ed8);
      goto joined_r0x00343bc4;
    }
  }
  *(undefined *)(iVar6 + 0xd) = 1;
LAB_00343cd0:
  iVar6 = DAT_00343f00;
  *(undefined4 *)(param_1 + 0x2b98) = 0;
  *(undefined2 *)(param_1 + 0x2b78) = 0;
  *(undefined2 *)(iVar6 + param_1) = 0;
  iVar6 = *DAT_00343f04;
  *(undefined2 *)(iVar6 + 0x4b4) = 0x200;
  *(undefined2 *)(iVar6 + 0x4b6) = 0x200;
  *(undefined2 *)(iVar6 + 0x4c0) = 0x100;
  *(undefined2 *)(iVar6 + 0x4c2) = 0x40;
  if (*(short *)(iVar6 + 0x4ac) == 0) {
    *(undefined *)(param_1 + 0x2b73) = 3;
  }
  else {
    *(undefined *)(param_1 + 0x2b73) = 0;
    FUN_00340bdc(param_1,4);
  }
  iVar6 = DAT_00343f08;
  *(undefined2 *)(param_1 + 0x2b94) = *(undefined2 *)(param_1 + 0x2b92);
  if (bVar2) {
    FUN_00499038(param_1,0x12);
    uVar1 = *(undefined2 *)(iVar6 + 0x7a);
    FUN_0034be04(10);
    *(undefined2 *)(iVar6 + 0x7a) = uVar1;
  }
  if (param_2 == 1 || param_2 == 0x30) {
    FUN_00340bdc(param_1,9);
    uVar4 = 4;
  }
  else {
    if (param_2 != 0x2f) {
      if (param_2 == 0x2e) {
        FUN_0034be04(1);
        FUN_00340bdc(param_1,0x29);
        return;
      }
      if (param_2 == 0x2b) {
        FUN_003523dc(1);
        FUN_003523dc(1);
        iVar9 = FUN_0033f400();
        iVar7 = DAT_00343ec4;
        *(int *)(param_1 + 0x2a80) = iVar9;
        *(undefined2 *)(iVar7 + 4) = 0;
        *(undefined2 *)(iVar7 + 2) = 0;
        *(undefined *)(iVar9 + 2) = 0;
        FUN_0033f2d8();
        *(undefined *)(param_1 + 0x2b73) = 5;
        FUN_00340bdc(param_1,0x23);
        FUN_0033f248(0xf,1);
        *(undefined2 *)(iVar6 + 0x7a) = 0;
        FUN_0034be04(1);
        return;
      }
      if (*(char *)(param_1 + 0x2a90) != '\x05') {
        *(undefined *)(param_1 + 0x2a90) = 5;
      }
      return;
    }
    FUN_00340bdc(param_1,0x31);
    uVar4 = 2;
  }
  *(undefined *)(param_1 + 0x2a88) = uVar4;
  return;
}

