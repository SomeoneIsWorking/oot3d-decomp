// OoT3D decomp @ 0016f1b8  name=FUN_0016f1b8  size=344

void FUN_0016f1b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  uVar2 = DAT_0016f35c;
  uVar1 = DAT_0016f358;
  if (((*(uint *)(DAT_0016f354 + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0016f360), puVar3 = DAT_0016f364, iVar4 != 0)) {
    *DAT_0016f364 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  local_24 = uVar1;
  local_20 = uVar2;
  local_1c = uVar2;
  if (*(char *)(param_4 + 0x963) == '\0') {
    bVar6 = *(short *)(DAT_0016f368 + param_4) == 0;
    uVar5 = 0;
    if (!bVar6) {
      uVar5 = *(uint *)(param_4 + 0x11c);
    }
    if (bVar6 || (uVar5 & 0x400000) == 0) {
      return;
    }
  }
  switch(param_2) {
  case 0:
    iVar4 = 1;
    break;
  default:
    return;
  case 2:
    iVar4 = 4;
    break;
  case 5:
    iVar4 = 3;
    break;
  case 8:
    iVar4 = 2;
    break;
  case 9:
    iVar4 = 0;
    break;
  case 0xb:
    iVar4 = 7;
    break;
  case 0xc:
    iVar4 = 9;
    break;
  case 0xe:
    iVar4 = 6;
    break;
  case 0xf:
    iVar4 = 8;
    break;
  case 0x10:
    iVar4 = 5;
  }
  FUN_003735ac(&local_30,param_4 + 0x148,&local_24);
  param_4 = param_4 + iVar4 * 6;
  *(short *)(param_4 + 0x1a4) = (short)(int)local_30;
  *(short *)(param_4 + 0x1a6) = (short)(int)local_2c;
  *(short *)(param_4 + 0x1a8) = (short)(int)local_28;
  return;
}
