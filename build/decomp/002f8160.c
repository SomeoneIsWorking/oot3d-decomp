// OoT3D decomp @ 002f8160  name=FUN_002f8160  size=1380

/* WARNING: Type propagation algorithm not settling */

void FUN_002f8160(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  sbyte *psVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 extraout_s0;
  undefined4 uVar15;
  undefined4 extraout_s1;
  undefined8 uVar16;

  uVar8 = DAT_002f8704;
  uVar7 = DAT_002f84dc;
  uVar6 = DAT_002f84d8;
  uVar15 = DAT_002f84d4;
  iVar5 = DAT_002f84d0;
  iVar12 = DAT_002f84cc;
  psVar4 = DAT_002f84c8;
  puVar3 = DAT_002f84c4;
  uVar16 = CONCAT44(param_2,param_1);
  iVar9 = *(int *)(param_3 + 0x428);
  if (iVar9 < 2) {
    iVar9 = 0;
    if (0 < *(int *)(param_3 + 0x224)) {
      iVar10 = DAT_002f84d0 + 0xa6;
      do {
        uVar15 = (undefined4)((ulonglong)uVar16 >> 0x20);
        if (*(char *)(param_3 + iVar9 + 0x434) != '\0') {
          iVar14 = param_3 + iVar9 * 4;
          iVar11 = *(int *)(iVar14 + 0x228);
          if (iVar11 == 9) {
switchD_002f81dc_caseD_0:
            uVar13 = (uint)*(char *)((uint)*(byte *)(DAT_002f84e0 + iVar11) + iVar10);
          }
          else if (iVar11 < 10) {
            switch(iVar11) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 6:
              goto switchD_002f81dc_caseD_0;
            default:
switchD_002f81dc_caseD_4:
              uVar13 = 0xffffffff;
            }
          }
          else {
            if (iVar11 == 0x10) goto switchD_002f81dc_caseD_0;
            if ((iVar11 != 0x38 && iVar11 != 0x39) && iVar11 != 0x3a) goto switchD_002f81dc_caseD_4;
            uVar13 = (uint)*(char *)((uint)*(byte *)(DAT_002f84e0 + 3) + iVar10);
          }
          bVar2 = false;
          *(uint *)(param_3 + iVar11 * 4 + 0x328) = uVar13;
          iVar11 = *(int *)(iVar14 + 0x228);
          if (iVar11 == 2) {
            uVar1 = *(ushort *)
                     (iVar12 + ((int)(*(uint *)(iVar5 + 0xb8) & puVar3[1]) >> psVar4[1]) * 2 + 8);
joined_r0x002f82ac:
            if (uVar1 == uVar13) {
LAB_002f83d0:
              bVar2 = true;
            }
          }
          else {
            if (iVar11 == 3) {
              uVar1 = *(ushort *)
                       (iVar12 + ((int)(*(uint *)(iVar5 + 0xb8) & *puVar3) >> *psVar4) * 2);
              goto joined_r0x002f82ac;
            }
            if (iVar11 == 0x38) {
              uVar1 = *(ushort *)
                       (iVar12 + ((int)(*(uint *)(iVar5 + 0xb8) & *puVar3) >> *psVar4) * 2);
joined_r0x002f830c:
              if (uVar1 != uVar13) goto LAB_002f83f8;
              goto LAB_002f83d0;
            }
            if (iVar11 == 0x39) {
              uVar1 = *(ushort *)
                       (iVar12 + ((int)(*(uint *)(iVar5 + 0xb8) & *puVar3) >> *psVar4) * 2);
              goto joined_r0x002f830c;
            }
            if (iVar11 == 0x3a) {
              uVar1 = *(ushort *)
                       (iVar12 + ((int)(*(uint *)(iVar5 + 0xb8) & *puVar3) >> *psVar4) * 2);
              goto joined_r0x002f830c;
            }
            if (iVar11 == 6) {
              uVar1 = *(ushort *)
                       (iVar12 + ((int)(*(uint *)(iVar5 + 0xb8) & puVar3[5]) >> psVar4[5]) * 2 +
                       0x28);
              goto joined_r0x002f830c;
            }
            if (iVar11 == 0) {
              uVar1 = *(ushort *)
                       (iVar12 + ((int)(*(uint *)(iVar5 + 0xb8) & puVar3[6]) >> psVar4[6]) * 2 +
                       0x30);
              goto joined_r0x002f830c;
            }
            if (iVar11 == 1) {
              uVar1 = *(ushort *)
                       (iVar12 + ((int)(*(uint *)(iVar5 + 0xb8) & puVar3[7]) >> psVar4[7]) * 2 +
                       0x38);
              goto joined_r0x002f830c;
            }
            if (iVar11 == 9) {
              if (uVar13 != 0x32) goto LAB_002f83f8;
              goto LAB_002f83d0;
            }
            if (iVar11 == 0x10 && uVar13 == 0xf) goto LAB_002f83d0;
          }
LAB_002f83f8:
          iVar11 = *(int *)(iVar14 + 0xc);
          if (iVar11 != 0) {
            if (bVar2) {
              FUN_002fcb04((int)uVar16,uVar15,iVar11,uVar13,1);
            }
            else {
              FUN_002fcb04((int)uVar16,uVar15,iVar11,uVar13,0);
            }
          }
          FUN_004569cc();
          uVar16 = CONCAT44(extraout_s1,extraout_s0);
          if (*(int *)(iVar14 + 0xc) != 0) {
            uVar16 = FUN_002e6e58();
          }
          if ((*(int *)(iVar14 + 0x228) == 0xff) && (*(int *)(iVar14 + 0xc) != 0)) {
            uVar16 = FUN_002e6dcc();
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_3 + 0x224));
    }
  }
  else if (iVar9 == 2 || iVar9 == 5) {
    FUN_002e6cd4(DAT_002f84dc,param_3,0,DAT_002f8704,0xc5,0x2a,0x2a);
    FUN_002fcb04(*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x42c),0);
  }
  else if (iVar9 == 3) {
    FUN_002e6cd4(DAT_002f84dc,param_3,0,0x139,0xc5,0x2a,0x2a);
    FUN_002fcb04(*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x42c),0);
  }
  else if (iVar9 == 6) {
    iVar9 = FUN_002fcdd4();
    if (iVar9 == 0) {
      FUN_002e6cd4(uVar7,param_3,0,uVar8,0xc5,0x2a,0x2a);
      FUN_002fcb04(*(undefined4 *)(param_3 + 0xc),*(uint *)(param_3 + 0x42c),
                   (uint)*(ushort *)
                          (iVar12 + ((int)(*(uint *)(iVar5 + 0xb8) & *puVar3) >> *psVar4) * 2) ==
                   *(uint *)(param_3 + 0x42c));
      if (*(int *)(param_3 + 0x42c) == 0) {
        uVar15 = uVar6;
      }
      FUN_002e6e58(uVar15,*(undefined4 *)(param_3 + 0xc));
    }
    else {
      FUN_002e6cd4(uVar7,param_3,0,500,300,0,0);
    }
  }
  else if (iVar9 == 4) {
    iVar12 = FUN_002fcdd4();
    if (iVar12 == 0) {
      FUN_002e6cd4(uVar7,param_3,0,uVar8,0xc5,0x2a,0x2a);
    }
    else {
      FUN_002e6cd4(uVar7,param_3,0,500,300,0,0);
    }
    iVar12 = FUN_0045698c();
    if (iVar12 == 0) {
      FUN_002e6c3c(uVar15,uVar15,param_3,0);
    }
    else {
      FUN_002e6c3c(uVar15,uVar6,param_3,0);
    }
  }
  FUN_002e6ed0(param_3);
  return;
}
