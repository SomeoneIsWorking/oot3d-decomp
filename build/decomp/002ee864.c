// OoT3D decomp @ 002ee864  name=FUN_002ee864  size=1152

void FUN_002ee864(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_20;
  undefined4 uStack_1c;

  if (*(int *)(DAT_002eed48 + param_1 * 4) != 0) {
switchD_002ee884_caseD_3:
    return;
  }
  switch(param_1) {
  case 0:
  case 1:
  case 2:
    if (*(int *)(DAT_002eed4c + param_1 * 4) != 0) {
      iVar3 = FUN_002eee84(param_1);
      iVar1 = FUN_00313ce0(0x4c);
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = FUN_0044cbb8(iVar1,iVar3 + 0x1c,*(undefined1 *)(iVar3 + 0x2c),0,0);
      }
      iVar3 = DAT_002eed48;
      *(undefined4 *)(DAT_002eed48 + param_1 * 4) = uVar4;
      iVar1 = FUN_002eee84(param_1);
      iVar2 = FUN_00313ce0(0x4c);
      uVar4 = 0;
      if (iVar2 != 0) {
        FUN_003061a8(&local_20,*(undefined4 *)(iVar1 + 0x13bc),*(undefined4 *)(iVar1 + 0x13c0),
                     *(undefined4 *)(iVar1 + 0x13c4),*(undefined4 *)(iVar1 + 0x13c8),
                     *(undefined4 *)(iVar1 + 0x13cc),0,0);
        uVar4 = FUN_0044ce70(iVar2,0,0,*(undefined4 *)(DAT_002eed50 + 0x3c),local_20,uStack_1c,
                             *(undefined4 *)(DAT_002eed50 + 0x38),
                             *(undefined4 *)(DAT_002eed50 + 0x3c));
      }
      *(undefined4 *)(iVar3 + param_1 * 4 + 0xc) = uVar4;
      return;
    }
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 == 0) goto LAB_002eeae0;
    uVar6 = 1;
    uVar5 = 0;
    uVar4 = 0;
    iVar1 = DAT_002eed54;
    break;
  default:
    goto switchD_002ee884_caseD_3;
  case 6:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,0x950,0x3e,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x18) = uVar4;
    return;
  case 7:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,*(int *)(DAT_002eed50 + 0x14) + 0x95d,0x76,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x1c) = uVar4;
    return;
  case 9:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,DAT_002eed58,0x3e,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x24) = uVar4;
    return;
  case 10:
  case 0xb:
  case 0xc:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 == 0) goto LAB_002eeae0;
    uVar6 = 0;
    uVar5 = 0x10;
    uVar4 = 0x3e;
    iVar1 = param_1 + 0x949;
    break;
  case 0xf:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,DAT_002eed60,0x3e,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x3c) = uVar4;
    return;
  case 0x10:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,DAT_002eed64,0x3e,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x40) = uVar4;
    return;
  case 0x11:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,0x9d0,0x3e,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x44) = uVar4;
    return;
  case 0x12:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,DAT_002eed5c,0x5e,0xc3,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x48) = uVar4;
    return;
  case 0x13:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,DAT_002eed68,0x3e,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x4c) = uVar4;
    return;
  case 0x14:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,0x9ce,0x3e,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x50) = uVar4;
    return;
  case 0x15:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,DAT_002eed6c,0x5e,0xc3,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x54) = uVar4;
    return;
  case 0x16:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,DAT_002eed70,0x3e,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x58) = uVar4;
    return;
  case 0x17:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,DAT_002eed74,0x3e,0x10,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x5c) = uVar4;
    return;
  case 0x18:
    iVar3 = FUN_00313ce0(0x4c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f57f0(iVar3,DAT_002eed78,0x5e,0xc3,0);
    }
    *(undefined4 *)(DAT_002eed48 + 0x60) = uVar4;
    return;
  }
  uVar4 = FUN_002f57f0(iVar3,iVar1,uVar4,uVar5,uVar6);
LAB_002eeae0:
  *(undefined4 *)(DAT_002eed48 + param_1 * 4) = uVar4;
  return;
}
