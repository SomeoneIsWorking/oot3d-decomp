// OoT3D decomp @ 00194a3c  name=FUN_00194a3c  size=2120

ushort FUN_00194a3c(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;

  uVar6 = *(ushort *)(param_2 + 0x1c) & 0x1f;
  switch(uVar6) {
  case 0:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 == 2) {
      return 2;
    }
    if (iVar5 != 5) {
      return 1;
    }
    iVar5 = FUN_00346964(param_1);
    if (iVar5 == 0) {
      return 1;
    }
    if (*(short *)(DAT_00194de8 + param_2) != 0x3012) {
      return 2;
    }
    *(undefined4 *)(param_2 + 0xbbc) = DAT_00194dec;
    if (*(short *)(DAT_00194dfc +
                   ((int)(*(uint *)(DAT_00194df0 + 0xb8) & *(uint *)(DAT_00194df4 + 4)) >>
                   (uint)*(byte *)(DAT_00194df8 + 1)) * 2 + 8) == 0x1e) {
      uVar8 = 0x34;
    }
    else {
      uVar8 = 0x33;
    }
    *(undefined4 *)(param_2 + 0xef8) = uVar8;
    FUN_003724dc(*(float *)(param_2 + 0x98) + DAT_00194e00,
                 ABS(*(float *)(param_2 + 0x9c)) + DAT_00194e00,param_2,param_1);
    FUN_003725e0(param_1);
    *(ushort *)(DAT_00194e04 + 0x32) = *(ushort *)(DAT_00194e04 + 0x32) | 0x4000;
    return 2;
  case 1:
    uVar4 = FUN_003769d8(param_1 + 0x28a0);
    uVar7 = (uint)*(byte *)(param_2 + 0xc45);
    if ((((uVar7 == 10 || uVar7 == 5) || uVar7 == 2) || uVar7 == 1) && (uVar7 != uVar4)) {
      *(char *)(param_2 + 0xc44) = *(char *)(param_2 + 0xc44) + '\x01';
    }
    *(char *)(param_2 + 0xc45) = (char)uVar4;
    if (uVar4 == 2) {
      sVar2 = *(short *)(DAT_00194de8 + param_2);
      if (sVar2 != 0x3036) {
        if (sVar2 == 0x3037) {
          *(ushort *)(DAT_00194e04 + 0x30) = *(ushort *)(DAT_00194e04 + 0x30) | 0x4000;
          return 0;
        }
        if (sVar2 != 0x3074) {
          return 0;
        }
      }
      *(undefined4 *)(param_2 + 0xef8) = 0x2c;
      FUN_003724dc(*(float *)(param_2 + 0x98) + DAT_00194e00,
                   ABS(*(float *)(param_2 + 0x9c)) + DAT_00194e00,param_2,param_1);
      *(undefined4 *)(param_2 + 0xbbc) = DAT_00194dec;
      return 2;
    }
    if (uVar4 != 4) {
      if (uVar4 != 5) {
        return 1;
      }
      iVar5 = FUN_00346964(param_1);
      if (iVar5 == 0) {
        return 1;
      }
      uVar4 = *(ushort *)(param_2 + 0x116) - 0x3032;
      if (1 < uVar4) {
        if (uVar4 != 3) {
          return 2;
        }
        *(ushort *)(DAT_00194e04 + 0x30) = *(ushort *)(DAT_00194e04 + 0x30) | 0x800;
      }
      *(short *)(param_2 + 0x116) = (short)DAT_00194e08;
      FUN_0036be34(param_1);
      return 1;
    }
    iVar5 = FUN_00346964(param_1);
    if (iVar5 == 0) {
      return 1;
    }
    if (*(short *)(param_2 + 0x116) != 0x3034) {
      return 1;
    }
    iVar5 = FUN_00369f3c(param_1);
    if (iVar5 == 0) {
      uVar4 = DAT_00194e0c;
      if ((*(ushort *)(DAT_00194e04 + 0x30) & 0x800) != 0) {
        uVar4 = DAT_00194e10;
      }
      *(short *)(param_2 + 0x116) = (short)uVar4;
      if ((uVar4 & 0xffff) == 0x3035) {
LAB_00194d10:
        FUN_0048961c(DAT_00194e18);
      }
    }
    else {
      uVar4 = DAT_00194e10;
      if ((*(ushort *)(DAT_00194e04 + 0x30) & 0x800) != 0) {
        uVar4 = DAT_00194e14;
      }
      *(short *)(param_2 + 0x116) = (short)uVar4;
      if ((uVar4 & 0xffff) == 0x3036) goto LAB_00194d10;
    }
    FUN_0036be34(param_1,*(undefined2 *)(param_2 + 0x116));
    *(undefined1 *)(param_2 + 0xc44) = 0;
    break;
  case 2:
    cVar1 = *(char *)(param_2 + 0xc45);
    uVar4 = FUN_003769d8(param_1 + 0x28a0);
    uVar7 = (uint)*(byte *)(param_2 + 0xc45);
    if ((((uVar7 == 10 || uVar7 == 5) || uVar7 == 2) || uVar7 == 1) && (uVar7 != uVar4)) {
      *(char *)(param_2 + 0xc44) = *(char *)(param_2 + 0xc44) + '\x01';
    }
    *(char *)(param_2 + 0xc45) = (char)uVar4;
    if (uVar4 == 3) {
      sVar2 = *(short *)(DAT_00194de8 + param_2);
      if (sVar2 == 0x3054) {
        if (cVar1 != '\0') {
          return 1;
        }
      }
      else {
        if (sVar2 != 0x3059) {
          if (sVar2 != 0x305e) {
            return 1;
          }
          iVar5 = FUN_0036bc84(param_1);
          if (iVar5 != 0xf) {
            return 1;
          }
        }
        if (cVar1 != '\0') {
          return 1;
        }
        FUN_00371af0(DAT_00195324,DAT_00195320,0x3c);
      }
      FUN_00372244(param_1 + 0x5fcc,0x1e,DAT_00195328);
      return 1;
    }
    if (uVar4 != 4) {
      if (uVar4 == 5) {
        iVar5 = FUN_00346964(param_1);
        if (iVar5 == 0) {
          return 1;
        }
        if (*(short *)(DAT_00194de8 + param_2) != 0x3059) {
          return 2;
        }
        FUN_00370778(param_1);
        uVar8 = DAT_00195330;
      }
      else {
        if (uVar4 != 6) {
          return 1;
        }
        uVar4 = *(ushort *)(DAT_00194de8 + param_2) - 0x305e;
        bVar9 = uVar4 != 0;
        if (!bVar9) {
          uVar4 = (uint)*(byte *)(DAT_00194df0 + 0x52);
        }
        if (bVar9 || uVar4 != 0) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0xef8) = 0x57;
        FUN_003724dc(*(float *)(param_2 + 0x98) + DAT_00194e00,
                     ABS(*(float *)(param_2 + 0x9c)) + DAT_00194e00,param_2,param_1);
        uVar8 = DAT_00194dec;
      }
      *(undefined4 *)(param_2 + 0xbbc) = uVar8;
      return 2;
    }
    iVar5 = FUN_00346964(param_1);
    if (iVar5 == 0) {
      return 1;
    }
    if (*(short *)(param_2 + 0x116) != 0x3054 && *(short *)(param_2 + 0x116) != 0x3055) {
      return 1;
    }
    iVar5 = FUN_00369f3c(param_1);
    if (iVar5 != 0) {
      *(short *)(param_2 + 0x116) = (short)DAT_0019532c;
      FUN_0036be34(param_1);
      return 1;
    }
    *(undefined4 *)(param_2 + 0xef8) = 0x23;
    FUN_003724dc(*(float *)(param_2 + 0x98) + DAT_00194e00,
                 ABS(*(float *)(param_2 + 0x9c)) + DAT_00194e00,param_2,param_1);
    *(undefined4 *)(param_2 + 0xbbc) = DAT_00194dec;
    return 2;
  case 3:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 == 2) {
      return 0;
    }
    if (iVar5 != 5) {
      return 1;
    }
    iVar5 = FUN_00346964(param_1);
    if (iVar5 == 0) {
      return 1;
    }
    if (*(short *)(DAT_00194de8 + param_2) != 0x3071) {
      return 1;
    }
    switch(*(ushort *)(param_2 + 0x1c) >> 10) {
    default:
switchD_00194fcc_caseD_0:
      uVar4 = DAT_00195338;
      break;
    case 1:
      uVar4 = DAT_00195354;
      break;
    case 2:
      uVar4 = DAT_00195344;
      break;
    case 3:
      uVar4 = DAT_00195334;
      if (*(char *)(DAT_00194df0 + 0xe) != '\0') goto switchD_00194fcc_caseD_0;
      break;
    case 4:
      uVar4 = DAT_00195340;
      break;
    case 5:
      uVar4 = DAT_0019533c;
      break;
    case 8:
      uVar4 = DAT_0019534c;
      break;
    case 10:
      uVar4 = DAT_00195348;
      break;
    case 0xb:
      uVar4 = DAT_00195350;
    }
    *(short *)(param_2 + 0x116) = (short)uVar4;
    FUN_0036be34(param_1,uVar4 & 0xffff);
    break;
  case 4:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 != 2) {
      if (iVar5 != 4) {
        return 1;
      }
      iVar5 = FUN_00346964(param_1);
      if (iVar5 == 0) {
        return 1;
      }
      if (*(short *)(param_2 + 0x116) != 0x300a) {
        return 1;
      }
      iVar5 = FUN_00369f3c(param_1);
      if (iVar5 == 0) {
        if ((int)(*(uint *)(DAT_00194df0 + 0xb8) & *(uint *)(DAT_00194df4 + 8)) >>
            (uint)*(byte *)(DAT_00194df8 + 2) == 0) {
          uVar3 = (undefined2)DAT_0019535c;
        }
        else {
          uVar3 = (undefined2)DAT_00195360;
        }
        *(undefined2 *)(param_2 + 0x116) = uVar3;
      }
      else {
        *(short *)(param_2 + 0x116) = (short)DAT_00195358;
      }
      FUN_0036be34(param_1,*(undefined2 *)(param_2 + 0x116));
      return 1;
    }
    if (*(short *)(DAT_00194de8 + param_2) != 0x300b) {
      return 0;
    }
    if ((*(ushort *)(DAT_00194e04 + 0x2c) & 0x800) == 0) {
      *(ushort *)(DAT_00194e04 + 0x2c) = *(ushort *)(DAT_00194e04 + 0x2c) | 0x800;
      return 2;
    }
    return 0;
  case 5:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 == 2) {
      return 0;
    }
    break;
  case 6:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 != 2) {
      return 1;
    }
    if (*(short *)(DAT_00194de8 + param_2) != 0x3008) {
      return 0;
    }
    uVar6 = *(ushort *)(DAT_00194e04 + 0x2c) | 1;
    goto LAB_00195294;
  case 7:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 != 2) {
      return 1;
    }
    if (*(short *)(DAT_00194de8 + param_2) != 0x3014) {
      return 0;
    }
    uVar6 = *(ushort *)(DAT_00194e04 + 0x2e) | 1;
    goto LAB_00195214;
  case 8:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 != 2) {
      return 1;
    }
    if (*(short *)(DAT_00194de8 + param_2) != 0x3016) {
      return 0;
    }
    uVar6 = *(ushort *)(DAT_00194e04 + 0x2e) | 0x10;
LAB_00195214:
    *(ushort *)(DAT_00194e04 + 0x2e) = uVar6;
    return 0;
  case 9:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 == 2) {
      if (*(short *)(DAT_00194de8 + param_2) != 0x3018) {
        return 0;
      }
      *(ushort *)(DAT_00194e04 + 0x2e) = *(ushort *)(DAT_00194e04 + 0x2e) | 0x100;
      return 0;
    }
    break;
  case 10:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 != 2) {
      return 1;
    }
    if (*(short *)(DAT_00194de8 + param_2) != 0x300e) {
      return 0;
    }
    uVar6 = *(ushort *)(DAT_00194e04 + 0x2c) | 8;
LAB_00195294:
    *(ushort *)(DAT_00194e04 + 0x2c) = uVar6;
    return 0;
  case 0xb:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar5 == 2) {
      if (*(short *)(DAT_00194de8 + param_2) != 0x3024) {
        return 0;
      }
      *(ushort *)(DAT_00194e04 + 0x2c) = *(ushort *)(DAT_00194e04 + 0x2c) | 0x40;
      return 0;
    }
    break;
  case 0xc:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
    goto joined_r0x0019530c;
  case 0xd:
    iVar5 = FUN_003769d8(param_1 + 0x28a0);
joined_r0x0019530c:
    if (iVar5 == 2) {
      return 0;
    }
    return 1;
  default:
    return uVar6;
  }
  return 1;
}
