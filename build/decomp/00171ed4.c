// OoT3D decomp @ 00171ed4  name=FUN_00171ed4  size=2836

/* WARNING: Type propagation algorithm not settling */

uint FUN_00171ed4(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  float fVar7;

  uVar1 = *(ushort *)(param_2 + 0x104);
  bVar6 = uVar1 == 0x5b;
  if (bVar6) {
    uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
  }
  if (bVar6 && uVar1 == 0xc) {
switchD_00172950_caseD_1:
    FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
    FUN_0034c92c(param_1);
    FUN_0034c664(param_1,param_1 + 0x28c,2);
    return 1;
  }
  if (*(int *)(DAT_00172850 + 4) == 0) {
    if ((*(uint *)(DAT_00172850 + 0xbc) & *DAT_00172854) == 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
    }
  }
  else if ((*(ushort *)(DAT_00172858 + 0xf4) & 1) == 0) {
    uVar2 = (uint)((*(uint *)(DAT_00172850 + 0xbc) & DAT_00172854[0x12]) != 0);
  }
  else {
    uVar2 = 2;
  }
  switch(uVar2) {
  case 0:
    uVar2 = *(ushort *)(param_1 + 0x1c) & 0xff;
    switch(uVar2) {
    case 0:
      param_2 = param_2 + 0x3a58;
      iVar4 = FUN_00373074(param_2,(int)*(char *)(param_1 + 0x22f));
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_00373074(param_2,(int)*(char *)(param_1 + 0x22e));
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_00373074(param_2,(int)*(char *)(param_1 + 0x22d));
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_00373074(param_2,(int)*(char *)(param_1 + 0x22c));
      if (iVar4 == 0) {
        return 0;
      }
      if (*(short *)(param_1 + 0x28c) == 0) {
        if (*(int *)(param_1 + 0x1d4) != DAT_0017285c[7]) {
          FUN_003717ac(param_1 + 0x1a4,DAT_00172860,0x21);
        }
LAB_00172074:
        uVar5 = 1;
        goto LAB_00172078;
      }
      if (*(int *)(param_1 + 0x1d4) != DAT_0017285c[0x1c]) {
        FUN_003717ac(param_1 + 0x1a4,DAT_00172860,0x20);
      }
LAB_00172050:
      uVar5 = 2;
LAB_00172078:
      FUN_0034c664(param_1,param_1 + 0x28c,2,uVar5);
      uVar2 = FUN_0034c92c(param_1);
      return uVar2;
    case 1:
    case 3:
    case 10:
    case 0xc:
      goto switchD_00172950_caseD_1;
    case 2:
switchD_00172950_caseD_0:
      uVar2 = FUN_00172b98(param_1,param_2);
      return uVar2;
    case 4:
      iVar4 = param_2 + 0x3a58;
      iVar3 = FUN_00373074(iVar4,(int)*(char *)(param_1 + 0x22f));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_00373074(iVar4,(int)*(char *)(param_1 + 0x22e));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_00373074(iVar4,(int)*(char *)(param_1 + 0x22d));
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = FUN_00373074(iVar4,(int)*(char *)(param_1 + 0x22c));
      if (iVar4 == 0) {
        return 0;
      }
      if (*(short *)(param_1 + 0x28c) == 0) {
        if (*(int *)(param_1 + 0x1d4) != DAT_0017285c[0x12]) {
LAB_001723d0:
          FUN_003717ac(param_1 + 0x1a4,DAT_00172860,0x1e);
        }
LAB_00172154:
        uVar5 = 1;
        goto LAB_00172158;
      }
      if (*(int *)(param_1 + 0x1d4) != *DAT_0017285c) {
LAB_001723a8:
        FUN_003717ac(param_1 + 0x1a4,DAT_00172860,0x1d);
      }
LAB_00172124:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar5 = 2;
LAB_00172158:
      FUN_0034c664(param_1,param_1 + 0x28c,5,uVar5);
      uVar2 = FUN_0034c92c(param_1);
      return uVar2;
    case 5:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 6:
switchD_00172950_caseD_6:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      FUN_0034c664(param_1,param_1 + 0x28c,2,4);
      return 1;
    case 7:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 8:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 9:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 0xb:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    default:
      goto switchD_00171f50_default;
    }
    break;
  case 1:
    uVar2 = *(ushort *)(param_1 + 0x1c) & 0xff;
    switch(uVar2) {
    case 0:
    case 1:
    case 6:
      goto switchD_00172950_caseD_6;
    case 2:
      goto switchD_00172950_caseD_0;
    case 3:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 4:
      iVar4 = param_2 + 0x3a58;
      iVar3 = FUN_00373074(iVar4,(int)*(char *)(param_1 + 0x22f));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_00373074(iVar4,(int)*(char *)(param_1 + 0x22e));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_00373074(iVar4,(int)*(char *)(param_1 + 0x22d));
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = FUN_00373074(iVar4,(int)*(char *)(param_1 + 0x22c));
      if (iVar4 == 0) {
        return 0;
      }
      if (*(short *)(param_1 + 0x28c) == 0) {
        if (*(int *)(param_1 + 0x1d4) != DAT_0017285c[0x12]) goto LAB_001723d0;
        goto LAB_00172154;
      }
      if (*(int *)(param_1 + 0x1d4) != *DAT_0017285c) goto LAB_001723a8;
      goto LAB_00172124;
    case 5:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 7:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 8:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 9:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 10:
    case 0xc:
      goto switchD_00172950_caseD_1;
    case 0xb:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    default:
      goto switchD_00171f50_default;
    }
    break;
  case 2:
    uVar2 = *(ushort *)(param_1 + 0x1c) & 0xff;
    switch(uVar2) {
    case 0:
    case 1:
    case 6:
      goto switchD_00172950_caseD_6;
    case 2:
      goto switchD_00172950_caseD_0;
    case 3:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 4:
      if (*(short *)(param_1 + 0x28c) == 0) {
        fVar7 = DAT_00172870;
        if (*(int *)(param_1 + 0x1e4) != 0x3fc00000) goto LAB_001725bc;
      }
      else {
        iVar4 = FUN_003736fc(DAT_00172868,DAT_00172864,param_1 + 0x1a4);
        fVar7 = DAT_0017286c;
        if (iVar4 != 0) {
LAB_001725bc:
          *(float *)(param_1 + 0x1e4) = fVar7;
        }
      }
      fVar7 = DAT_0017286c;
      if (*(float *)(param_1 + 0x1e4) == DAT_0017286c) {
        FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      }
      if (*(float *)(param_1 + 0x1e4) != fVar7) goto LAB_00172074;
      goto LAB_00172050;
    case 5:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 7:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 8:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 9:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 10:
    case 0xc:
      goto switchD_00172950_caseD_1;
    case 0xb:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    default:
      goto switchD_00171f50_default;
    }
    break;
  case 3:
    uVar2 = *(ushort *)(param_1 + 0x1c) & 0xff;
    switch(uVar2) {
    case 0:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 1:
    case 6:
      goto switchD_00172950_caseD_6;
    case 2:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 3:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 4:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 5:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 7:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 8:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 9:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 10:
    case 0xc:
      goto switchD_00172950_caseD_1;
    case 0xb:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    default:
      goto switchD_00171f50_default;
    }
    break;
  case 4:
    uVar2 = *(ushort *)(param_1 + 0x1c) & 0xff;
    switch(uVar2) {
    case 0:
      goto switchD_00172950_caseD_0;
    case 1:
    case 2:
    case 4:
    case 10:
    case 0xc:
      goto switchD_00172950_caseD_1;
    case 3:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 5:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 6:
      goto switchD_00172950_caseD_6;
    case 7:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 8:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 9:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    case 0xb:
      FUN_00370f5c(param_2,param_1 + 0xa80,param_1 + 0xaa6,0x13);
      uVar2 = FUN_0034c92c(param_1);
      break;
    default:
      goto switchD_00171f50_default;
    }
    break;
  default:
    goto switchD_00171f50_default;
  }
  if (uVar2 == 1) {
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  FUN_0034c664(param_1,param_1 + 0x28c,2,uVar5);
switchD_00171f50_default:
  return uVar2;
}
