// OoT3D decomp @ 002f9ca0  name=FUN_002f9ca0  size=488

uint FUN_002f9ca0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;

  uVar4 = DAT_002f9e70;
  puVar3 = *(uint **)(DAT_002f9e5c + 0x9c);
  switch(param_1 - 0x200U) {
  case 0:
    uVar1 = puVar3[0xb];
    break;
  case 1:
    if ((*(uint **)(DAT_002f9e5c + 0xa0) == puVar3) && (*(char *)(DAT_002f9e5c + 0x11) != '\0')) {
      uVar1 = 1;
      break;
    }
    goto LAB_002f9d1c;
  case 2:
    uVar1 = *DAT_002f9e60;
    puVar3[3] = uVar1 - puVar3[1];
    uVar1 = uVar1 - puVar3[1];
    break;
  case 3:
    uVar1 = puVar3[8];
    break;
  case 4:
    uVar1 = puVar3[2];
    break;
  case 5:
    uVar1 = puVar3[7];
    break;
  case 6:
    uVar1 = puVar3[1];
    break;
  case 7:
    if (puVar3 != (uint *)0x0) {
      uVar1 = *puVar3;
      break;
    }
LAB_002f9d1c:
    uVar1 = 0;
    break;
  case 8:
    uVar1 = *DAT_002f9e60;
    break;
  case 9:
    uVar1 = puVar3[4];
    break;
  case 10:
    uVar1 = puVar3[10];
    break;
  case 0xb:
    uVar1 = puVar3[6];
    break;
  case 0xc:
    uVar1 = puVar3[10];
    if ((int)puVar3[8] <= (int)uVar1) {
      return uVar1;
    }
    uVar1 = (uint)*(byte *)(puVar3[6] + uVar1 * 0x1c);
    switch(uVar1) {
    case 0:
      uVar1 = 0x310;
      break;
    case 1:
      uVar1 = DAT_002f9e64;
      break;
    case 2:
      uVar1 = DAT_002f9e68;
      break;
    case 3:
      uVar1 = DAT_002f9e6c;
      break;
    case 4:
      *param_2 = 0x314;
      return 0x314;
    default:
      return uVar1;
    }
    break;
  case 0xd:
    uVar1 = puVar3[10];
    if ((int)puVar3[8] <= (int)uVar1) {
      return uVar1;
    }
    if (*(char *)(puVar3[6] + uVar1 * 0x1c) != '\x01') {
      return uVar1 * 7;
    }
    *param_2 = *(uint *)(puVar3[6] + uVar1 * 0x1c + 4);
    uVar1 = *(uint *)(puVar3[6] + puVar3[10] * 0x1c + 8);
    param_2[1] = uVar1;
    return uVar1;
  case 0xe:
    puVar3 = (uint *)FUN_0030dd98();
    uVar5 = DAT_00466380;
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar6 + 0x84) = uVar4;
    *(undefined4 *)(iVar6 + 0x88) = 4;
    *(undefined4 *)(iVar6 + 0x80) = uVar5;
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    uVar4 = *(undefined4 *)(iVar2 + 0x180);
    uVar5 = *(undefined4 *)(iVar2 + 0x184);
    *(undefined4 *)(iVar2 + 0x180) = 0x10002;
    *(uint **)(iVar2 + 0x184) = param_2;
    uVar1 = *puVar3;
    software_interrupt(0x32);
    *(undefined4 *)(iVar2 + 0x180) = uVar4;
    *(undefined4 *)(iVar2 + 0x184) = uVar5;
    if (-1 < (int)uVar1) {
      uVar1 = *(uint *)(iVar6 + 0x84);
    }
    return uVar1;
  default:
    return param_1 - 0x200U;
  }
  *param_2 = uVar1;
  return uVar1;
}
