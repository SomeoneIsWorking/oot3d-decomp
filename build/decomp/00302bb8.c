// OoT3D decomp @ 00302bb8  name=FUN_00302bb8  size=20

void FUN_00302bb8(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint extraout_r1;
  int iVar5;
  int extraout_r2;
  int extraout_r2_00;
  uint uVar6;
  int extraout_r3;
  int extraout_r3_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  int *in_stack_00000008;

  uVar14 = CONCAT44(in_stack_00000000,in_stack_00000008);
  FUN_004482dc(0);
  iVar11 = *in_stack_00000008;
  bVar12 = iVar11 == 0;
  if (bVar12) {
    iVar11 = in_stack_00000008[1];
  }
  bVar13 = bVar12 && iVar11 == 0;
  if (bVar12 && iVar11 == 0) {
    bVar13 = in_stack_00000008[2] == 0;
  }
  iVar11 = extraout_r2;
  iVar10 = extraout_r3;
  if (!bVar13) {
    uVar14 = FUN_00302bb8();
    iVar11 = extraout_r2_00;
    iVar10 = extraout_r3_00;
  }
  iVar9 = DAT_003030ac;
  iVar5 = (int)((ulonglong)uVar14 >> 0x20);
  iVar4 = (int)uVar14;
  *(undefined4 *)(iVar4 + 0xc) = 1;
  *(int *)(iVar4 + 0x34) = iVar5;
  *(int *)(iVar4 + 0x14) = iVar11;
  *(int *)(iVar4 + 0x18) = iVar10;
  *(uint *)(iVar4 + 0x10) = extraout_r1;
  iVar8 = iVar11 - iVar9;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  uVar3 = DAT_003030c4;
  uVar2 = DAT_003030b8;
  if (iVar11 == iVar9) {
    *(undefined4 *)(iVar4 + 0x1c) = 0xd;
    *(undefined4 *)(iVar4 + 0x24) = 8;
    *(undefined4 *)(iVar4 + 0x28) = 8;
    *(undefined4 *)(iVar4 + 0x2c) = 8;
    *(undefined4 *)(iVar4 + 0x30) = 8;
    *(undefined4 *)(iVar4 + 0x20) = in_stack_00000004;
    *(undefined4 *)(iVar4 + 0x38) = 0;
    goto LAB_00303040;
  }
  if (iVar11 < iVar9) {
    iVar9 = iVar11 - DAT_003030b0;
    if (iVar11 == DAT_003030b0) {
      if (iVar10 == 0x1401) {
        *(undefined4 *)(iVar4 + 0x24) = 8;
        *(undefined4 *)(iVar4 + 0x1c) = 5;
        *(undefined4 *)(iVar4 + 0x28) = 8;
        *(undefined4 *)(iVar4 + 0x2c) = 8;
        *(undefined4 *)(iVar4 + 0x30) = 8;
        goto LAB_00303018;
      }
      if (iVar10 == 0x6760) {
        *(undefined4 *)(iVar4 + 0x1c) = 9;
        *(undefined4 *)(iVar4 + 0x24) = 4;
        *(undefined4 *)(iVar4 + 0x28) = 4;
        *(undefined4 *)(iVar4 + 0x2c) = 4;
        *(undefined4 *)(iVar4 + 0x38) = 8;
        *(undefined4 *)(iVar4 + 0x30) = 4;
      }
    }
    else {
      if (iVar11 < DAT_003030b0) {
        if (iVar11 == 0x1906) {
          if (iVar10 == 0x1401) {
            *(undefined4 *)(iVar4 + 0x1c) = 8;
            *(undefined4 *)(iVar4 + 0x24) = 0;
            *(undefined4 *)(iVar4 + 0x28) = 0;
            *(undefined4 *)(iVar4 + 0x30) = 8;
            *(undefined4 *)(iVar4 + 0x2c) = 0;
LAB_00302f00:
            *(undefined4 *)(iVar4 + 0x38) = 8;
            goto LAB_00303054;
          }
          if (iVar10 != 0x6761) goto LAB_00303054;
          *(undefined4 *)(iVar4 + 0x1c) = 0xb;
          *(undefined4 *)(iVar4 + 0x24) = 0;
          *(undefined4 *)(iVar4 + 0x28) = 0;
          *(undefined4 *)(iVar4 + 0x30) = 4;
          *(undefined4 *)(iVar4 + 0x2c) = 0;
LAB_00302cb8:
          *(undefined4 *)(iVar4 + 0x38) = 4;
        }
        else {
          if (iVar11 == 0x1907) {
            if (iVar10 == 0x1401) {
              *(undefined4 *)(iVar4 + 0x24) = 8;
              *(undefined4 *)(iVar4 + 0x1c) = 1;
              *(undefined4 *)(iVar4 + 0x28) = 8;
              *(undefined4 *)(iVar4 + 0x38) = 0x18;
              *(undefined4 *)(iVar4 + 0x2c) = 8;
              *(undefined4 *)(iVar4 + 0x30) = 0;
              goto LAB_00303054;
            }
            if (iVar10 != 0x8363) goto LAB_00303054;
            *(undefined4 *)(iVar4 + 0x1c) = 3;
            *(undefined4 *)(iVar4 + 0x28) = 6;
            *(undefined4 *)(iVar4 + 0x24) = 5;
            *(undefined4 *)(iVar4 + 0x2c) = 5;
            *(undefined4 *)(iVar4 + 0x30) = 0;
          }
          else {
            if (iVar11 != 0x1908) {
              if (iVar11 != 0x1909) goto LAB_00303040;
              if (iVar10 == 0x1401) {
                *(undefined4 *)(iVar4 + 0x1c) = 7;
                *(undefined4 *)(iVar4 + 0x24) = 8;
                *(undefined4 *)(iVar4 + 0x28) = 8;
                *(undefined4 *)(iVar4 + 0x2c) = 8;
                *(undefined4 *)(iVar4 + 0x30) = 0;
                goto LAB_00302f00;
              }
              if (iVar10 != 0x6761) goto LAB_00303054;
              *(undefined4 *)(iVar4 + 0x1c) = 10;
              *(undefined4 *)(iVar4 + 0x24) = 4;
              *(undefined4 *)(iVar4 + 0x28) = 4;
              *(undefined4 *)(iVar4 + 0x2c) = 4;
              *(undefined4 *)(iVar4 + 0x30) = 0;
              goto LAB_00302cb8;
            }
            if (iVar10 == 0x1401) {
              *(undefined4 *)(iVar4 + 0x24) = 8;
              *(undefined4 *)(iVar4 + 0x1c) = 0;
              *(undefined4 *)(iVar4 + 0x28) = 8;
              *(undefined4 *)(iVar4 + 0x2c) = 8;
              *(undefined4 *)(iVar4 + 0x30) = 8;
              *(undefined4 *)(iVar4 + 0x38) = 0x20;
              goto LAB_00303054;
            }
            if (iVar10 == 0x8033) {
              *(undefined4 *)(iVar4 + 0x1c) = 4;
              *(undefined4 *)(iVar4 + 0x24) = 4;
              *(undefined4 *)(iVar4 + 0x28) = 4;
              *(undefined4 *)(iVar4 + 0x2c) = 4;
              *(undefined4 *)(iVar4 + 0x38) = 0x10;
              *(undefined4 *)(iVar4 + 0x30) = 4;
              goto LAB_00303054;
            }
            if (iVar10 != 0x8034) goto LAB_00303054;
            *(undefined4 *)(iVar4 + 0x1c) = 2;
            *(undefined4 *)(iVar4 + 0x24) = 5;
            *(undefined4 *)(iVar4 + 0x28) = 5;
            *(undefined4 *)(iVar4 + 0x2c) = 5;
            *(undefined4 *)(iVar4 + 0x30) = 1;
          }
          *(undefined4 *)(iVar4 + 0x38) = 0x10;
        }
        goto LAB_00303054;
      }
      if (iVar9 == 0x4736 || iVar9 == 0x4746) {
LAB_00302d48:
        *(undefined4 *)(iVar4 + 0x24) = 8;
        *(undefined4 *)(iVar4 + 0x1c) = 0;
        *(undefined4 *)(iVar4 + 0x28) = 8;
        *(undefined4 *)(iVar4 + 0x2c) = 8;
        *(undefined4 *)(iVar4 + 0x30) = 8;
LAB_00302fc8:
        *(undefined4 *)(iVar4 + 0x38) = 0x20;
      }
      else {
        if (iVar9 == 0x4df6) {
          *(undefined4 *)(iVar4 + 0x1c) = 6;
          *(undefined4 *)(iVar4 + 0x24) = 8;
          *(undefined4 *)(iVar4 + 0x28) = 8;
          *(undefined4 *)(iVar4 + 0x2c) = 0;
          *(undefined4 *)(iVar4 + 0x30) = 0;
          goto LAB_00303018;
        }
        if (iVar9 == 0x4e50) {
          *(undefined4 *)(iVar4 + 0x1c) = 0xc;
          *(undefined4 *)(iVar4 + 0x24) = 8;
          *(undefined4 *)(iVar4 + 0x28) = 8;
          *(undefined4 *)(iVar4 + 0x2c) = 8;
          *(undefined4 *)(iVar4 + 0x30) = 0;
          *(undefined4 *)(iVar4 + 0x20) = in_stack_00000004;
          *(undefined4 *)(iVar4 + 0x38) = 0;
        }
      }
    }
  }
  else {
    iVar10 = iVar8 - DAT_003030b4;
    if (iVar8 == DAT_003030b4) {
      *(undefined4 *)(iVar4 + 0x24) = 0x10;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
LAB_00302da8:
      *(undefined4 *)(iVar4 + 0x30) = 0;
LAB_00303018:
      *(undefined4 *)(iVar4 + 0x38) = 0x10;
    }
    else {
      if (iVar8 < DAT_003030b4) {
        if (iVar8 != 0x18f6) {
          if (iVar8 == 0x18fb) {
            *(undefined4 *)(iVar4 + 0x14) = DAT_003030b8;
            *(undefined4 *)(iVar4 + 0x1c) = 4;
            *(undefined4 *)(iVar4 + 0x18) = uVar3;
            *(undefined4 *)(iVar4 + 0x24) = 4;
            *(undefined4 *)(iVar4 + 0x28) = 4;
            *(undefined4 *)(iVar4 + 0x2c) = 4;
            *(undefined4 *)(iVar4 + 0x30) = 4;
          }
          else {
            if (iVar8 != 0x18fc) {
              if (iVar8 == 0x18fd) goto LAB_00302d48;
              goto LAB_00303040;
            }
            *(undefined4 *)(iVar4 + 0x1c) = 2;
            uVar3 = DAT_003030c8;
            *(undefined4 *)(iVar4 + 0x14) = uVar2;
            *(undefined4 *)(iVar4 + 0x18) = uVar3;
            *(undefined4 *)(iVar4 + 0x24) = 5;
            *(undefined4 *)(iVar4 + 0x28) = 5;
            *(undefined4 *)(iVar4 + 0x2c) = 5;
            *(undefined4 *)(iVar4 + 0x30) = 1;
          }
          goto LAB_00303018;
        }
        *(undefined4 *)(iVar4 + 0x24) = 8;
        *(undefined4 *)(iVar4 + 0x1c) = 1;
        *(undefined4 *)(iVar4 + 0x28) = 8;
        *(undefined4 *)(iVar4 + 0x2c) = 8;
        *(undefined4 *)(iVar4 + 0x30) = 0;
      }
      else {
        if (iVar10 != 1) {
          if (iVar10 == 0x74b) {
            *(undefined4 *)(iVar4 + 0x1c) = 3;
            *(undefined4 *)(iVar4 + 0x24) = 0x18;
            *(undefined4 *)(iVar4 + 0x28) = 8;
            *(undefined4 *)(iVar4 + 0x2c) = 0;
            *(undefined4 *)(iVar4 + 0x30) = 0;
            goto LAB_00302fc8;
          }
          if (iVar10 != 0xbbd) goto LAB_00303040;
          *(undefined4 *)(iVar4 + 0x1c) = 3;
          *(undefined4 *)(iVar4 + 0x14) = DAT_003030bc;
          *(undefined4 *)(iVar4 + 0x18) = DAT_003030c0;
          *(undefined4 *)(iVar4 + 0x28) = 6;
          *(undefined4 *)(iVar4 + 0x24) = 5;
          *(undefined4 *)(iVar4 + 0x2c) = 5;
          goto LAB_00302da8;
        }
        *(undefined4 *)(iVar4 + 0x1c) = 2;
        *(undefined4 *)(iVar4 + 0x24) = 0x18;
        *(undefined4 *)(iVar4 + 0x28) = 0;
        *(undefined4 *)(iVar4 + 0x2c) = 0;
        *(undefined4 *)(iVar4 + 0x30) = 0;
      }
      *(undefined4 *)(iVar4 + 0x38) = 0x18;
    }
  }
LAB_00303040:
  iVar10 = 0;
  if (iVar11 != 0x675a) {
    iVar10 = iVar11 + -0x6700;
  }
  if (iVar11 == 0x675a || iVar10 == 0x5b) {
    return;
  }
LAB_00303054:
  *(undefined4 *)(iVar4 + 0x20) = 0;
  iVar11 = 0;
  uVar6 = 1;
  uVar7 = extraout_r1;
  while( true ) {
    if (iVar5 <= iVar11) {
      return;
    }
    uVar1 = uVar6;
    if (7 < uVar6) {
      uVar1 = uVar7;
    }
    if ((int)uVar1 < 8) break;
    iVar10 = uVar6 * uVar7;
    iVar11 = iVar11 + 1;
    uVar6 = 0;
    iVar10 = *(int *)(iVar4 + 0x38) * iVar10;
    uVar7 = (int)uVar7 >> 1;
    *(int *)(iVar4 + 0x20) =
         *(int *)(iVar4 + 0x20) + ((int)(iVar10 + ((uint)(iVar10 >> 0x1f) >> 0x1d)) >> 3);
  }
  return;
}
