// OoT3D decomp @ 00178af8  name=FUN_00178af8  size=980

void FUN_00178af8(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  short local_38 [2];
  ushort local_34 [2];
  int local_30;

  FUN_003731e0(param_1 + 0x1a4);
  iVar6 = DAT_00178ee8;
  iVar8 = *(int *)(param_2 + 0x20ac);
  local_30 = param_2 + 0x28a0;
  if (*(int *)(param_1 + 0xb10) == 3) {
    FUN_0036bc98(param_1,param_2);
    FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
    *(undefined4 *)(param_1 + 0xb10) = 1;
LAB_00178b68:
    iVar9 = *(int *)(param_2 + 0x20ac);
    uVar7 = 1;
    uVar4 = FUN_003769d8(local_30);
    switch(uVar4) {
    case 4:
      iVar5 = FUN_00346964(param_2);
      if (iVar5 != 0) {
        iVar5 = FUN_00369f3c(param_2);
        if (iVar5 == 0) {
          FUN_003725e0(param_2);
          iVar5 = DAT_00178ef0;
          *(undefined4 *)(param_1 + 0x124) = 0;
          *(undefined1 *)(iVar5 + iVar9) = 0;
          FUN_00370778(param_2);
          uVar7 = 3;
          *(short *)(param_1 + 0x116) = (short)DAT_00178ef4;
        }
        else {
          uVar7 = 2;
          *(short *)(param_1 + 0x116) = (short)DAT_00178eec;
        }
      }
      break;
    case 6:
      sVar1 = *(short *)(param_1 + 0x116);
      if (sVar1 == 0x5028) {
        iVar9 = FUN_00346964(param_2);
        if (iVar9 != 0) {
          uVar7 = 0;
          *(ushort *)(iVar6 + 0x3e) = *(ushort *)(iVar6 + 0x3e) | 4;
        }
      }
      else if (sVar1 == 0x601b) {
        iVar9 = FUN_00346964(param_2);
        if (iVar9 != 0) {
          uVar7 = 4;
        }
      }
      else if (sVar1 == 0x606a) {
        iVar9 = FUN_00346964(param_2);
        if (iVar9 != 0) {
          uVar3 = *(ushort *)(iVar6 + 0x3e) | 1;
LAB_00178cac:
          uVar7 = 0;
          *(ushort *)(iVar6 + 0x3e) = uVar3;
        }
      }
      else if (sVar1 == 0x606f) {
        iVar9 = FUN_00346964(param_2);
        if (iVar9 != 0) {
          uVar3 = *(ushort *)(iVar6 + 0x3e) | 2;
          goto LAB_00178cac;
        }
      }
      else {
        iVar9 = FUN_00346964(param_2);
        if (iVar9 != 0) {
          uVar7 = 0;
        }
      }
    }
    *(undefined4 *)(param_1 + 0xb10) = uVar7;
  }
  else if (*(int *)(param_1 + 0xb10) == 1) goto LAB_00178b68;
  uVar4 = DAT_00178ef8;
  iVar9 = *(int *)(param_1 + 0xb10);
  if (iVar9 == 5) {
    uVar4 = 5;
    iVar6 = FUN_003769d8(local_30);
    if ((iVar6 == 6) && (iVar6 = FUN_00346964(param_2), iVar6 != 0)) {
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 0xb10) = uVar4;
LAB_00178ebc:
    if (*(int *)(param_1 + 0xb10) == 0) {
      uVar3 = *(ushort *)(param_1 + 0xb14) & 0xffef;
      goto LAB_00178ed8;
    }
  }
  else if (iVar9 == 2) {
    FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
    *(undefined4 *)(param_1 + 0xb10) = 1;
  }
  else if (iVar9 == 4) {
    iVar6 = FUN_00371e40(param_1,param_2);
    if (iVar6 == 0) {
      FUN_003724dc(uVar4,DAT_00178efc,param_1,param_2,0x22);
      goto LAB_00178ebc;
    }
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0xb10) = 5;
  }
  else if (iVar9 == 0) {
    iVar9 = FUN_0036bc98(param_1,param_2);
    if (iVar9 == 0) {
      FUN_00363a20(param_2,param_1,local_34,local_38);
      if (((local_34[0] < 0x191) && (-1 < local_38[0])) && (local_38[0] < 0xf1)) {
        iVar8 = FUN_0036bba8(param_2,0);
        if (iVar8 == 0) {
          uVar3 = *(ushort *)(param_1 + 0xb14);
          if ((uVar3 & 1) == 0) {
            if ((uVar3 & 2) == 0) {
              if ((uVar3 & 4) != 0) {
                iVar8 = DAT_00178f2c;
              }
            }
            else {
              iVar8 = DAT_00178f24;
              if ((*(ushort *)(iVar6 + 0x3e) & 4) != 0) {
                iVar8 = DAT_00178f28;
              }
            }
          }
          else {
            iVar8 = DAT_00178f18;
            if (((~*(ushort *)(DAT_00178f14 + 0xfe) & 0xf) != 0) &&
               (iVar8 = DAT_00178f1c, (*(ushort *)(iVar6 + 0x3e) & 1) != 0)) {
              iVar8 = DAT_00178f20;
            }
          }
        }
        *(short *)(param_1 + 0x116) = (short)iVar8;
        FUN_0036bbd0(uVar4,param_1,param_2,10);
      }
      goto LAB_00178ebc;
    }
    iVar9 = FUN_0036bc84(param_2);
    *(int *)(param_1 + 0xb0c) = iVar9;
    if (iVar9 != 0) {
      if (iVar9 == 10) {
        FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_00178f04);
        if ((*(ushort *)(iVar6 + 0x3e) & 2) == 0) {
          uVar2 = (undefined2)DAT_00178f08;
        }
        else {
          uVar2 = (undefined2)DAT_00178f0c;
        }
      }
      else {
        uVar2 = (undefined2)DAT_00178f00;
      }
      *(undefined2 *)(DAT_00178f10 + iVar8) = uVar2;
      *(undefined2 *)(param_1 + 0x116) = uVar2;
    }
    *(undefined4 *)(param_1 + 0xb10) = 1;
  }
  uVar3 = *(ushort *)(param_1 + 0xb14) | 0x10;
LAB_00178ed8:
  *(ushort *)(param_1 + 0xb14) = uVar3;
  return;
}
