// OoT3D decomp @ 00302bcc  name=FUN_00302bcc  size=1248

void FUN_00302bcc(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  int extraout_r3;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;

  uVar9 = CONCAT44(param_5,param_7);
  iVar6 = *param_7;
  bVar7 = iVar6 == 0;
  if (bVar7) {
    iVar6 = param_7[1];
  }
  bVar8 = bVar7 && iVar6 == 0;
  if (bVar7 && iVar6 == 0) {
    bVar8 = param_7[2] == 0;
  }
  if (!bVar8) {
    uVar9 = FUN_00302bb8();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  iVar6 = DAT_003030ac;
  iVar4 = (int)((ulonglong)uVar9 >> 0x20);
  iVar3 = (int)uVar9;
  *(int *)(iVar3 + 0xc) = param_1;
  *(int *)(iVar3 + 0x34) = iVar4;
  *(int *)(iVar3 + 0x14) = param_3;
  *(int *)(iVar3 + 0x18) = param_4;
  *(int *)(iVar3 + 0x10) = param_2;
  iVar5 = param_3 - iVar6;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  uVar2 = DAT_003030c4;
  uVar1 = DAT_003030b8;
  if (param_3 == iVar6) {
    *(undefined4 *)(iVar3 + 0x1c) = 0xd;
    *(undefined4 *)(iVar3 + 0x24) = 8;
    *(undefined4 *)(iVar3 + 0x28) = 8;
    *(undefined4 *)(iVar3 + 0x2c) = 8;
    *(undefined4 *)(iVar3 + 0x30) = 8;
    *(undefined4 *)(iVar3 + 0x20) = param_6;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    goto LAB_00303040;
  }
  if (param_3 < iVar6) {
    iVar6 = param_3 - DAT_003030b0;
    if (param_3 == DAT_003030b0) {
      if (param_4 == 0x1401) {
        *(undefined4 *)(iVar3 + 0x24) = 8;
        *(undefined4 *)(iVar3 + 0x1c) = 5;
        *(undefined4 *)(iVar3 + 0x28) = 8;
        *(undefined4 *)(iVar3 + 0x2c) = 8;
        *(undefined4 *)(iVar3 + 0x30) = 8;
        goto LAB_00303018;
      }
      if (param_4 == 0x6760) {
        *(undefined4 *)(iVar3 + 0x1c) = 9;
        *(undefined4 *)(iVar3 + 0x24) = 4;
        *(undefined4 *)(iVar3 + 0x28) = 4;
        *(undefined4 *)(iVar3 + 0x2c) = 4;
        *(undefined4 *)(iVar3 + 0x38) = 8;
        *(undefined4 *)(iVar3 + 0x30) = 4;
      }
    }
    else {
      if (param_3 < DAT_003030b0) {
        if (param_3 == 0x1906) {
          if (param_4 == 0x1401) {
            *(undefined4 *)(iVar3 + 0x1c) = 8;
            *(undefined4 *)(iVar3 + 0x24) = 0;
            *(undefined4 *)(iVar3 + 0x28) = 0;
            *(undefined4 *)(iVar3 + 0x30) = 8;
            *(undefined4 *)(iVar3 + 0x2c) = 0;
LAB_00302f00:
            *(undefined4 *)(iVar3 + 0x38) = 8;
            goto LAB_00303054;
          }
          if (param_4 != 0x6761) goto LAB_00303054;
          *(undefined4 *)(iVar3 + 0x1c) = 0xb;
          *(undefined4 *)(iVar3 + 0x24) = 0;
          *(undefined4 *)(iVar3 + 0x28) = 0;
          *(undefined4 *)(iVar3 + 0x30) = 4;
          *(undefined4 *)(iVar3 + 0x2c) = 0;
LAB_00302cb8:
          *(undefined4 *)(iVar3 + 0x38) = 4;
        }
        else {
          if (param_3 == 0x1907) {
            if (param_4 == 0x1401) {
              *(undefined4 *)(iVar3 + 0x24) = 8;
              *(undefined4 *)(iVar3 + 0x1c) = 1;
              *(undefined4 *)(iVar3 + 0x28) = 8;
              *(undefined4 *)(iVar3 + 0x38) = 0x18;
              *(undefined4 *)(iVar3 + 0x2c) = 8;
              *(undefined4 *)(iVar3 + 0x30) = 0;
              goto LAB_00303054;
            }
            if (param_4 != 0x8363) goto LAB_00303054;
            *(undefined4 *)(iVar3 + 0x1c) = 3;
            *(undefined4 *)(iVar3 + 0x28) = 6;
            *(undefined4 *)(iVar3 + 0x24) = 5;
            *(undefined4 *)(iVar3 + 0x2c) = 5;
            *(undefined4 *)(iVar3 + 0x30) = 0;
          }
          else {
            if (param_3 != 0x1908) {
              if (param_3 != 0x1909) goto LAB_00303040;
              if (param_4 == 0x1401) {
                *(undefined4 *)(iVar3 + 0x1c) = 7;
                *(undefined4 *)(iVar3 + 0x24) = 8;
                *(undefined4 *)(iVar3 + 0x28) = 8;
                *(undefined4 *)(iVar3 + 0x2c) = 8;
                *(undefined4 *)(iVar3 + 0x30) = 0;
                goto LAB_00302f00;
              }
              if (param_4 != 0x6761) goto LAB_00303054;
              *(undefined4 *)(iVar3 + 0x1c) = 10;
              *(undefined4 *)(iVar3 + 0x24) = 4;
              *(undefined4 *)(iVar3 + 0x28) = 4;
              *(undefined4 *)(iVar3 + 0x2c) = 4;
              *(undefined4 *)(iVar3 + 0x30) = 0;
              goto LAB_00302cb8;
            }
            if (param_4 == 0x1401) {
              *(undefined4 *)(iVar3 + 0x24) = 8;
              *(undefined4 *)(iVar3 + 0x1c) = 0;
              *(undefined4 *)(iVar3 + 0x28) = 8;
              *(undefined4 *)(iVar3 + 0x2c) = 8;
              *(undefined4 *)(iVar3 + 0x30) = 8;
              *(undefined4 *)(iVar3 + 0x38) = 0x20;
              goto LAB_00303054;
            }
            if (param_4 == 0x8033) {
              *(undefined4 *)(iVar3 + 0x1c) = 4;
              *(undefined4 *)(iVar3 + 0x24) = 4;
              *(undefined4 *)(iVar3 + 0x28) = 4;
              *(undefined4 *)(iVar3 + 0x2c) = 4;
              *(undefined4 *)(iVar3 + 0x38) = 0x10;
              *(undefined4 *)(iVar3 + 0x30) = 4;
              goto LAB_00303054;
            }
            if (param_4 != 0x8034) goto LAB_00303054;
            *(undefined4 *)(iVar3 + 0x1c) = 2;
            *(undefined4 *)(iVar3 + 0x24) = 5;
            *(undefined4 *)(iVar3 + 0x28) = 5;
            *(undefined4 *)(iVar3 + 0x2c) = 5;
            *(undefined4 *)(iVar3 + 0x30) = 1;
          }
          *(undefined4 *)(iVar3 + 0x38) = 0x10;
        }
        goto LAB_00303054;
      }
      if (iVar6 == 0x4736 || iVar6 == 0x4746) {
LAB_00302d48:
        *(undefined4 *)(iVar3 + 0x24) = 8;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        *(undefined4 *)(iVar3 + 0x28) = 8;
        *(undefined4 *)(iVar3 + 0x2c) = 8;
        *(undefined4 *)(iVar3 + 0x30) = 8;
LAB_00302fc8:
        *(undefined4 *)(iVar3 + 0x38) = 0x20;
      }
      else {
        if (iVar6 == 0x4df6) {
          *(undefined4 *)(iVar3 + 0x1c) = 6;
          *(undefined4 *)(iVar3 + 0x24) = 8;
          *(undefined4 *)(iVar3 + 0x28) = 8;
          *(undefined4 *)(iVar3 + 0x2c) = 0;
          *(undefined4 *)(iVar3 + 0x30) = 0;
          goto LAB_00303018;
        }
        if (iVar6 == 0x4e50) {
          *(undefined4 *)(iVar3 + 0x1c) = 0xc;
          *(undefined4 *)(iVar3 + 0x24) = 8;
          *(undefined4 *)(iVar3 + 0x28) = 8;
          *(undefined4 *)(iVar3 + 0x2c) = 8;
          *(undefined4 *)(iVar3 + 0x30) = 0;
          *(undefined4 *)(iVar3 + 0x20) = param_6;
          *(undefined4 *)(iVar3 + 0x38) = 0;
        }
      }
    }
  }
  else {
    iVar6 = iVar5 - DAT_003030b4;
    if (iVar5 == DAT_003030b4) {
      *(undefined4 *)(iVar3 + 0x24) = 0x10;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
LAB_00302da8:
      *(undefined4 *)(iVar3 + 0x30) = 0;
LAB_00303018:
      *(undefined4 *)(iVar3 + 0x38) = 0x10;
    }
    else {
      if (iVar5 < DAT_003030b4) {
        if (iVar5 != 0x18f6) {
          if (iVar5 == 0x18fb) {
            *(undefined4 *)(iVar3 + 0x14) = DAT_003030b8;
            *(undefined4 *)(iVar3 + 0x1c) = 4;
            *(undefined4 *)(iVar3 + 0x18) = uVar2;
            *(undefined4 *)(iVar3 + 0x24) = 4;
            *(undefined4 *)(iVar3 + 0x28) = 4;
            *(undefined4 *)(iVar3 + 0x2c) = 4;
            *(undefined4 *)(iVar3 + 0x30) = 4;
          }
          else {
            if (iVar5 != 0x18fc) {
              if (iVar5 == 0x18fd) goto LAB_00302d48;
              goto LAB_00303040;
            }
            *(undefined4 *)(iVar3 + 0x1c) = 2;
            uVar2 = DAT_003030c8;
            *(undefined4 *)(iVar3 + 0x14) = uVar1;
            *(undefined4 *)(iVar3 + 0x18) = uVar2;
            *(undefined4 *)(iVar3 + 0x24) = 5;
            *(undefined4 *)(iVar3 + 0x28) = 5;
            *(undefined4 *)(iVar3 + 0x2c) = 5;
            *(undefined4 *)(iVar3 + 0x30) = 1;
          }
          goto LAB_00303018;
        }
        *(undefined4 *)(iVar3 + 0x24) = 8;
        *(undefined4 *)(iVar3 + 0x1c) = 1;
        *(undefined4 *)(iVar3 + 0x28) = 8;
        *(undefined4 *)(iVar3 + 0x2c) = 8;
        *(undefined4 *)(iVar3 + 0x30) = 0;
      }
      else {
        if (iVar6 != 1) {
          if (iVar6 == 0x74b) {
            *(undefined4 *)(iVar3 + 0x1c) = 3;
            *(undefined4 *)(iVar3 + 0x24) = 0x18;
            *(undefined4 *)(iVar3 + 0x28) = 8;
            *(undefined4 *)(iVar3 + 0x2c) = 0;
            *(undefined4 *)(iVar3 + 0x30) = 0;
            goto LAB_00302fc8;
          }
          if (iVar6 != 0xbbd) goto LAB_00303040;
          *(undefined4 *)(iVar3 + 0x1c) = 3;
          *(undefined4 *)(iVar3 + 0x14) = DAT_003030bc;
          *(undefined4 *)(iVar3 + 0x18) = DAT_003030c0;
          *(undefined4 *)(iVar3 + 0x28) = 6;
          *(undefined4 *)(iVar3 + 0x24) = 5;
          *(undefined4 *)(iVar3 + 0x2c) = 5;
          goto LAB_00302da8;
        }
        *(undefined4 *)(iVar3 + 0x1c) = 2;
        *(undefined4 *)(iVar3 + 0x24) = 0x18;
        *(undefined4 *)(iVar3 + 0x28) = 0;
        *(undefined4 *)(iVar3 + 0x2c) = 0;
        *(undefined4 *)(iVar3 + 0x30) = 0;
      }
      *(undefined4 *)(iVar3 + 0x38) = 0x18;
    }
  }
LAB_00303040:
  iVar6 = 0;
  if (param_3 != 0x675a) {
    iVar6 = param_3 + -0x6700;
  }
  if (param_3 == 0x675a || iVar6 == 0x5b) {
    return;
  }
LAB_00303054:
  *(undefined4 *)(iVar3 + 0x20) = 0;
  iVar6 = 0;
  while( true ) {
    if (iVar4 <= iVar6) {
      return;
    }
    iVar5 = param_1;
    if (7 < param_1) {
      iVar5 = param_2;
    }
    if (iVar5 < 8) break;
    iVar5 = param_1 * param_2;
    iVar6 = iVar6 + 1;
    param_1 = param_1 >> 1;
    iVar5 = *(int *)(iVar3 + 0x38) * iVar5;
    param_2 = param_2 >> 1;
    *(int *)(iVar3 + 0x20) =
         *(int *)(iVar3 + 0x20) + ((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1d)) >> 3);
  }
  return;
}
